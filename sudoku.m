% Reference: This program is developed based on the mercury code provided on LMS. 
% The orignal file is named sudoku_starter.m 
% Another file- grouping.m on LMS is also used to develop this program.


% Instructions:  start by renaming this file to sudoku.m.
% Feel free to remove any code you don't need, and modify any code to
% suit your needs.  But remember to PROMINENTLY INDICATE ANY CODE FROM
% THIS FILE THAT YOU INCLUDE IN YOUR FINAL SUBMISSION.
%
% I have included minimal documentation of the code to help you
% understand and adapt it, but do not take this to indicate the level
% of documentation expected of completed implementations.  It is up to
% you to write your own documentation.

:- module sudoku.
:- interface.
:- import_module io,list,set,grouping.
:- pred main(io::di, io::uo) is det.	% change det to cc_multi if
					% you use nondeterminism

:- implementation.
:- import_module list, char, int, set, map.

main(!IO) :-
	io.command_line_arguments(Args, !IO),
	(   Args = [File]
	->  io.see(File, Result, !IO),
	    (   Result = ok,
		sudoku(!IO),
		io.seen(!IO)
	    ;   Result = error(_),
		io.write_string("Could not open puzzle file\n", !IO),
		set_exit_status(1, !IO)
	    )
	;   usage(!IO),
	    set_exit_status(1, !IO)
	).


:- pred usage(io::di, io::uo) is det.

%  Print out a usage message for this program.

usage(!IO) :-
	io.write_string("Usage:  sudoku filname\n", !IO),
	io.write_string(
"  where filname is the name of a file containing a sudoku puzzle\n", !IO),
	io.write_string(
"  written as a file of 4, 9, 16, or 25 lines, each with that same\n", !IO),
	io.write_string(
"  number of characters.  All characters on each line must be either\n", !IO),
	io.write_string(
"  a space (for squares to be solved for) or a digit (except 0) or a\n", !IO),
	io.write_string(
"  letter.  A solved puzzle is the same, except that all spaces have\n", !IO),
	io.write_string(
"  been filled in with letters and digits, and each digit or letter\n", !IO),
	io.write_string(
"  between 1 and the width of the puzzle (where 'a' is taken for 10,\n", !IO),
	io.write_string(
"  and so on) appears exactly once in each row, column, and box.\n", !IO).


:- pred sudoku(io::di, io::uo) is det.	% change det to cc_multi if
					% you use nondeterminism

%  Read in a puzzle from the current input stream, solve it, and print
%  out the result.

sudoku(!IO) :-
	load_puzzle(Puzzle, !IO),
	(   Puzzle = []
	->  io.write_string("Error reading puzzle\n", !IO),
	    set_exit_status(1, !IO)
	;   valid_sudoku_size(length(Puzzle), Size, Boxsize)
	->  % solve the puzzle here!  For now, just print it as it was read.
	    print_puzzle(Puzzle, Size, Boxsize, !IO)
	;  io.write_string("Invalid puzzle size\n", !IO),
	    set_exit_status(1, !IO)
	).


:- pred valid_sudoku_size(int::in, int::out, int::out) is semidet.

%  valid_sudoku_size(Size, Width, Boxsize)
%  holds if Width x Width is a valid size for a Sudoku puzzle, Size is
%  Width x Width, and Boxsize is the square root of Width.

valid_sudoku_size( 16, 4, 2).
valid_sudoku_size( 81, 9, 3).
valid_sudoku_size(256, 16, 4).
valid_sudoku_size(625, 25, 5).
% We could go bigger, but we wouldn't have enough letters to handle
% input and output of the puzzles.  We'd have to use a different
% file format.



:- pred load_puzzle(list(int)::out, io::di, io::uo) is det.

%  Read in a Sudoku puzzle from the current input stream and return
%  it.  We ignore the way the input is broken into lines and simply
%  return the content as a flat list of values, with -1 used for
%  un-filled cells.

load_puzzle(Puzzle, !IO) :-
	io.read_char(Result, !IO),
	(   ( Result = eof ; Result = error(_) ),
	    Puzzle = []
	;   Result = ok(Char),
	    (   char.digit_to_int(Char, Int)
	    ->  Puzzle = [Int|Puzzle1]
	    ;   % for flexibility, we accept spaces, underscores and
		% periods as indicating an unfilled cell.
		( Char = ' ' ; Char = ('.') ; Char = '_' )
	    ->  Puzzle = [-1|Puzzle1]
	    ;   Puzzle = Puzzle1
	    ),
	    load_puzzle(Puzzle1, !IO)
	).

:- type cell ---> cell (index::int, value::int)
%  Defined a cell type, it has two fields, index in the Puzzle list, and the value (1-9).


:- pred solve_puzzle (list(int)::in, list(int)::out) is det

% Solve a puzzle, the puzzle is a list of filled and unfilled cells.
% Return a list with cells that are all filled.

solve_puzzle (Puzzle,SolvedPuzzle) :- 
      (  
         findAndUpdate_cells_haveOnePossibleValue(0,Puzzle,ProcessedPuzzle,Succeed),
         Succeed = 1
          -> solve_puzzle (Puzzle,ProcessedPuzzle)
          % Hard sudoku questions, have to make a guess first.
          ; false

            %%%%%%%%%%%%%%%%%% Stage 2 
            %get_cell_withFewestPossibleValue(ProcessedPuzzle,LuckyCell),
            %get_aPossibleValue_ofCell(ProcessedPuzzle,LuckyCell,Value),
            %UpdatedCell = LuckCell ^ value := Value,
            %ungroup_list(1,2,3,Puzzle1,ProcessedPuzzle),
            % FIX ME: update the Puzzle1 list at cell.index with cell.value.
            % Applying the simple strategy on this updated puzzle-Puzzle2.

            % Recusive call to solve_puzzle or use backtracking
            % FIX ME: NOTE: the back tracking stuff would happen at here.
            %% solve_puzzle(Puzzle2,SolvedPuzzle),
            %findAndUpdate_cells_haveOnePossibleValue(GroupedPuzzle,ProcessedPuzzle,Succeed),
	        %Succeed = 1
	        %-> solve_puzzle (Puzzle,ProcessedPuzzle)
	        %; false % explicitly failing.
       ).

:- pred findAndUpdate_cells_haveOnePossibleValue(int::in,list(int)::in, list(int)::out,int::out) is det

%  Try to find and update all the cells from index 0 in the puzzle list who could have only one possible value, 
%  Update that cell and do this recursively until no cells could be updated.
%  If found a cell, then the value field of the cell will be udpated, otherwise not.
%  The last out parameter indicates whether updated all the cells or not. 0 means no. 1 mean yes.

findAndUpdate_cells_haveOnePossibleValue(CellIndex,Puzzle,UpdatedPuzzle,Succeed) :-
      (  list.length(Puzzle,PuzzleLen),
         CellIndex >= PuzzleLen
         -> (   list.contains(Puzzle,-1) 
                ->  findAndUpdate_cells_haveOnePossibleValue(CellIndex,Puzzle,UpdatedPuzzle,0)
                ; findAndUpdate_cells_haveOnePossibleValue(CellIndex,Puzzle,UpdatedPuzzle,1)
            )
         ;
         find_allPossibleValues_ofCell(Puzzle,cell(CellIndex,_), PossibleValues),
         list.length(PossibleValues,Len),
         Len = 1
         -> ( list.take(1,PossibleValues,Head),
              list.replace_nth(Puzzle,CellIndex+1,Head,UpdatedPuzzle)
            )
         ;  UpdatePuzzle = Puzzle,
         findAndUpdate_cells_haveOnePossibleValue(CellIndex+1,UpdatedPuzzle,UpdatedPuzzle1,Succeed) 
       ).                               
                           

:- pred find_allPossibleValues_ofCell (list(int)::in,cell::in,list(int)::out) is det

%  Find all possible values that an unfilled cell could have. Call itself recursively.

find_allPossibleValues_ofCell(Puzzle,UnfilledCell, PossibleValues) :-
    (    return_row_collum_countryOfACell(Puzzle,UnfilledCell^index, RowValues,CollumValues,CountryValues),
         list.append(RowValues,CollumValues,TempList),
         list.append(TempList,CountryValues,TempList2),
         list.remove_dups(TempList2,UsedValueList),
         removeUsedValues(1,UsedValueList,PossibleValues),
         find_allPossibleValues_ofCell(Puzzle,UnfilledCell,PossibleValues)
     ).  

:- pred removeUsedValues (int::in,list(int)::in,list(int)::out) is det
%  Remove used values in row, collum and the country. Input is all the values used.
%  Output is the difference of [1-9] and input list.
%  Initial value of Value must be 1.
removeUsedValues (Value, InputList, OutputList) :- 
      (  
          Value > 9
          -> removeUsedValues(Value,InputList,OutputList) 
         ;
          ( 
           list.contains(InputList,Value) 
           -> OutputList1 = OutputList 
           ; OutputList1 = [Value|OutputList],
           removeUsedValues(Value+1,InputList,OutputList1)
          )
      ).



:- pred get_aPossibleValue_ofCell (list(int)::in,cell::in,int::out) is multi

%  Return a possible value of an unfilled cell.
%  Could be used to get a reasonable guess.     
%  Update the value of the cell from -1 to another value.

%get_aPossibleValue_ofCell(Puzzle,UnfilledCell,A_PossibleValue) :- 
        %
 
:- pred get_cell_withFewestPossibleValue (list(list(int))::in, cell::out ) is det

% Find out a cell with fewest possible alternative values

%get_cell_withFewestPossibleValue(Puzzle,LuckyCell) :- 




:- pred return_row_collum_countryOfACell (list(int)::in,int:in,list(int)::out,list(int)::out,list(int)::out)

% Given the Puzzle and index of the unfilled cell, return the number on the row, collum and country.

return_row_collum_countryOfACell (Puzzle,Index,Row,Collum,Country) :- 
            ( 
              grouping (0,9,9,Puzzle,RowList),
              grouping (8,9,9,Puzzle,CollumList),
              grouping (0,3,3,Puzzle,CountryList),  

              %Return row collum country based on Index
              Index div 9  = RowIndex, 
              Index mod 9  = CollumIndex,
              if 
                  RowIndex =< 2      
              then    
                  (
                     if
                        CollumIndex =< 2
                     then
                        CountryIndex = 0
                     else if
                        CollumIndex =< 5
                     then
                        CountryIndex = 1
                     else
                        CountryIndex = 2
                  )   
              else if
                  RowIndex =< 5 
              then
                  (
                     if
                        CollumIndex =< 2
                     then
                        CountryIndex = 3              
                     else if
                        CollumIndex =< 5
                     then
                        CountryIndex = 4
                     else
                        CountryIndex = 5
                  )
              else 
                  (
                     if
                        CollumIndex =< 2
                     then
                        CountryIndex = 6              
                     else if
                        CollumIndex =< 5
                     then
                        CountryIndex = 7
                     else
                        CountryIndex = 8
                  )

              % Remove unfilled cells which are indicated by -1. 
             list.index0(RowList,RowIndex,TempRow),
             list.index0(CollumList,CollumIndex,TempCollum),
             list.index0(CountryList,CountryIndex,TempCountry),
             list.delete_all(TempRow,-1,Row),
             list.delete_all(TempCollum,-1,Collum),
             list.delete_all(TempCountry,-1,Country),              
              
              return_row_collum_countryOfACell (Puzzle,Index,Row,Collum,Country)
            ).
            



:- pred print_puzzle(list(int)::in, int::in, int::in,
		     io::di, io::uo) is det.

%  print_puzzle(Puzzle, Size, Boxsize, !IO)
%  Print out a (possibly partially filled) sudoku puzzle

print_puzzle(Puzzle, Size, Boxsize, !IO) :-
	print_hbar(Size, Boxsize, !IO),
	(   Puzzle = []
	->  true
	;   print_chunk(Puzzle, Puzzle1, Boxsize, Size, Boxsize, !IO),
	    print_puzzle(Puzzle1, Size, Boxsize, !IO)
	).


:- pred print_chunk(list(int)::in, list(int)::out,
		    int::in, int::in, int::in, io::di, io::uo) is det.

%  Print out one Boxsize-height chunk of the given puzzle.

print_chunk(!Puzzle, Rowsleft, Size, Boxsize, !IO) :-
	(   Rowsleft = 0
	->  true
	;   print_row(!Puzzle, Size, Boxsize, !IO),
	    print_chunk(!Puzzle, Rowsleft-1, Size, Boxsize, !IO)
	).


:- pred print_row(list(int)::in, list(int)::out,
		    int::in, int::in, io::di, io::uo) is det.

%  Print out one row of the given puzzle.

print_row(!Puzzle, Remaining, Boxsize, !IO) :-
	(   0 = Remaining mod Boxsize
	->  write_char('|', !IO)
	;   true
	),
	(   Remaining = 0
	->  nl(!IO)
	;   !.Puzzle = [Int|!:Puzzle]
	->  (   int_to_digit(Int, Digit)
	    ->  write_char(Digit, !IO)
	    ;   write_char('.', !IO)
	    ),
	    print_row(!Puzzle, Remaining-1, Boxsize, !IO)
	;   nl(!IO)
	).


:- pred print_hbar(int::in, int::in, io::di, io::uo) is det.

%  print_hbar(Width, Boxsize, !IO)
%  Print out a horizontal bar of Width '-' characters punctuated by a '+'
%  every Boxsize characters and beginning and ending with a '+'.

print_hbar(Remaining, Boxsize, !IO) :-
	(   0 = Remaining mod Boxsize
	->  write_char('+', !IO)
	;   true
	),
	(   Remaining = 0
	->  nl(!IO)
	;   write_char('-', !IO),
	    print_hbar(Remaining-1, Boxsize, !IO)
	).

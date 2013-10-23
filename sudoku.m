% Reference: This program is developed based on the mercury code provided on LMS. 
% The orignal file is named sudoku_starter.m 
% Another file - grouping.m on LMS is also used to develop this program.


:- module sudoku.
:- interface.
:- import_module io,list.
:- pred main(io::di, io::uo) is cc_multi.	% change det to cc_multi if
					% you use nondeterminism

:- pred group_list(int, int, int, list(E), list(list(E))).
:- mode group_list(in, in, in, in, out) is det.

:- pred ungroup_list(int, int, int, list(E), list(list(E))).
:- mode ungroup_list(in, in, in, out, in) is det.

:- implementation.
:- import_module list, char, int, set, map,string,require.

%  group_list(Width, Period, Repeat, List, Grouped)
%  holds iff Grouped is a list of lists containing the same multiset
%  of elements as the list List.  Each list in Grouped contains Repeat
%  adjacent sequences of Width elements of List over a cycle of Period
%  groups.  The first Period elements of Grouped comprise the first
%  Width*Period*Repeat elements of List, and so on, to cover all the
%  elements of List.  This predicate throws an exception if the length
%  of List is not divisible by Width*Period*Repeat.  For example:
%  group_list(1, 2, 3, [1,2,3,4,5,6,7,8,9,10,11,12],
%             [[1,3,5],[2,4,6],[7,9,11],[8,10,12]])

group_list(Width, Period, Repeat, List, Grouped) :-
	( group_list1(Width, Period, Repeat, List, Grouped_rev) ->
	    list.map((pred(X::in,Y::out) is det :- reverse(X,Y)),
		     Grouped_rev, Grouped)
	;   error("internal error:  wrong list lengths")
	).



:- pred group_list1(int, int, int, list(E), list(list(E))).
:- mode group_list1(in, in, in, in, out) is semidet.

%  group_list1(Width, Period, Repeat, List, Grouped)
%  This is the same as group_list(Width, Period, Repeat, List,
%  Grouped), except that the elements of Grouped are each reversed.
%  Fails if the length of List is not divisible by Width*Period*Repeat.

group_list1(Width, Period, Repeat, List, Grouped) :-
	(   List = [],
	    Grouped = []
	;   List = [_|_],
	    duplicate(Period, [], Grouped0),
	    chunk_list(Width, Repeat, List, List1, Grouped0, Grouped1),
	    group_list1(Width, Period, Repeat, List1,
			  Grouped2),
	    append(Grouped1, Grouped2, Grouped)
	).


:- pred chunk_list(int, int, list(E), list(E), list(list(E)), list(list(E))).
:- mode chunk_list(in, in, in, out, in, out) is semidet.

%  Handles one chunk of Width*Period*Repeat elements of List,
%  constructing Period elements of Grouped.

chunk_list(Width, Repeat, !List, !Grouped) :-
	( Repeat = 0 ->
	    true
	;   group_single_repeat(Width, !List, !Grouped),
	    chunk_list(Width, Repeat-1, !List, !Grouped)
	).


:- pred group_single_repeat(int, list(E), list(E),
			    list(list(E)), list(list(E))).
:- mode group_single_repeat(in, in, out, in, out) is semidet.
:- mode group_single_repeat(in, out, in, out, in) is semidet.

%  Takes Width elements from the front of List for each element of
%  Grouped0, adding them to the front of that list to construct Grouped.

group_single_repeat(Width, !List, Grouped0, Grouped) :-
	(   Grouped0 = [],
	    Grouped = [] 
	;   Grouped0 = [G0|Grouped0tail],
	    Grouped = [G|Groupedtail],
	    extract_prefix(Width, !List, G0, G),
	    group_single_repeat(Width, !List, Grouped0tail, Groupedtail)
	).


:- pred extract_prefix(int, list(E), list(E), list(E), list(E)).
:- mode extract_prefix(in, in, out, in, out) is semidet.
:- mode extract_prefix(in, out, in, out, in) is semidet.

%  extract_prefix(Count, !List, !F)
%  Takes the first Count elements from the front of !List and adds
%  them to the front of !F in reverse order.

extract_prefix(Count, !List, F0, F) :-
	( Count =< 0 ->
	    F = F0
	;   !.List = [E|!:List],
	    extract_prefix(Count-1, !List, [E|F0], F)
	).


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%  ungroup_list(Width, Period, Repeat, List, Grouped)
%  This predicate is semantically identical to
%  group_list(Width, Period, Repeat, List, Grouped),
%  but this computes the list from the list of groups.

ungroup_list(Width, Period, Repeat, List, Grouped) :-
	list.map((pred(X::in,Y::out) is det :- reverse(X,Y)),
		     Grouped, Grouped_rev),
	( ungroup_list1(Width, Period, Repeat, List1, Grouped_rev) ->
	    List = List1
	;   error("internal error:  wrong list lengths")
	).


:- pred ungroup_list1(int, int, int, list(E), list(list(E))).
:- mode ungroup_list1(in, in, in, out, in) is semidet.

%  ungroup_list1(Width, Period, Repeat, List, Grouped)
%  This is the same as ungroup_list(Width, Period, Repeat, List,
%  Grouped), except that the elements of Grouped are each reversed.
%  Fails if the length of List is not divisible by Width*Period*Repeat.

ungroup_list1(Width, Period, Repeat, List, Grouped) :-
	( Grouped = [] ->
	    List = []
	;   extract_prefix(Period, Chunk, [], Grouped1, Grouped),
	    ungroup_list1(Width, Period, Repeat, List1, Grouped1),
	    unchunk_list(Width, Repeat, Chunk, List, List1)
	).


:- pred unchunk_list(int, int, list(list(E)), list(E), list(E)).
:- mode unchunk_list(in, in, in, out, in) is semidet.

%  Handles one chunk of Width*Period*Repeat elements of List,
%  constructing Period elements of Grouped.

unchunk_list(Width, Repeat, Grouped, List, List0) :-
	( Repeat = 0 ->
	    List = List0
	;   ungroup_single(Width, List1, List0, Grouped1, Grouped),
	    unchunk_list(Width, Repeat-1, Grouped1, List, List1)
	).


:- pred ungroup_single(int, list(E), list(E), list(list(E)), list(list(E))).
:- mode ungroup_single(in, out, in, out, in) is semidet.

%  Takes Width elements from the front of each list on Group and adds
%  them to the front of List.

ungroup_single(Width, List, List0, Grouped, Grouped0) :-
	(   Grouped0 = [],
	    Grouped = [],
	    List = List0
	;   Grouped0 = [G0|Grouped0tail],
	    Grouped = [G|Groupedtail],
	    extract_prefix(Width, List1, List0, G, G0),
	    ungroup_single(Width, List, List1, Groupedtail, Grouped0tail)
	).



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


:- pred sudoku(io::di, io::uo) is cc_multi.	% change det to cc_multi if
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
     (  solve_puzzle(Puzzle,OutputPuzzle)
	     ->print_puzzle(OutputPuzzle, Size, Boxsize, !IO)
       ;print_puzzle(Puzzle, Size, Boxsize, !IO)
     )
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



:- type cell 
            ---> cell(index :: int, value :: int).


% Solve a puzzle, the puzzle is a list of filled and unfilled cells.
% Return a list with cells that are all filled.

:- pred solve_puzzle(list(int)::in, list(int)::out) is semidet.

solve_puzzle(Puzzle,ProcessedPuzzle) :- 
      (  
         findAndUpdate_cells_haveOnePossibleValue(0,Puzzle,ProcessedPuzzle)
         %list.contains(ProcessedPuzzle0,-1)
         %-> ProcessedPuzzle = ProcessedPuzzle0
         % Hard sudoku questions, have to make a guess first.
         %; ProcessedPuzzle = ProcessedPuzzle0
           
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


%  Remove used values in row, collum and the country. Input is all the values used.
%  Output is the difference of [1-9] and input list.
%  Initial value of Value must be 1.

:- pred removeUsedValues(list(int)::in,list(int)::out) is det.

removeUsedValues(InputList, OutputList) :- 
         FullList = [1,2,3,4,5,6,7,8,9],
         list.delete_elems(FullList,InputList,OutputList).
        
        
:- pred findAndUpdate_cells_haveOnePossibleValue(int::in,list(int)::in, list(int)::out) is semidet.

%  Try to find and update all the cells from index 0 in the puzzle list who could have only one possible value, 
%  Update that cell and do this recursively until no cells could be updated.
%  If found a cell, then the value field of the cell will be udpated, otherwise not.
%  The last out parameter indicates whether updated all the cells or not. 0 means no. 1 mean yes.

findAndUpdate_cells_haveOnePossibleValue(CellIndex,Puzzle,UpdatedPuzzle) :-
      (  
       	 list.length(Puzzle,PuzzleLen),
         (if  CellIndex >= PuzzleLen
         then
               UpdatedPuzzle = Puzzle  %findAndUpdate_cells_haveOnePossibleValue(CellIndex,Puzzle,UpdatedPuzzle)
         else
             list.index0(Puzzle,CellIndex,Value),
	         (if 
	             not (Value = -1)
	         then 
	              findAndUpdate_cells_haveOnePossibleValue(CellIndex+1,Puzzle,UpdatedPuzzle)
	         else 
		         find_allPossibleValues_ofCell(Puzzle,cell(CellIndex,0), PossibleValues),
		         list.length(PossibleValues,Len),
		         Len = 1
		         -> ( list.index0(PossibleValues,0,Head),
		              list.replace_nth(Puzzle,CellIndex+1,Head,UpdatedPuzzle1),
		              %Puzzle = UpdatedPuzzle1,
		              findAndUpdate_cells_haveOnePossibleValue(CellIndex+1,UpdatedPuzzle1,UpdatedPuzzle)
		            )
		         ;
		         findAndUpdate_cells_haveOnePossibleValue(CellIndex+1,Puzzle,UpdatedPuzzle)
		       )
		  )
       ).
       
                           

:- pred find_allPossibleValues_ofCell(list(int) :: in, cell::in, list(int)::out) is semidet.

%  Find all possible values that an unfilled cell could have. Call itself recursively.

find_allPossibleValues_ofCell(Puzzle,UnfilledCell,PossibleValues) :-
     (   return_row_collum_countryOfACell(Puzzle,UnfilledCell^index, RowValues,CollumValues,CountryValues),
         TempList = RowValues ++ CollumValues, %list.append(RowValues,CollumValues,TempList),
         TempList2 = TempList ++ CountryValues, % list.append(TempList,CountryValues,TempList2),
         list.remove_dups(TempList2,UsedValueList),
         removeUsedValues(UsedValueList,PossibleValues)
         %find_allPossibleValues_ofCell(Puzzle,UnfilledCell,PossibleValues)
     ).  




%:- pred get_aPossibleValue_ofCell (list(int)::in,cell::in,int::out) is multi.

%  Return a possible value of an unfilled cell.
%  Could be used to get a reasonable guess.     
%  Update the value of the cell from -1 to another value.

%get_aPossibleValue_ofCell(Puzzle,UnfilledCell,A_PossibleValue) :- 
        %
 
%:- pred get_cell_withFewestPossibleValue (list(list(int))::in, cell::out ) is det.

% Find out a cell with fewest possible alternative values

%get_cell_withFewestPossibleValue(Puzzle,LuckyCell) :- 




:- pred return_row_collum_countryOfACell(list(int)::in,int::in,list(int)::out,list(int)::out,list(int)::out) is semidet.

% Given the Puzzle and index of the unfilled cell, return the number on the row, collum and country.

return_row_collum_countryOfACell(Puzzle,Index,Row,Collum,Country) :- 
            ( 
              group_list(3,3,3,Puzzle,CountryList), 
              group_list(1,1,9,Puzzle,RowList),
              group_list(1,9,9,Puzzle,CollumList),
 

              %Return row collum country based on Index
              Index div 9  = RowIndex, 
              Index mod 9  = CollumIndex,
             (if 
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
            ),
              % Remove unfilled cells which are indicated by -1. 
             list.index0(RowList,RowIndex,TempRow),
             list.index0(CollumList,CollumIndex,TempCollum),
             list.index0(CountryList,CountryIndex,TempCountry),
             list.delete_all(TempRow,-1,Row),
             list.delete_all(TempCollum,-1,Collum),
             list.delete_all(TempCountry,-1,Country)
              
             %return_row_collum_countryOfACell(Puzzle,Index,Row,Collum,Country)
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

	


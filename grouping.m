% RCS     : $Id$
% Authors : peter (Peter Schachte)
% Purpose : Break up a list into groups of elements in a cyclic pattern

:- module grouping.
:- interface.

:-import_module list.

:- pred group_list(int, int, int, list(E), list(list(E))).
:- mode group_list(in, in, in, in, out) is det.

:- pred ungroup_list(int, int, int, list(E), list(list(E))).
:- mode ungroup_list(in, in, in, out, in) is det.

:- implementation.

:-import_module int, require.

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

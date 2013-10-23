

sudoku.optdate sudoku.trans_opt_date sudoku.err sudoku.c_date sudoku.s_date sudoku.pic_s_date sudoku.il_date sudoku.java_date : sudoku.m \
	builtin.int \
	char.int \
	int.int \
	io.int \
	list.int \
	map.int \
	private_builtin.int \
	set.int \
	string.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	maybe.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set_ordlist.int2 \
	stream.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

sudoku.pic_o sudoku.$O : \
	array.mih \
	assoc_list.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	construct.mih \
	deconstruct.mih \
	enum.mih \
	grouping.mih \
	int.mih \
	io.mih \
	list.mih \
	map.mih \
	maybe.mih \
	ops.mih \
	pair.mih \
	pretty_printer.mih \
	private_builtin.mih \
	random.mih \
	rtti_implementation.mih \
	set.mih \
	set_ordlist.mih \
	stream.mih \
	string.mih \
	term.mih \
	time.mih \
	tree234.mih \
	type_desc.mih \
	univ.mih

sudoku.mh sudoku.mih : sudoku.c


ifeq ($(findstring il,$(GRADE)),il)
sudoku.module_dep : sudoku.il
else
 ifeq ($(findstring java,$(GRADE)),java)
sudoku.module_dep : jmercury/sudoku.java
 else
sudoku.module_dep : sudoku.c
 endif
endif


sudoku.date sudoku.date0 : sudoku.m \
	builtin.int3 \
	char.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	private_builtin.int3 \
	set.int3 \
	string.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

sudoku.date0 : sudoku.m \
	builtin.int3 \
	char.int3 \
	int.int3 \
	io.int3 \
	list.int3 \
	map.int3 \
	private_builtin.int3 \
	set.int3 \
	string.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set_ordlist.int3 \
	stream.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



sudoku.$O :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh



sudoku.pic_o :  \
	array.mh \
	array.mh \
	time.mh \
	time.mh \
	bitmap.mh \
	bitmap.mh \
	string.mh \
	time.mh \
	io.mh \
	io.mh


sudoku.int0 : sudoku.date0
	@:
sudoku.int : sudoku.date
	@:
sudoku.int2 : sudoku.date
	@:
sudoku.int3 : sudoku.date3
	@:
sudoku.opt : sudoku.optdate
	@:
sudoku.trans_opt : sudoku.trans_opt_date
	@:

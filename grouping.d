

grouping.optdate grouping.trans_opt_date grouping.err grouping.c_date grouping.s_date grouping.pic_s_date grouping.il_date grouping.java_date : grouping.m \
	builtin.int \
	int.int \
	list.int \
	private_builtin.int \
	require.int \
	array.int2 \
	assoc_list.int2 \
	bitmap.int2 \
	bool.int2 \
	char.int2 \
	construct.int2 \
	deconstruct.int2 \
	enum.int2 \
	io.int2 \
	map.int2 \
	maybe.int2 \
	ops.int2 \
	pair.int2 \
	pretty_printer.int2 \
	random.int2 \
	rtti_implementation.int2 \
	set.int2 \
	set_ordlist.int2 \
	stream.int2 \
	string.int2 \
	term.int2 \
	time.int2 \
	tree234.int2 \
	type_desc.int2 \
	univ.int2

grouping.pic_o grouping.$O : \
	array.mih \
	assoc_list.mih \
	bitmap.mih \
	bool.mih \
	builtin.mih \
	char.mih \
	construct.mih \
	deconstruct.mih \
	enum.mih \
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
	require.mih \
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

grouping.mh grouping.mih : grouping.c


ifeq ($(findstring il,$(GRADE)),il)
grouping.module_dep : grouping.il
else
 ifeq ($(findstring java,$(GRADE)),java)
grouping.module_dep : jmercury/grouping.java
 else
grouping.module_dep : grouping.c
 endif
endif


grouping.date grouping.date0 : grouping.m \
	builtin.int3 \
	int.int3 \
	list.int3 \
	private_builtin.int3 \
	require.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3

grouping.date0 : grouping.m \
	builtin.int3 \
	int.int3 \
	list.int3 \
	private_builtin.int3 \
	require.int3 \
	array.int3 \
	assoc_list.int3 \
	bitmap.int3 \
	bool.int3 \
	char.int3 \
	construct.int3 \
	deconstruct.int3 \
	enum.int3 \
	io.int3 \
	map.int3 \
	maybe.int3 \
	ops.int3 \
	pair.int3 \
	pretty_printer.int3 \
	random.int3 \
	rtti_implementation.int3 \
	set.int3 \
	set_ordlist.int3 \
	stream.int3 \
	string.int3 \
	term.int3 \
	time.int3 \
	tree234.int3 \
	type_desc.int3 \
	univ.int3



grouping.$O :  \
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



grouping.pic_o :  \
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


grouping.int0 : grouping.date0
	@:
grouping.int : grouping.date
	@:
grouping.int2 : grouping.date
	@:
grouping.int3 : grouping.date3
	@:
grouping.opt : grouping.optdate
	@:
grouping.trans_opt : grouping.trans_opt_date
	@:

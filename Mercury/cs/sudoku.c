/*
** Automatically generated from `sudoku.m'
** by the Mercury compiler,
** version rotd-2013-10-01, configured for x86_64-apple-darwin12.5.0.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=3
** UNBOXED_FLOAT=yes
** PREGENERATED_DIST=no
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


/* :- module sudoku. */
/* :- implementation. */

/*
INIT mercury__sudoku__init
ENDINIT
*/

#include "sudoku.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"




#line 65 "Mercury/cs/sudoku.c"
static const MR_FA_PseudoTypeInfo_Struct1 sudoku__list__pti_list_1__pseudo_1;

#line 68 "Mercury/cs/sudoku.c"
static const MR_PseudoTypeInfo sudoku__sudoku__field_types_cell_0_0[2];

#line 71 "Mercury/cs/sudoku.c"
static const MR_ConstString sudoku__sudoku__field_names_cell_0_0[2];

#line 74 "Mercury/cs/sudoku.c"
static const MR_DuFunctorDesc sudoku__sudoku__du_functor_desc_cell_0_0;

#line 77 "Mercury/cs/sudoku.c"
static const MR_DuFunctorDescPtr sudoku__sudoku__du_stag_ordered_cell_0_0[1];

#line 80 "Mercury/cs/sudoku.c"
static const MR_DuPtagLayout sudoku__sudoku__du_ptag_ordered_cell_0[1];

#line 83 "Mercury/cs/sudoku.c"
static const MR_DuFunctorDescPtr sudoku__sudoku__du_name_ordered_cell_0[1];

#line 86 "Mercury/cs/sudoku.c"
static const MR_Integer sudoku__sudoku__functor_number_map_cell_0[1];

#line 89 "Mercury/cs/sudoku.c"
static MR_bool MR_CALL 
sudoku____Unify____cell_0_0_10001(
#line 92 "Mercury/cs/sudoku.c"
  MR_Box sudoku__wrapper_arg_1,
#line 94 "Mercury/cs/sudoku.c"
  MR_Box sudoku__wrapper_arg_2);

#line 97 "Mercury/cs/sudoku.c"
static void MR_CALL 
sudoku____Compare____cell_0_0_10001(
#line 100 "Mercury/cs/sudoku.c"
  MR_Box * sudoku__wrapper_arg_1,
#line 102 "Mercury/cs/sudoku.c"
  MR_Box sudoku__wrapper_arg_2,
#line 104 "Mercury/cs/sudoku.c"
  MR_Box sudoku__wrapper_arg_3);

#line 280 "sudoku.m"
static void MR_CALL 
sudoku____Compare____cell_0_0(
#line 280 "sudoku.m"
  MR_Word * sudoku__HeadVar__1_1,
#line 280 "sudoku.m"
  MR_Word sudoku__HeadVar__2_2,
#line 280 "sudoku.m"
  MR_Word sudoku__HeadVar__3_3);

#line 280 "sudoku.m"
static MR_bool MR_CALL 
sudoku____Unify____cell_0_0(
#line 280 "sudoku.m"
  MR_Word sudoku__HeadVar__1_1,
#line 280 "sudoku.m"
  MR_Word sudoku__HeadVar__2_2);

#line 483 "sudoku.m"
static void MR_CALL 
sudoku__print_hbar_4_p_0(
#line 483 "sudoku.m"
  MR_Integer sudoku__Remaining_5,
#line 483 "sudoku.m"
  MR_Integer sudoku__Boxsize_6);

#line 461 "sudoku.m"
static void MR_CALL 
sudoku__print_row_6_p_0(
#line 461 "sudoku.m"
  MR_Word sudoku__STATE_VARIABLE_Puzzle_0_13,
#line 461 "sudoku.m"
  MR_Word * sudoku__STATE_VARIABLE_Puzzle_14,
#line 461 "sudoku.m"
  MR_Integer sudoku__Remaining_8,
#line 461 "sudoku.m"
  MR_Integer sudoku__Boxsize_9);

#line 448 "sudoku.m"
static void MR_CALL 
sudoku__print_chunk_7_p_0(
#line 448 "sudoku.m"
  MR_Word sudoku__STATE_VARIABLE_Puzzle_0_13,
#line 448 "sudoku.m"
  MR_Word * sudoku__STATE_VARIABLE_Puzzle_14,
#line 448 "sudoku.m"
  MR_Integer sudoku__Rowsleft_9,
#line 448 "sudoku.m"
  MR_Integer sudoku__Size_10,
#line 448 "sudoku.m"
  MR_Integer sudoku__Boxsize_11);

#line 433 "sudoku.m"
static void MR_CALL 
sudoku__print_puzzle_5_p_0(
#line 433 "sudoku.m"
  MR_Word sudoku__Puzzle_6,
#line 433 "sudoku.m"
  MR_Integer sudoku__Size_7,
#line 433 "sudoku.m"
  MR_Integer sudoku__Boxsize_8);

#line 347 "sudoku.m"
static MR_bool MR_CALL 
sudoku__find_allPossibleValues_ofCell_3_p_0(
#line 347 "sudoku.m"
  MR_Word sudoku__Puzzle_4,
#line 347 "sudoku.m"
  MR_Word sudoku__UnfilledCell_5,
#line 347 "sudoku.m"
  MR_Word * sudoku__PossibleValues_6);

#line 306 "sudoku.m"
static MR_bool MR_CALL 
sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0(
#line 306 "sudoku.m"
  MR_Integer sudoku__CellIndex_4,
#line 306 "sudoku.m"
  MR_Word sudoku__Puzzle_5,
#line 306 "sudoku.m"
  MR_Word * sudoku__UpdatedPuzzle_6);

#line 255 "sudoku.m"
static void MR_CALL 
sudoku__load_puzzle_3_p_0(
#line 255 "sudoku.m"
  MR_Word * sudoku__Puzzle_4);

#line 157 "sudoku.m"
static MR_bool MR_CALL 
sudoku__ungroup_single_5_p_0(
#line 157 "sudoku.m"
  MR_Word sudoku__TypeInfo_for_E_16,
#line 157 "sudoku.m"
  MR_Integer sudoku__Width_6,
#line 157 "sudoku.m"
  MR_Word * sudoku__List_7,
#line 157 "sudoku.m"
  MR_Word sudoku__List0_8,
#line 157 "sudoku.m"
  MR_Word * sudoku__Grouped_9,
#line 157 "sudoku.m"
  MR_Word sudoku__Grouped0_10);

#line 143 "sudoku.m"
static MR_bool MR_CALL 
sudoku__unchunk_list_5_p_0(
#line 143 "sudoku.m"
  MR_Word sudoku__TypeInfo_for_E_15,
#line 143 "sudoku.m"
  MR_Integer sudoku__Width_6,
#line 143 "sudoku.m"
  MR_Integer sudoku__Repeat_7,
#line 143 "sudoku.m"
  MR_Word sudoku__Grouped_8,
#line 143 "sudoku.m"
  MR_Word * sudoku__List_9,
#line 143 "sudoku.m"
  MR_Word sudoku__List0_10);

#line 126 "sudoku.m"
static MR_bool MR_CALL 
sudoku__ungroup_list1_5_p_0(
#line 126 "sudoku.m"
  MR_Word sudoku__TypeInfo_for_E_15,
#line 126 "sudoku.m"
  MR_Integer sudoku__Width_6,
#line 126 "sudoku.m"
  MR_Integer sudoku__Period_7,
#line 126 "sudoku.m"
  MR_Integer sudoku__Repeat_8,
#line 126 "sudoku.m"
  MR_Word * sudoku__List_9,
#line 126 "sudoku.m"
  MR_Word sudoku__Grouped_10);

#line 95 "sudoku.m"
static MR_bool MR_CALL 
sudoku__extract_prefix_5_p_1(
#line 95 "sudoku.m"
  MR_Word sudoku__TypeInfo_for_E_19,
#line 95 "sudoku.m"
  MR_Integer sudoku__Count_6,
#line 95 "sudoku.m"
  MR_Word * sudoku__STATE_VARIABLE_List_0_11,
#line 95 "sudoku.m"
  MR_Word sudoku__STATE_VARIABLE_List_12,
#line 95 "sudoku.m"
  MR_Word * sudoku__F0_8,
#line 95 "sudoku.m"
  MR_Word sudoku__F_9);

#line 94 "sudoku.m"
static MR_bool MR_CALL 
sudoku__extract_prefix_5_p_0(
#line 94 "sudoku.m"
  MR_Word sudoku__TypeInfo_for_E_19,
#line 94 "sudoku.m"
  MR_Integer sudoku__Count_6,
#line 94 "sudoku.m"
  MR_Word sudoku__STATE_VARIABLE_List_0_11,
#line 94 "sudoku.m"
  MR_Word * sudoku__STATE_VARIABLE_List_12,
#line 94 "sudoku.m"
  MR_Word sudoku__F0_8,
#line 94 "sudoku.m"
  MR_Word * sudoku__F_9);

#line 77 "sudoku.m"
static MR_bool MR_CALL 
sudoku__group_single_repeat_5_p_0(
#line 77 "sudoku.m"
  MR_Word sudoku__TypeInfo_for_E_18,
#line 77 "sudoku.m"
  MR_Integer sudoku__Width_6,
#line 77 "sudoku.m"
  MR_Word sudoku__STATE_VARIABLE_List_0_14,
#line 77 "sudoku.m"
  MR_Word * sudoku__STATE_VARIABLE_List_15,
#line 77 "sudoku.m"
  MR_Word sudoku__Grouped0_8,
#line 77 "sudoku.m"
  MR_Word * sudoku__Grouped_9);

#line 62 "sudoku.m"
static MR_bool MR_CALL 
sudoku__chunk_list_6_p_0(
#line 62 "sudoku.m"
  MR_Word sudoku__TypeInfo_for_E_21,
#line 62 "sudoku.m"
  MR_Integer sudoku__Width_7,
#line 62 "sudoku.m"
  MR_Integer sudoku__Repeat_8,
#line 62 "sudoku.m"
  MR_Word sudoku__STATE_VARIABLE_List_0_11,
#line 62 "sudoku.m"
  MR_Word * sudoku__STATE_VARIABLE_List_12,
#line 62 "sudoku.m"
  MR_Word sudoku__STATE_VARIABLE_Grouped_0_13,
#line 62 "sudoku.m"
  MR_Word * sudoku__STATE_VARIABLE_Grouped_14);

#line 42 "sudoku.m"
static MR_bool MR_CALL 
sudoku__group_list1_5_p_0(
#line 42 "sudoku.m"
  MR_Word sudoku__TypeInfo_for_E_18,
#line 42 "sudoku.m"
  MR_Integer sudoku__Width_6,
#line 42 "sudoku.m"
  MR_Integer sudoku__Period_7,
#line 42 "sudoku.m"
  MR_Integer sudoku__Repeat_8,
#line 42 "sudoku.m"
  MR_Word sudoku__List_9,
#line 42 "sudoku.m"
  MR_Word * sudoku__Grouped_10);

#line 117 "sudoku.m"
static void MR_CALL 
sudoku__ungroup_list_5_p_0_1(
#line 117 "sudoku.m"
  MR_Box sudoku__closure_arg,
#line 117 "sudoku.m"
  MR_Box sudoku__wrapper_arg_1,
#line 117 "sudoku.m"
  MR_Box * sudoku__wrapper_arg_2);

#line 34 "sudoku.m"
static void MR_CALL 
sudoku__group_list_5_p_0_1(
#line 34 "sudoku.m"
  MR_Box sudoku__closure_arg,
#line 34 "sudoku.m"
  MR_Box sudoku__wrapper_arg_1,
#line 34 "sudoku.m"
  MR_Box * sudoku__wrapper_arg_2);


static /* final */ const MR_Box sudoku_scalar_common_1[10][2];

static /* final */ const MR_Integer sudoku_scalar_common_2[1][2];

static /* final */ const MR_Box sudoku_scalar_common_3[1][6];




static /* final */ const MR_Box sudoku_scalar_common_1[10][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &sudoku_scalar_common_1[1])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &sudoku_scalar_common_1[2])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &sudoku_scalar_common_1[3])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &sudoku_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &sudoku_scalar_common_1[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &sudoku_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &sudoku_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &sudoku_scalar_common_1[8])))
  },
};

static /* final */ const MR_Integer sudoku_scalar_common_2[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box sudoku_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&sudoku_scalar_common_2[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&sudoku__list__pti_list_1__pseudo_1)),
    ((MR_Box) (&sudoku__list__pti_list_1__pseudo_1))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"



#line 443 "Mercury/cs/sudoku.c"
static const MR_FA_PseudoTypeInfo_Struct1 sudoku__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 451 "Mercury/cs/sudoku.c"
static const MR_PseudoTypeInfo sudoku__sudoku__field_types_cell_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 457 "Mercury/cs/sudoku.c"
static const MR_ConstString sudoku__sudoku__field_names_cell_0_0[2] = {
  (MR_String) "index",
  (MR_String) "value"
};

#line 463 "Mercury/cs/sudoku.c"
static const MR_DuFunctorDesc sudoku__sudoku__du_functor_desc_cell_0_0 = {
  (MR_String) "cell",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  sudoku__sudoku__field_types_cell_0_0,
  sudoku__sudoku__field_names_cell_0_0,
  NULL,
  NULL
};

#line 478 "Mercury/cs/sudoku.c"
static const MR_DuFunctorDescPtr sudoku__sudoku__du_stag_ordered_cell_0_0[1] = {
  &sudoku__sudoku__du_functor_desc_cell_0_0
};

#line 483 "Mercury/cs/sudoku.c"
static const MR_DuPtagLayout sudoku__sudoku__du_ptag_ordered_cell_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    sudoku__sudoku__du_stag_ordered_cell_0_0
  }
};

#line 492 "Mercury/cs/sudoku.c"
static const MR_DuFunctorDescPtr sudoku__sudoku__du_name_ordered_cell_0[1] = {
  &sudoku__sudoku__du_functor_desc_cell_0_0
};

#line 497 "Mercury/cs/sudoku.c"
static const MR_Integer sudoku__sudoku__functor_number_map_cell_0[1] = {
  (MR_Integer) 0
};

#line 502 "Mercury/cs/sudoku.c"
const MR_TypeCtorInfo_Struct sudoku__sudoku__type_ctor_info_cell_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (sudoku____Unify____cell_0_0_10001)),
  ((MR_Box) (sudoku____Compare____cell_0_0_10001)),
  (MR_String) "sudoku",
  (MR_String) "cell",
  {
    sudoku__sudoku__du_name_ordered_cell_0
  },
  {
    sudoku__sudoku__du_ptag_ordered_cell_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  sudoku__sudoku__functor_number_map_cell_0
};

#line 523 "Mercury/cs/sudoku.c"
static MR_bool MR_CALL 
sudoku____Unify____cell_0_0_10001(
#line 526 "Mercury/cs/sudoku.c"
  MR_Box sudoku__wrapper_arg_1,
#line 528 "Mercury/cs/sudoku.c"
  MR_Box sudoku__wrapper_arg_2)
#line 530 "Mercury/cs/sudoku.c"
{
#line 532 "Mercury/cs/sudoku.c"
  {
#line 534 "Mercury/cs/sudoku.c"
    MR_bool sudoku__succeeded;

#line 537 "Mercury/cs/sudoku.c"
    {
#line 539 "Mercury/cs/sudoku.c"
      sudoku__succeeded = sudoku____Unify____cell_0_0(((MR_Word) sudoku__wrapper_arg_1), ((MR_Word) sudoku__wrapper_arg_2));
    }
#line 542 "Mercury/cs/sudoku.c"
    return sudoku__succeeded;
#line 544 "Mercury/cs/sudoku.c"
  }
#line 546 "Mercury/cs/sudoku.c"
}

#line 549 "Mercury/cs/sudoku.c"
static void MR_CALL 
sudoku____Compare____cell_0_0_10001(
#line 552 "Mercury/cs/sudoku.c"
  MR_Box * sudoku__wrapper_arg_1,
#line 554 "Mercury/cs/sudoku.c"
  MR_Box sudoku__wrapper_arg_2,
#line 556 "Mercury/cs/sudoku.c"
  MR_Box sudoku__wrapper_arg_3)
#line 558 "Mercury/cs/sudoku.c"
{
#line 560 "Mercury/cs/sudoku.c"
  {
#line 562 "Mercury/cs/sudoku.c"
    MR_Word sudoku__conv0_HeadVar__1_1;

#line 565 "Mercury/cs/sudoku.c"
    {
#line 567 "Mercury/cs/sudoku.c"
      sudoku____Compare____cell_0_0(&sudoku__conv0_HeadVar__1_1, ((MR_Word) sudoku__wrapper_arg_2), ((MR_Word) sudoku__wrapper_arg_3));
    }
#line 570 "Mercury/cs/sudoku.c"
    *sudoku__wrapper_arg_1 = ((MR_Box) (sudoku__conv0_HeadVar__1_1));
#line 572 "Mercury/cs/sudoku.c"
  }
#line 574 "Mercury/cs/sudoku.c"
}

#line 280 "sudoku.m"
static void MR_CALL 
sudoku____Compare____cell_0_0(
#line 280 "sudoku.m"
  MR_Word * sudoku__HeadVar__1_1,
#line 280 "sudoku.m"
  MR_Word sudoku__HeadVar__2_2,
#line 280 "sudoku.m"
  MR_Word sudoku__HeadVar__3_3)
#line 280 "sudoku.m"
{
#line 280 "sudoku.m"
  {
#line 280 "sudoku.m"
    MR_bool sudoku__succeeded;
#line 280 "sudoku.m"
    MR_Integer sudoku__CastX_9 = (MR_Integer) sudoku__HeadVar__2_2;
#line 280 "sudoku.m"
    MR_Integer sudoku__CastY_10 = (MR_Integer) sudoku__HeadVar__3_3;

#line 280 "sudoku.m"
    sudoku__succeeded = (sudoku__CastX_9 == sudoku__CastY_10);
#line 280 "sudoku.m"
    if (sudoku__succeeded)
#line 601 "Mercury/cs/sudoku.c"
      *sudoku__HeadVar__1_1 = (MR_Integer) 0;
#line 280 "sudoku.m"
    else
#line 280 "sudoku.m"
      {
#line 280 "sudoku.m"
        MR_Integer sudoku__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), sudoku__HeadVar__2_2, (MR_Integer) 0)));
#line 280 "sudoku.m"
        MR_Integer sudoku__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), sudoku__HeadVar__2_2, (MR_Integer) 1)));
#line 280 "sudoku.m"
        MR_Integer sudoku__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), sudoku__HeadVar__3_3, (MR_Integer) 0)));
#line 280 "sudoku.m"
        MR_Integer sudoku__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), sudoku__HeadVar__3_3, (MR_Integer) 1)));
#line 280 "sudoku.m"
        MR_Word sudoku__V_8_8;

#line 280 "sudoku.m"
        {
#line 280 "sudoku.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&sudoku__V_8_8, sudoku__V_4_4, sudoku__V_6_6);
        }
#line 623 "Mercury/cs/sudoku.c"
        sudoku__succeeded = (sudoku__V_8_8 == (MR_Integer) 0);
#line 280 "sudoku.m"
        sudoku__succeeded = !(sudoku__succeeded);
#line 280 "sudoku.m"
        if (sudoku__succeeded)
#line 280 "sudoku.m"
          *sudoku__HeadVar__1_1 = sudoku__V_8_8;
#line 280 "sudoku.m"
        else
#line 280 "sudoku.m"
          {
#line 280 "sudoku.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(sudoku__HeadVar__1_1, sudoku__V_5_5, sudoku__V_7_7);
#line 280 "sudoku.m"
            return;
          }
#line 280 "sudoku.m"
      }
#line 280 "sudoku.m"
  }
#line 280 "sudoku.m"
}

#line 280 "sudoku.m"
static MR_bool MR_CALL 
sudoku____Unify____cell_0_0(
#line 280 "sudoku.m"
  MR_Word sudoku__HeadVar__1_1,
#line 280 "sudoku.m"
  MR_Word sudoku__HeadVar__2_2)
#line 280 "sudoku.m"
{
#line 280 "sudoku.m"
  {
#line 280 "sudoku.m"
    MR_bool sudoku__succeeded;
#line 280 "sudoku.m"
    MR_Integer sudoku__CastX_7 = (MR_Integer) sudoku__HeadVar__1_1;
#line 280 "sudoku.m"
    MR_Integer sudoku__CastY_8 = (MR_Integer) sudoku__HeadVar__2_2;

#line 280 "sudoku.m"
    sudoku__succeeded = (sudoku__CastX_7 == sudoku__CastY_8);
#line 280 "sudoku.m"
    if (sudoku__succeeded)
#line 280 "sudoku.m"
      sudoku__succeeded = MR_TRUE;
#line 280 "sudoku.m"
    else
#line 280 "sudoku.m"
      {
#line 280 "sudoku.m"
        MR_Integer sudoku__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), sudoku__HeadVar__1_1, (MR_Integer) 0)));
#line 280 "sudoku.m"
        MR_Integer sudoku__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), sudoku__HeadVar__1_1, (MR_Integer) 1)));
#line 280 "sudoku.m"
        MR_Integer sudoku__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), sudoku__HeadVar__2_2, (MR_Integer) 0)));
#line 280 "sudoku.m"
        MR_Integer sudoku__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), sudoku__HeadVar__2_2, (MR_Integer) 1)));

#line 684 "Mercury/cs/sudoku.c"
        sudoku__succeeded = (sudoku__V_3_3 == sudoku__V_5_5);
#line 280 "sudoku.m"
        if (sudoku__succeeded)
#line 688 "Mercury/cs/sudoku.c"
          sudoku__succeeded = (sudoku__V_4_4 == sudoku__V_6_6);
#line 280 "sudoku.m"
      }
#line 280 "sudoku.m"
    return sudoku__succeeded;
#line 280 "sudoku.m"
  }
#line 280 "sudoku.m"
}

#line 483 "sudoku.m"
static void MR_CALL 
sudoku__print_hbar_4_p_0(
#line 483 "sudoku.m"
  MR_Integer sudoku__Remaining_5,
#line 483 "sudoku.m"
  MR_Integer sudoku__Boxsize_6)
#line 483 "sudoku.m"
{
#line 489 "sudoku.m"
  while (MR_TRUE)
#line 489 "sudoku.m"
    {
#line 489 "sudoku.m"
      /* tailcall optimized into a loop */
#line 489 "sudoku.m"
      {
#line 489 "sudoku.m"
        MR_bool sudoku__succeeded;
#line 490 "sudoku.m"
        MR_Integer sudoku__V_10_10 = (MR_Integer) 0;
#line 490 "sudoku.m"
        MR_Integer sudoku__V_19_19;

#line 490 "sudoku.m"
        {
#line 490 "sudoku.m"
          sudoku__V_19_19 = mercury__int__mod_2_f_0(sudoku__Remaining_5, sudoku__Boxsize_6);
        }
#line 490 "sudoku.m"
        sudoku__succeeded = (sudoku__V_10_10 == sudoku__V_19_19);
#line 492 "sudoku.m"
        if (sudoku__succeeded)
#line 491 "sudoku.m"
          {
#line 491 "sudoku.m"
            MR_Char sudoku__V_11_11 = (MR_Char) 43;

#line 491 "sudoku.m"
            {
#line 491 "sudoku.m"
              mercury__io__write_char_3_p_0(sudoku__V_11_11);
            }
#line 491 "sudoku.m"
          }
#line 492 "sudoku.m"
        else
#line 491 "sudoku.m"
          {
#line 491 "sudoku.m"
          }
#line 494 "sudoku.m"
        sudoku__succeeded = (sudoku__Remaining_5 == (MR_Integer) 0);
#line 496 "sudoku.m"
        if (sudoku__succeeded)
#line 495 "sudoku.m"
          {
#line 495 "sudoku.m"
            mercury__io__nl_2_p_0();
#line 495 "sudoku.m"
            return;
          }
#line 496 "sudoku.m"
        else
#line 496 "sudoku.m"
          {
#line 496 "sudoku.m"
            MR_Char sudoku__V_14_14 = (MR_Char) 45;
#line 496 "sudoku.m"
            MR_Integer sudoku__V_16_16;
#line 496 "sudoku.m"
            MR_Integer sudoku__V_18_18;

#line 496 "sudoku.m"
            {
#line 496 "sudoku.m"
              mercury__io__write_char_3_p_0(sudoku__V_14_14);
            }
#line 497 "sudoku.m"
            sudoku__V_18_18 = (MR_Integer) 1;
#line 497 "sudoku.m"
            sudoku__V_16_16 = (sudoku__Remaining_5 - sudoku__V_18_18);
#line 497 "sudoku.m"
            /* direct tailcall eliminated */
#line 497 "sudoku.m"
            {
#line 497 "sudoku.m"
              MR_Integer sudoku__Remaining__tmp_copy_5 = sudoku__V_16_16;

#line 497 "sudoku.m"
              sudoku__Remaining_5 = sudoku__Remaining__tmp_copy_5;
#line 497 "sudoku.m"
            }
#line 497 "sudoku.m"
            continue;
#line 496 "sudoku.m"
          }
#line 489 "sudoku.m"
      }
#line 489 "sudoku.m"
      break;
#line 489 "sudoku.m"
    }
#line 483 "sudoku.m"
}

#line 461 "sudoku.m"
static void MR_CALL 
sudoku__print_row_6_p_0(
#line 461 "sudoku.m"
  MR_Word sudoku__STATE_VARIABLE_Puzzle_0_13,
#line 461 "sudoku.m"
  MR_Word * sudoku__STATE_VARIABLE_Puzzle_14,
#line 461 "sudoku.m"
  MR_Integer sudoku__Remaining_8,
#line 461 "sudoku.m"
  MR_Integer sudoku__Boxsize_9)
#line 461 "sudoku.m"
{
#line 466 "sudoku.m"
  while (MR_TRUE)
#line 466 "sudoku.m"
    {
#line 466 "sudoku.m"
      /* tailcall optimized into a loop */
#line 466 "sudoku.m"
      {
#line 466 "sudoku.m"
        MR_bool sudoku__succeeded;
#line 467 "sudoku.m"
        MR_Integer sudoku__V_17_17 = (MR_Integer) 0;
#line 467 "sudoku.m"
        MR_Integer sudoku__V_30_30;

#line 467 "sudoku.m"
        {
#line 467 "sudoku.m"
          sudoku__V_30_30 = mercury__int__mod_2_f_0(sudoku__Remaining_8, sudoku__Boxsize_9);
        }
#line 467 "sudoku.m"
        sudoku__succeeded = (sudoku__V_17_17 == sudoku__V_30_30);
#line 469 "sudoku.m"
        if (sudoku__succeeded)
#line 468 "sudoku.m"
          {
#line 468 "sudoku.m"
            MR_Char sudoku__V_18_18 = (MR_Char) 124;

#line 468 "sudoku.m"
            {
#line 468 "sudoku.m"
              mercury__io__write_char_3_p_0(sudoku__V_18_18);
            }
#line 468 "sudoku.m"
          }
#line 469 "sudoku.m"
        else
#line 468 "sudoku.m"
          {
#line 468 "sudoku.m"
          }
#line 471 "sudoku.m"
        sudoku__succeeded = (sudoku__Remaining_8 == (MR_Integer) 0);
#line 473 "sudoku.m"
        if (sudoku__succeeded)
#line 472 "sudoku.m"
          {
#line 472 "sudoku.m"
            {
#line 472 "sudoku.m"
              mercury__io__nl_2_p_0();
            }
#line 472 "sudoku.m"
            *sudoku__STATE_VARIABLE_Puzzle_14 = sudoku__STATE_VARIABLE_Puzzle_0_13;
#line 472 "sudoku.m"
          }
#line 473 "sudoku.m"
        else
#line 479 "sudoku.m"
          {
#line 479 "sudoku.m"
            MR_Integer sudoku__Int_11;
#line 479 "sudoku.m"
            MR_Word sudoku__STATE_VARIABLE_Puzzle_21_21;

#line 473 "sudoku.m"
            sudoku__succeeded = ((MR_tag((MR_Word) sudoku__STATE_VARIABLE_Puzzle_0_13)) == (MR_mktag((MR_Integer) 1)));
#line 473 "sudoku.m"
            if (sudoku__succeeded)
#line 473 "sudoku.m"
              {
#line 473 "sudoku.m"
                sudoku__Int_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), sudoku__STATE_VARIABLE_Puzzle_0_13, (MR_Integer) 0)));
#line 473 "sudoku.m"
                sudoku__STATE_VARIABLE_Puzzle_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), sudoku__STATE_VARIABLE_Puzzle_0_13, (MR_Integer) 1)));
#line 477 "sudoku.m"
                {
#line 477 "sudoku.m"
                  MR_Integer sudoku__V_26_26;
#line 477 "sudoku.m"
                  MR_Integer sudoku__V_28_28;
#line 476 "sudoku.m"
                  MR_Char sudoku__Digit_12;

#line 474 "sudoku.m"
                  {
#line 474 "sudoku.m"
                    sudoku__succeeded = mercury__char__int_to_digit_2_p_0(sudoku__Int_11, &sudoku__Digit_12);
                  }
#line 476 "sudoku.m"
                  if (sudoku__succeeded)
#line 475 "sudoku.m"
                    {
#line 475 "sudoku.m"
                      mercury__io__write_char_3_p_0(sudoku__Digit_12);
                    }
#line 476 "sudoku.m"
                  else
#line 476 "sudoku.m"
                    {
#line 476 "sudoku.m"
                      MR_Char sudoku__V_23_23 = (MR_Char) 46;

#line 476 "sudoku.m"
                      {
#line 476 "sudoku.m"
                        mercury__io__write_char_3_p_0(sudoku__V_23_23);
                      }
#line 476 "sudoku.m"
                    }
#line 478 "sudoku.m"
                  sudoku__V_28_28 = (MR_Integer) 1;
#line 478 "sudoku.m"
                  sudoku__V_26_26 = (sudoku__Remaining_8 - sudoku__V_28_28);
#line 478 "sudoku.m"
                  /* direct tailcall eliminated */
#line 478 "sudoku.m"
                  {
#line 478 "sudoku.m"
                    MR_Word sudoku__STATE_VARIABLE_Puzzle_0__tmp_copy_13 = sudoku__STATE_VARIABLE_Puzzle_21_21;
#line 478 "sudoku.m"
                    MR_Integer sudoku__Remaining__tmp_copy_8 = sudoku__V_26_26;

#line 478 "sudoku.m"
                    sudoku__Remaining_8 = sudoku__Remaining__tmp_copy_8;
#line 478 "sudoku.m"
                    sudoku__STATE_VARIABLE_Puzzle_0_13 = sudoku__STATE_VARIABLE_Puzzle_0__tmp_copy_13;
#line 478 "sudoku.m"
                  }
#line 478 "sudoku.m"
                  continue;
#line 477 "sudoku.m"
                }
#line 473 "sudoku.m"
              }
#line 473 "sudoku.m"
            else
#line 479 "sudoku.m"
              {
#line 479 "sudoku.m"
                {
#line 479 "sudoku.m"
                  mercury__io__nl_2_p_0();
                }
#line 479 "sudoku.m"
                *sudoku__STATE_VARIABLE_Puzzle_14 = sudoku__STATE_VARIABLE_Puzzle_0_13;
#line 479 "sudoku.m"
              }
#line 479 "sudoku.m"
          }
#line 466 "sudoku.m"
      }
#line 466 "sudoku.m"
      break;
#line 466 "sudoku.m"
    }
#line 461 "sudoku.m"
}

#line 448 "sudoku.m"
static void MR_CALL 
sudoku__print_chunk_7_p_0(
#line 448 "sudoku.m"
  MR_Word sudoku__STATE_VARIABLE_Puzzle_0_13,
#line 448 "sudoku.m"
  MR_Word * sudoku__STATE_VARIABLE_Puzzle_14,
#line 448 "sudoku.m"
  MR_Integer sudoku__Rowsleft_9,
#line 448 "sudoku.m"
  MR_Integer sudoku__Size_10,
#line 448 "sudoku.m"
  MR_Integer sudoku__Boxsize_11)
#line 448 "sudoku.m"
{
#line 456 "sudoku.m"
  while (MR_TRUE)
#line 456 "sudoku.m"
    {
#line 456 "sudoku.m"
      /* tailcall optimized into a loop */
#line 456 "sudoku.m"
      {
#line 456 "sudoku.m"
        MR_bool sudoku__succeeded = (sudoku__Rowsleft_9 == (MR_Integer) 0);

#line 456 "sudoku.m"
        if (sudoku__succeeded)
#line 455 "sudoku.m"
          *sudoku__STATE_VARIABLE_Puzzle_14 = sudoku__STATE_VARIABLE_Puzzle_0_13;
#line 456 "sudoku.m"
        else
#line 456 "sudoku.m"
          {
#line 456 "sudoku.m"
            MR_Word sudoku__STATE_VARIABLE_Puzzle_17_17;
#line 456 "sudoku.m"
            MR_Integer sudoku__V_20_20;
#line 456 "sudoku.m"
            MR_Integer sudoku__V_22_22;

#line 456 "sudoku.m"
            {
#line 456 "sudoku.m"
              sudoku__print_row_6_p_0(sudoku__STATE_VARIABLE_Puzzle_0_13, &sudoku__STATE_VARIABLE_Puzzle_17_17, sudoku__Size_10, sudoku__Boxsize_11);
            }
#line 457 "sudoku.m"
            sudoku__V_22_22 = (MR_Integer) 1;
#line 457 "sudoku.m"
            sudoku__V_20_20 = (sudoku__Rowsleft_9 - sudoku__V_22_22);
#line 457 "sudoku.m"
            /* direct tailcall eliminated */
#line 457 "sudoku.m"
            {
#line 457 "sudoku.m"
              MR_Word sudoku__STATE_VARIABLE_Puzzle_0__tmp_copy_13 = sudoku__STATE_VARIABLE_Puzzle_17_17;
#line 457 "sudoku.m"
              MR_Integer sudoku__Rowsleft__tmp_copy_9 = sudoku__V_20_20;

#line 457 "sudoku.m"
              sudoku__Rowsleft_9 = sudoku__Rowsleft__tmp_copy_9;
#line 457 "sudoku.m"
              sudoku__STATE_VARIABLE_Puzzle_0_13 = sudoku__STATE_VARIABLE_Puzzle_0__tmp_copy_13;
#line 457 "sudoku.m"
            }
#line 457 "sudoku.m"
            continue;
#line 456 "sudoku.m"
          }
#line 456 "sudoku.m"
      }
#line 456 "sudoku.m"
      break;
#line 456 "sudoku.m"
    }
#line 448 "sudoku.m"
}

#line 433 "sudoku.m"
static void MR_CALL 
sudoku__print_puzzle_5_p_0(
#line 433 "sudoku.m"
  MR_Word sudoku__Puzzle_6,
#line 433 "sudoku.m"
  MR_Integer sudoku__Size_7,
#line 433 "sudoku.m"
  MR_Integer sudoku__Boxsize_8)
#line 433 "sudoku.m"
{
#line 439 "sudoku.m"
  while (MR_TRUE)
#line 439 "sudoku.m"
    {
#line 439 "sudoku.m"
      /* tailcall optimized into a loop */
#line 439 "sudoku.m"
      {
#line 439 "sudoku.m"
        MR_bool sudoku__succeeded;

#line 440 "sudoku.m"
        {
#line 440 "sudoku.m"
          sudoku__print_hbar_4_p_0(sudoku__Size_7, sudoku__Boxsize_8);
        }
#line 441 "sudoku.m"
        sudoku__succeeded = (sudoku__Puzzle_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 443 "sudoku.m"
        if (sudoku__succeeded)
#line 441 "sudoku.m"
          {
#line 441 "sudoku.m"
          }
#line 443 "sudoku.m"
        else
#line 443 "sudoku.m"
          {
#line 443 "sudoku.m"
            MR_Word sudoku__Puzzle1_10;

#line 443 "sudoku.m"
            {
#line 443 "sudoku.m"
              sudoku__print_chunk_7_p_0(sudoku__Puzzle_6, &sudoku__Puzzle1_10, sudoku__Boxsize_8, sudoku__Size_7, sudoku__Boxsize_8);
            }
#line 444 "sudoku.m"
            /* direct tailcall eliminated */
#line 444 "sudoku.m"
            {
#line 444 "sudoku.m"
              MR_Word sudoku__Puzzle__tmp_copy_6 = sudoku__Puzzle1_10;

#line 444 "sudoku.m"
              sudoku__Puzzle_6 = sudoku__Puzzle__tmp_copy_6;
#line 444 "sudoku.m"
            }
#line 444 "sudoku.m"
            continue;
#line 443 "sudoku.m"
          }
#line 439 "sudoku.m"
      }
#line 439 "sudoku.m"
      break;
#line 439 "sudoku.m"
    }
#line 433 "sudoku.m"
}

#line 347 "sudoku.m"
static MR_bool MR_CALL 
sudoku__find_allPossibleValues_ofCell_3_p_0(
#line 347 "sudoku.m"
  MR_Word sudoku__Puzzle_4,
#line 347 "sudoku.m"
  MR_Word sudoku__UnfilledCell_5,
#line 347 "sudoku.m"
  MR_Word * sudoku__PossibleValues_6)
#line 347 "sudoku.m"
{
#line 351 "sudoku.m"
  {
#line 351 "sudoku.m"
    MR_bool sudoku__succeeded;
#line 351 "sudoku.m"
    MR_Word sudoku__TypeCtorInfo_15_15;
#line 351 "sudoku.m"
    MR_Word sudoku__TypeCtorInfo_42_52 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 351 "sudoku.m"
    MR_Word sudoku__TypeInfo_43_53;
#line 351 "sudoku.m"
    MR_Word sudoku__TypeCtorInfo_24_75;
#line 351 "sudoku.m"
    MR_Word sudoku__RowValues_7;
#line 351 "sudoku.m"
    MR_Word sudoku__CollumValues_8;
#line 351 "sudoku.m"
    MR_Word sudoku__CountryValues_9;
#line 351 "sudoku.m"
    MR_Word sudoku__TempList_10;
#line 351 "sudoku.m"
    MR_Word sudoku__TempList2_11;
#line 351 "sudoku.m"
    MR_Word sudoku__UsedValueList_12;
#line 351 "sudoku.m"
    MR_Integer sudoku__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), sudoku__UnfilledCell_5, (MR_Integer) 0)));
#line 351 "sudoku.m"
    MR_Word sudoku__CountryList_21;
#line 351 "sudoku.m"
    MR_Word sudoku__RowList_22;
#line 351 "sudoku.m"
    MR_Word sudoku__CollumList_23;
#line 351 "sudoku.m"
    MR_Integer sudoku__RowIndex_24;
#line 351 "sudoku.m"
    MR_Integer sudoku__CollumIndex_25;
#line 351 "sudoku.m"
    MR_Integer sudoku__CountryIndex_26;
#line 351 "sudoku.m"
    MR_Word sudoku__TempRow_27;
#line 351 "sudoku.m"
    MR_Word sudoku__TempCollum_28;
#line 351 "sudoku.m"
    MR_Word sudoku__TempCountry_29;
#line 351 "sudoku.m"
    MR_Integer sudoku__V_30_30 = (MR_Integer) 3;
#line 351 "sudoku.m"
    MR_Integer sudoku__V_31_31 = (MR_Integer) 3;
#line 351 "sudoku.m"
    MR_Integer sudoku__V_32_32 = (MR_Integer) 3;
#line 351 "sudoku.m"
    MR_Integer sudoku__V_33_33;
#line 351 "sudoku.m"
    MR_Integer sudoku__V_34_34;
#line 351 "sudoku.m"
    MR_Integer sudoku__V_35_35;
#line 351 "sudoku.m"
    MR_Integer sudoku__V_36_36;
#line 351 "sudoku.m"
    MR_Integer sudoku__V_37_37;
#line 351 "sudoku.m"
    MR_Integer sudoku__V_38_38;
#line 351 "sudoku.m"
    MR_Integer sudoku__V_39_39;
#line 351 "sudoku.m"
    MR_Integer sudoku__V_40_40;
#line 351 "sudoku.m"
    MR_Integer sudoku__V_49_49;
#line 351 "sudoku.m"
    MR_Integer sudoku__V_50_50;
#line 351 "sudoku.m"
    MR_Integer sudoku__V_51_51;
#line 351 "sudoku.m"
    MR_Word sudoku__FullList_56;
#line 352 "sudoku.m"
    MR_Integer sudoku__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), sudoku__UnfilledCell_5, (MR_Integer) 1)));
#line 376 "sudoku.m"
    MR_Integer sudoku__V_41_41;
#line 420 "sudoku.m"
    MR_Box sudoku__conv0_TempRow_27;
#line 421 "sudoku.m"
    MR_Box sudoku__conv1_TempCollum_28;
#line 422 "sudoku.m"
    MR_Box sudoku__conv2_TempCountry_29;

#line 367 "sudoku.m"
    {
#line 367 "sudoku.m"
      sudoku__group_list_5_p_0(sudoku__TypeCtorInfo_42_52, sudoku__V_30_30, sudoku__V_31_31, sudoku__V_32_32, sudoku__Puzzle_4, &sudoku__CountryList_21);
    }
#line 368 "sudoku.m"
    sudoku__V_33_33 = (MR_Integer) 1;
#line 368 "sudoku.m"
    sudoku__V_34_34 = (MR_Integer) 1;
#line 368 "sudoku.m"
    sudoku__V_35_35 = (MR_Integer) 9;
#line 368 "sudoku.m"
    {
#line 368 "sudoku.m"
      sudoku__group_list_5_p_0(sudoku__TypeCtorInfo_42_52, sudoku__V_33_33, sudoku__V_34_34, sudoku__V_35_35, sudoku__Puzzle_4, &sudoku__RowList_22);
    }
#line 369 "sudoku.m"
    sudoku__V_36_36 = (MR_Integer) 1;
#line 369 "sudoku.m"
    sudoku__V_37_37 = (MR_Integer) 9;
#line 369 "sudoku.m"
    sudoku__V_38_38 = (MR_Integer) 9;
#line 369 "sudoku.m"
    {
#line 369 "sudoku.m"
      sudoku__group_list_5_p_0(sudoku__TypeCtorInfo_42_52, sudoku__V_36_36, sudoku__V_37_37, sudoku__V_38_38, sudoku__Puzzle_4, &sudoku__CollumList_23);
    }
#line 373 "sudoku.m"
    sudoku__V_39_39 = (MR_Integer) 9;
#line 373 "sudoku.m"
    {
#line 373 "sudoku.m"
      sudoku__RowIndex_24 = mercury__int__div_2_f_0(sudoku__V_13_13, sudoku__V_39_39);
    }
#line 374 "sudoku.m"
    sudoku__V_40_40 = (MR_Integer) 9;
#line 374 "sudoku.m"
    {
#line 374 "sudoku.m"
      sudoku__CollumIndex_25 = mercury__int__mod_2_f_0(sudoku__V_13_13, sudoku__V_40_40);
    }
#line 376 "sudoku.m"
    sudoku__V_41_41 = (MR_Integer) 2;
#line 376 "sudoku.m"
    sudoku__succeeded = (sudoku__RowIndex_24 <= sudoku__V_41_41);
#line 390 "sudoku.m"
    if (sudoku__succeeded)
#line 383 "sudoku.m"
      {
#line 380 "sudoku.m"
        MR_Integer sudoku__V_42_42 = (MR_Integer) 2;

#line 380 "sudoku.m"
        sudoku__succeeded = (sudoku__CollumIndex_25 <= sudoku__V_42_42);
#line 383 "sudoku.m"
        if (sudoku__succeeded)
#line 382 "sudoku.m"
          sudoku__CountryIndex_26 = (MR_Integer) 0;
#line 383 "sudoku.m"
        else
#line 387 "sudoku.m"
          {
#line 384 "sudoku.m"
            MR_Integer sudoku__V_43_43 = (MR_Integer) 5;

#line 384 "sudoku.m"
            sudoku__succeeded = (sudoku__CollumIndex_25 <= sudoku__V_43_43);
#line 387 "sudoku.m"
            if (sudoku__succeeded)
#line 386 "sudoku.m"
              sudoku__CountryIndex_26 = (MR_Integer) 1;
#line 387 "sudoku.m"
            else
#line 388 "sudoku.m"
              sudoku__CountryIndex_26 = (MR_Integer) 2;
#line 387 "sudoku.m"
          }
#line 383 "sudoku.m"
      }
#line 390 "sudoku.m"
    else
#line 405 "sudoku.m"
      {
#line 391 "sudoku.m"
        MR_Integer sudoku__V_44_44 = (MR_Integer) 5;

#line 391 "sudoku.m"
        sudoku__succeeded = (sudoku__RowIndex_24 <= sudoku__V_44_44);
#line 405 "sudoku.m"
        if (sudoku__succeeded)
#line 398 "sudoku.m"
          {
#line 395 "sudoku.m"
            MR_Integer sudoku__V_45_45 = (MR_Integer) 2;

#line 395 "sudoku.m"
            sudoku__succeeded = (sudoku__CollumIndex_25 <= sudoku__V_45_45);
#line 398 "sudoku.m"
            if (sudoku__succeeded)
#line 397 "sudoku.m"
              sudoku__CountryIndex_26 = (MR_Integer) 3;
#line 398 "sudoku.m"
            else
#line 402 "sudoku.m"
              {
#line 399 "sudoku.m"
                MR_Integer sudoku__V_46_46 = (MR_Integer) 5;

#line 399 "sudoku.m"
                sudoku__succeeded = (sudoku__CollumIndex_25 <= sudoku__V_46_46);
#line 402 "sudoku.m"
                if (sudoku__succeeded)
#line 401 "sudoku.m"
                  sudoku__CountryIndex_26 = (MR_Integer) 4;
#line 402 "sudoku.m"
                else
#line 403 "sudoku.m"
                  sudoku__CountryIndex_26 = (MR_Integer) 5;
#line 402 "sudoku.m"
              }
#line 398 "sudoku.m"
          }
#line 405 "sudoku.m"
        else
#line 411 "sudoku.m"
          {
#line 408 "sudoku.m"
            MR_Integer sudoku__V_47_47 = (MR_Integer) 2;

#line 408 "sudoku.m"
            sudoku__succeeded = (sudoku__CollumIndex_25 <= sudoku__V_47_47);
#line 411 "sudoku.m"
            if (sudoku__succeeded)
#line 410 "sudoku.m"
              sudoku__CountryIndex_26 = (MR_Integer) 6;
#line 411 "sudoku.m"
            else
#line 415 "sudoku.m"
              {
#line 412 "sudoku.m"
                MR_Integer sudoku__V_48_48 = (MR_Integer) 5;

#line 412 "sudoku.m"
                sudoku__succeeded = (sudoku__CollumIndex_25 <= sudoku__V_48_48);
#line 415 "sudoku.m"
                if (sudoku__succeeded)
#line 414 "sudoku.m"
                  sudoku__CountryIndex_26 = (MR_Integer) 7;
#line 415 "sudoku.m"
                else
#line 416 "sudoku.m"
                  sudoku__CountryIndex_26 = (MR_Integer) 8;
#line 415 "sudoku.m"
              }
#line 411 "sudoku.m"
          }
#line 405 "sudoku.m"
      }
#line 1381 "Mercury/cs/sudoku.c"
    sudoku__TypeInfo_43_53 = (MR_Word) &sudoku_scalar_common_1[0];
#line 420 "sudoku.m"
    {
#line 420 "sudoku.m"
      sudoku__succeeded = mercury__list__index0_3_p_0(sudoku__TypeInfo_43_53, sudoku__RowList_22, sudoku__RowIndex_24, &sudoku__conv0_TempRow_27);
    }
#line 420 "sudoku.m"
    if (sudoku__succeeded)
#line 420 "sudoku.m"
      {
#line 420 "sudoku.m"
        sudoku__TempRow_27 = ((MR_Word) sudoku__conv0_TempRow_27);
#line 420 "sudoku.m"
        sudoku__succeeded = MR_TRUE;
#line 420 "sudoku.m"
      }
#line 351 "sudoku.m"
    if (sudoku__succeeded)
#line 351 "sudoku.m"
      {
#line 421 "sudoku.m"
        {
#line 421 "sudoku.m"
          sudoku__succeeded = mercury__list__index0_3_p_0(sudoku__TypeInfo_43_53, sudoku__CollumList_23, sudoku__CollumIndex_25, &sudoku__conv1_TempCollum_28);
        }
#line 421 "sudoku.m"
        if (sudoku__succeeded)
#line 421 "sudoku.m"
          {
#line 421 "sudoku.m"
            sudoku__TempCollum_28 = ((MR_Word) sudoku__conv1_TempCollum_28);
#line 421 "sudoku.m"
            sudoku__succeeded = MR_TRUE;
#line 421 "sudoku.m"
          }
#line 351 "sudoku.m"
        if (sudoku__succeeded)
#line 351 "sudoku.m"
          {
#line 422 "sudoku.m"
            {
#line 422 "sudoku.m"
              sudoku__succeeded = mercury__list__index0_3_p_0(sudoku__TypeInfo_43_53, sudoku__CountryList_21, sudoku__CountryIndex_26, &sudoku__conv2_TempCountry_29);
            }
#line 422 "sudoku.m"
            if (sudoku__succeeded)
#line 422 "sudoku.m"
              {
#line 422 "sudoku.m"
                sudoku__TempCountry_29 = ((MR_Word) sudoku__conv2_TempCountry_29);
#line 422 "sudoku.m"
                sudoku__succeeded = MR_TRUE;
#line 422 "sudoku.m"
              }
#line 351 "sudoku.m"
            if (sudoku__succeeded)
#line 351 "sudoku.m"
              {
#line 423 "sudoku.m"
                sudoku__V_49_49 = (MR_Integer) -1;
#line 423 "sudoku.m"
                {
#line 423 "sudoku.m"
                  mercury__list__delete_all_3_p_1(sudoku__TypeCtorInfo_42_52, sudoku__TempRow_27, ((MR_Box) (sudoku__V_49_49)), &sudoku__RowValues_7);
                }
#line 424 "sudoku.m"
                sudoku__V_50_50 = (MR_Integer) -1;
#line 424 "sudoku.m"
                {
#line 424 "sudoku.m"
                  mercury__list__delete_all_3_p_1(sudoku__TypeCtorInfo_42_52, sudoku__TempCollum_28, ((MR_Box) (sudoku__V_50_50)), &sudoku__CollumValues_8);
                }
#line 425 "sudoku.m"
                sudoku__V_51_51 = (MR_Integer) -1;
#line 425 "sudoku.m"
                {
#line 425 "sudoku.m"
                  mercury__list__delete_all_3_p_1(sudoku__TypeCtorInfo_42_52, sudoku__TempCountry_29, ((MR_Box) (sudoku__V_51_51)), &sudoku__CountryValues_9);
                }
#line 1461 "Mercury/cs/sudoku.c"
                sudoku__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 353 "sudoku.m"
                {
#line 353 "sudoku.m"
                  sudoku__TempList_10 = mercury__list__f_43_43_2_f_0(sudoku__TypeCtorInfo_15_15, sudoku__RowValues_7, sudoku__CollumValues_8);
                }
#line 354 "sudoku.m"
                {
#line 354 "sudoku.m"
                  sudoku__TempList2_11 = mercury__list__f_43_43_2_f_0(sudoku__TypeCtorInfo_15_15, sudoku__TempList_10, sudoku__CountryValues_9);
                }
#line 355 "sudoku.m"
                {
#line 355 "sudoku.m"
                  mercury__list__remove_dups_2_p_0(sudoku__TypeCtorInfo_15_15, sudoku__TempList2_11, &sudoku__UsedValueList_12);
                }
#line 302 "sudoku.m"
                sudoku__FullList_56 = (MR_Word) MR_mkword(MR_mktag(1), &sudoku_scalar_common_1[9]);
#line 1480 "Mercury/cs/sudoku.c"
                sudoku__TypeCtorInfo_24_75 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 303 "sudoku.m"
                {
#line 303 "sudoku.m"
                  mercury__list__delete_elems_3_p_0(sudoku__TypeCtorInfo_24_75, sudoku__FullList_56, sudoku__UsedValueList_12, sudoku__PossibleValues_6);
                }
#line 303 "sudoku.m"
                sudoku__succeeded = MR_TRUE;
#line 351 "sudoku.m"
              }
#line 351 "sudoku.m"
          }
#line 351 "sudoku.m"
      }
#line 351 "sudoku.m"
    return sudoku__succeeded;
#line 351 "sudoku.m"
  }
#line 347 "sudoku.m"
}

#line 306 "sudoku.m"
static MR_bool MR_CALL 
sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0(
#line 306 "sudoku.m"
  MR_Integer sudoku__CellIndex_4,
#line 306 "sudoku.m"
  MR_Word sudoku__Puzzle_5,
#line 306 "sudoku.m"
  MR_Word * sudoku__UpdatedPuzzle_6)
#line 306 "sudoku.m"
{
#line 313 "sudoku.m"
  while (MR_TRUE)
#line 313 "sudoku.m"
    {
#line 313 "sudoku.m"
      /* tailcall optimized into a loop */
#line 313 "sudoku.m"
      {
#line 313 "sudoku.m"
        MR_bool sudoku__succeeded;
#line 313 "sudoku.m"
        MR_Word sudoku__TypeCtorInfo_26_26 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 313 "sudoku.m"
        MR_Integer sudoku__PuzzleLen_7;

#line 315 "sudoku.m"
        {
#line 315 "sudoku.m"
          mercury__list__length_2_p_0(sudoku__TypeCtorInfo_26_26, sudoku__Puzzle_5, &sudoku__PuzzleLen_7);
        }
#line 316 "sudoku.m"
        sudoku__succeeded = (sudoku__CellIndex_4 >= sudoku__PuzzleLen_7);
#line 324 "sudoku.m"
        if (sudoku__succeeded)
#line 321 "sudoku.m"
          {
#line 318 "sudoku.m"
            MR_Integer sudoku__V_13_13 = (MR_Integer) -1;

#line 318 "sudoku.m"
            {
#line 318 "sudoku.m"
              sudoku__succeeded = mercury__list__contains_2_p_0(sudoku__TypeCtorInfo_26_26, sudoku__Puzzle_5, ((MR_Box) (sudoku__V_13_13)));
            }
#line 321 "sudoku.m"
            if (sudoku__succeeded)
#line 320 "sudoku.m"
              {
#line 320 "sudoku.m"
                MR_Integer sudoku__V_14_14 = (MR_Integer) 0;

#line 320 "sudoku.m"
                /* direct tailcall eliminated */
#line 320 "sudoku.m"
                {
#line 320 "sudoku.m"
                  MR_Integer sudoku__CellIndex__tmp_copy_4 = sudoku__V_14_14;

#line 320 "sudoku.m"
                  sudoku__CellIndex_4 = sudoku__CellIndex__tmp_copy_4;
#line 320 "sudoku.m"
                }
#line 320 "sudoku.m"
                continue;
#line 320 "sudoku.m"
              }
#line 321 "sudoku.m"
            else
#line 322 "sudoku.m"
              {
#line 322 "sudoku.m"
                *sudoku__UpdatedPuzzle_6 = sudoku__Puzzle_5;
#line 322 "sudoku.m"
                sudoku__succeeded = MR_TRUE;
#line 322 "sudoku.m"
              }
#line 321 "sudoku.m"
          }
#line 324 "sudoku.m"
        else
#line 325 "sudoku.m"
          {
#line 325 "sudoku.m"
            MR_Integer sudoku__Value_8;
#line 325 "sudoku.m"
            MR_Box sudoku__conv0_Value_8;

#line 325 "sudoku.m"
            {
#line 325 "sudoku.m"
              sudoku__succeeded = mercury__list__index0_3_p_0(sudoku__TypeCtorInfo_26_26, sudoku__Puzzle_5, sudoku__CellIndex_4, &sudoku__conv0_Value_8);
            }
#line 325 "sudoku.m"
            if (sudoku__succeeded)
#line 325 "sudoku.m"
              {
#line 325 "sudoku.m"
                sudoku__Value_8 = ((MR_Integer) sudoku__conv0_Value_8);
#line 325 "sudoku.m"
                sudoku__succeeded = MR_TRUE;
#line 325 "sudoku.m"
              }
#line 325 "sudoku.m"
            if (sudoku__succeeded)
#line 325 "sudoku.m"
              {
#line 327 "sudoku.m"
                sudoku__succeeded = (sudoku__Value_8 == (MR_Integer) -1);
#line 327 "sudoku.m"
                sudoku__succeeded = !(sudoku__succeeded);
#line 330 "sudoku.m"
                if (sudoku__succeeded)
#line 329 "sudoku.m"
                  {
#line 329 "sudoku.m"
                    MR_Integer sudoku__V_15_15;
#line 329 "sudoku.m"
                    MR_Integer sudoku__V_16_16 = (MR_Integer) 1;

#line 329 "sudoku.m"
                    sudoku__V_15_15 = (sudoku__CellIndex_4 + sudoku__V_16_16);
#line 329 "sudoku.m"
                    /* direct tailcall eliminated */
#line 329 "sudoku.m"
                    {
#line 329 "sudoku.m"
                      MR_Integer sudoku__CellIndex__tmp_copy_4 = sudoku__V_15_15;

#line 329 "sudoku.m"
                      sudoku__CellIndex_4 = sudoku__CellIndex__tmp_copy_4;
#line 329 "sudoku.m"
                    }
#line 329 "sudoku.m"
                    continue;
#line 329 "sudoku.m"
                  }
#line 330 "sudoku.m"
                else
#line 339 "sudoku.m"
                  {
#line 339 "sudoku.m"
                    MR_Word sudoku__PossibleValues_9;
#line 331 "sudoku.m"
                    MR_Integer sudoku__Len_10;
#line 331 "sudoku.m"
                    MR_Word sudoku__V_17_17;
#line 331 "sudoku.m"
                    MR_Integer sudoku__V_18_18 = (MR_Integer) 0;

#line 331 "sudoku.m"
                    {
#line 331 "sudoku.m"
                      sudoku__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 331 "sudoku.m"
                      MR_hl_field(MR_mktag(0), sudoku__V_17_17, 0) = ((MR_Box) (sudoku__CellIndex_4));
#line 331 "sudoku.m"
                      MR_hl_field(MR_mktag(0), sudoku__V_17_17, 1) = ((MR_Box) (sudoku__V_18_18));
#line 331 "sudoku.m"
                    }
#line 331 "sudoku.m"
                    {
#line 331 "sudoku.m"
                      sudoku__succeeded = sudoku__find_allPossibleValues_ofCell_3_p_0(sudoku__Puzzle_5, sudoku__V_17_17, &sudoku__PossibleValues_9);
                    }
#line 331 "sudoku.m"
                    if (sudoku__succeeded)
#line 331 "sudoku.m"
                      {
#line 332 "sudoku.m"
                        {
#line 332 "sudoku.m"
                          mercury__list__length_2_p_0(sudoku__TypeCtorInfo_26_26, sudoku__PossibleValues_9, &sudoku__Len_10);
                        }
#line 333 "sudoku.m"
                        sudoku__succeeded = (sudoku__Len_10 == (MR_Integer) 1);
#line 331 "sudoku.m"
                      }
#line 339 "sudoku.m"
                    if (sudoku__succeeded)
#line 334 "sudoku.m"
                      {
#line 334 "sudoku.m"
                        MR_Integer sudoku__Head_11;
#line 334 "sudoku.m"
                        MR_Word sudoku__UpdatedPuzzle1_12;
#line 334 "sudoku.m"
                        MR_Integer sudoku__V_19_19 = (MR_Integer) 0;
#line 334 "sudoku.m"
                        MR_Integer sudoku__V_20_20;
#line 334 "sudoku.m"
                        MR_Integer sudoku__V_21_21;
#line 334 "sudoku.m"
                        MR_Integer sudoku__V_22_22;
#line 334 "sudoku.m"
                        MR_Integer sudoku__V_23_23;
#line 334 "sudoku.m"
                        MR_Box sudoku__conv1_Head_11;

#line 334 "sudoku.m"
                        {
#line 334 "sudoku.m"
                          sudoku__succeeded = mercury__list__index0_3_p_0(sudoku__TypeCtorInfo_26_26, sudoku__PossibleValues_9, sudoku__V_19_19, &sudoku__conv1_Head_11);
                        }
#line 334 "sudoku.m"
                        if (sudoku__succeeded)
#line 334 "sudoku.m"
                          {
#line 334 "sudoku.m"
                            sudoku__Head_11 = ((MR_Integer) sudoku__conv1_Head_11);
#line 334 "sudoku.m"
                            sudoku__succeeded = MR_TRUE;
#line 334 "sudoku.m"
                          }
#line 334 "sudoku.m"
                        if (sudoku__succeeded)
#line 334 "sudoku.m"
                          {
#line 335 "sudoku.m"
                            sudoku__V_21_21 = (MR_Integer) 1;
#line 335 "sudoku.m"
                            sudoku__V_20_20 = (sudoku__CellIndex_4 + sudoku__V_21_21);
#line 335 "sudoku.m"
                            {
#line 335 "sudoku.m"
                              sudoku__succeeded = mercury__list__replace_nth_4_p_0(sudoku__TypeCtorInfo_26_26, sudoku__Puzzle_5, sudoku__V_20_20, ((MR_Box) (sudoku__Head_11)), &sudoku__UpdatedPuzzle1_12);
                            }
#line 334 "sudoku.m"
                            if (sudoku__succeeded)
#line 334 "sudoku.m"
                              {
#line 337 "sudoku.m"
                                sudoku__V_23_23 = (MR_Integer) 1;
#line 337 "sudoku.m"
                                sudoku__V_22_22 = (sudoku__CellIndex_4 + sudoku__V_23_23);
#line 337 "sudoku.m"
                                /* direct tailcall eliminated */
#line 337 "sudoku.m"
                                {
#line 337 "sudoku.m"
                                  MR_Integer sudoku__CellIndex__tmp_copy_4 = sudoku__V_22_22;
#line 337 "sudoku.m"
                                  MR_Word sudoku__Puzzle__tmp_copy_5 = sudoku__UpdatedPuzzle1_12;

#line 337 "sudoku.m"
                                  sudoku__Puzzle_5 = sudoku__Puzzle__tmp_copy_5;
#line 337 "sudoku.m"
                                  sudoku__CellIndex_4 = sudoku__CellIndex__tmp_copy_4;
#line 337 "sudoku.m"
                                }
#line 337 "sudoku.m"
                                continue;
#line 334 "sudoku.m"
                              }
#line 334 "sudoku.m"
                          }
#line 334 "sudoku.m"
                      }
#line 339 "sudoku.m"
                    else
#line 340 "sudoku.m"
                      {
#line 340 "sudoku.m"
                        MR_Integer sudoku__V_24_24;
#line 340 "sudoku.m"
                        MR_Integer sudoku__V_25_25 = (MR_Integer) 1;

#line 340 "sudoku.m"
                        sudoku__V_24_24 = (sudoku__CellIndex_4 + sudoku__V_25_25);
#line 340 "sudoku.m"
                        /* direct tailcall eliminated */
#line 340 "sudoku.m"
                        {
#line 340 "sudoku.m"
                          MR_Integer sudoku__CellIndex__tmp_copy_4 = sudoku__V_24_24;

#line 340 "sudoku.m"
                          sudoku__CellIndex_4 = sudoku__CellIndex__tmp_copy_4;
#line 340 "sudoku.m"
                        }
#line 340 "sudoku.m"
                        continue;
#line 340 "sudoku.m"
                      }
#line 339 "sudoku.m"
                  }
#line 325 "sudoku.m"
              }
#line 325 "sudoku.m"
          }
#line 313 "sudoku.m"
        return sudoku__succeeded;
#line 313 "sudoku.m"
      }
#line 313 "sudoku.m"
      break;
#line 313 "sudoku.m"
    }
#line 306 "sudoku.m"
}

#line 255 "sudoku.m"
static void MR_CALL 
sudoku__load_puzzle_3_p_0(
#line 255 "sudoku.m"
  MR_Word * sudoku__Puzzle_4)
#line 255 "sudoku.m"
{
#line 262 "sudoku.m"
  {
#line 262 "sudoku.m"
    MR_bool sudoku__succeeded;
#line 262 "sudoku.m"
    MR_Word sudoku__Result_6;

#line 263 "sudoku.m"
    {
#line 263 "sudoku.m"
      mercury__io__read_char_3_p_0(&sudoku__Result_6);
    }
#line 266 "sudoku.m"
#line 266 "sudoku.m"
    switch (MR_tag((MR_Word) sudoku__Result_6)) {
#line 266 "sudoku.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 266 "sudoku.m"
      case (MR_Integer) 0:
#line 265 "sudoku.m"
        *sudoku__Puzzle_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 266 "sudoku.m"
        break;
#line 266 "sudoku.m"
      case (MR_Integer) 1:
#line 266 "sudoku.m"
        {
#line 266 "sudoku.m"
          MR_Char sudoku__Char_8 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), sudoku__Result_6, (MR_Integer) 0)));
#line 266 "sudoku.m"
          MR_Word sudoku__Puzzle1_10;
#line 269 "sudoku.m"
          MR_Integer sudoku__Int_9;

#line 275 "sudoku.m"
          {
#line 275 "sudoku.m"
            sudoku__load_puzzle_3_p_0(&sudoku__Puzzle1_10);
          }
#line 267 "sudoku.m"
          {
#line 267 "sudoku.m"
            sudoku__succeeded = mercury__char__digit_to_int_2_p_0(sudoku__Char_8, &sudoku__Int_9);
          }
#line 269 "sudoku.m"
          if (sudoku__succeeded)
#line 268 "sudoku.m"
            {
#line 268 "sudoku.m"
              MR_Word base;
#line 268 "sudoku.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "sudoku.m"
              *sudoku__Puzzle_4 = base;
#line 268 "sudoku.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (sudoku__Int_9));
#line 268 "sudoku.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (sudoku__Puzzle1_10));
#line 268 "sudoku.m"
            }
#line 269 "sudoku.m"
          else
#line 273 "sudoku.m"
            {
#line 271 "sudoku.m"
#line 271 "sudoku.m"
              switch (sudoku__Char_8) {
#line 271 "sudoku.m"
                default:
#line 271 "sudoku.m"
                  sudoku__succeeded = MR_FALSE;
#line 271 "sudoku.m"
                  break;
#line 271 "sudoku.m"
                case (MR_Char) 32:
#line 271 "sudoku.m"
                  sudoku__succeeded = MR_TRUE;
#line 271 "sudoku.m"
                  break;
#line 271 "sudoku.m"
                case (MR_Char) 46:
#line 271 "sudoku.m"
                  sudoku__succeeded = MR_TRUE;
#line 271 "sudoku.m"
                  break;
#line 271 "sudoku.m"
                case (MR_Char) 95:
#line 271 "sudoku.m"
                  sudoku__succeeded = MR_TRUE;
#line 271 "sudoku.m"
                  break;
#line 271 "sudoku.m"
              }
#line 273 "sudoku.m"
              if (sudoku__succeeded)
#line 272 "sudoku.m"
                {
#line 272 "sudoku.m"
                  MR_Integer sudoku__V_14_14 = (MR_Integer) -1;

#line 272 "sudoku.m"
                  {
#line 272 "sudoku.m"
                    MR_Word base;
#line 272 "sudoku.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 272 "sudoku.m"
                    *sudoku__Puzzle_4 = base;
#line 272 "sudoku.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (sudoku__V_14_14));
#line 272 "sudoku.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (sudoku__Puzzle1_10));
#line 272 "sudoku.m"
                  }
#line 272 "sudoku.m"
                }
#line 273 "sudoku.m"
              else
#line 273 "sudoku.m"
                *sudoku__Puzzle_4 = sudoku__Puzzle1_10;
#line 273 "sudoku.m"
            }
#line 266 "sudoku.m"
        }
#line 266 "sudoku.m"
        break;
#line 266 "sudoku.m"
      case (MR_Integer) 2:
#line 265 "sudoku.m"
        *sudoku__Puzzle_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 266 "sudoku.m"
        break;
#line 266 "sudoku.m"
    }
#line 262 "sudoku.m"
  }
#line 255 "sudoku.m"
}

#line 157 "sudoku.m"
static MR_bool MR_CALL 
sudoku__ungroup_single_5_p_0(
#line 157 "sudoku.m"
  MR_Word sudoku__TypeInfo_for_E_16,
#line 157 "sudoku.m"
  MR_Integer sudoku__Width_6,
#line 157 "sudoku.m"
  MR_Word * sudoku__List_7,
#line 157 "sudoku.m"
  MR_Word sudoku__List0_8,
#line 157 "sudoku.m"
  MR_Word * sudoku__Grouped_9,
#line 157 "sudoku.m"
  MR_Word sudoku__Grouped0_10)
#line 157 "sudoku.m"
{
#line 166 "sudoku.m"
  {
#line 166 "sudoku.m"
    MR_bool sudoku__succeeded;

#line 166 "sudoku.m"
    if ((sudoku__Grouped0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 163 "sudoku.m"
      {
#line 164 "sudoku.m"
        *sudoku__Grouped_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 165 "sudoku.m"
        *sudoku__List_7 = sudoku__List0_8;
#line 163 "sudoku.m"
        sudoku__succeeded = MR_TRUE;
#line 163 "sudoku.m"
      }
#line 166 "sudoku.m"
    else
#line 166 "sudoku.m"
      {
#line 166 "sudoku.m"
        MR_Word sudoku__G0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), sudoku__Grouped0_10, (MR_Integer) 0)));
#line 166 "sudoku.m"
        MR_Word sudoku__Grouped0tail_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), sudoku__Grouped0_10, (MR_Integer) 1)));
#line 166 "sudoku.m"
        MR_Word sudoku__G_13;
#line 166 "sudoku.m"
        MR_Word sudoku__Groupedtail_14;
#line 166 "sudoku.m"
        MR_Word sudoku__List1_15;

#line 168 "sudoku.m"
        {
#line 168 "sudoku.m"
          sudoku__succeeded = sudoku__extract_prefix_5_p_1(sudoku__TypeInfo_for_E_16, sudoku__Width_6, &sudoku__List1_15, sudoku__List0_8, &sudoku__G_13, sudoku__G0_11);
        }
#line 166 "sudoku.m"
        if (sudoku__succeeded)
#line 166 "sudoku.m"
          {
#line 169 "sudoku.m"
            {
#line 169 "sudoku.m"
              sudoku__succeeded = sudoku__ungroup_single_5_p_0(sudoku__TypeInfo_for_E_16, sudoku__Width_6, sudoku__List_7, sudoku__List1_15, &sudoku__Groupedtail_14, sudoku__Grouped0tail_12);
            }
#line 166 "sudoku.m"
            if (sudoku__succeeded)
#line 166 "sudoku.m"
              {
#line 167 "sudoku.m"
                {
#line 167 "sudoku.m"
                  MR_Word base;
#line 167 "sudoku.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 167 "sudoku.m"
                  *sudoku__Grouped_9 = base;
#line 167 "sudoku.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (sudoku__G_13));
#line 167 "sudoku.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (sudoku__Groupedtail_14));
#line 167 "sudoku.m"
                }
#line 167 "sudoku.m"
                sudoku__succeeded = MR_TRUE;
#line 166 "sudoku.m"
              }
#line 166 "sudoku.m"
          }
#line 166 "sudoku.m"
      }
#line 166 "sudoku.m"
    return sudoku__succeeded;
#line 166 "sudoku.m"
  }
#line 157 "sudoku.m"
}

#line 143 "sudoku.m"
static MR_bool MR_CALL 
sudoku__unchunk_list_5_p_0(
#line 143 "sudoku.m"
  MR_Word sudoku__TypeInfo_for_E_15,
#line 143 "sudoku.m"
  MR_Integer sudoku__Width_6,
#line 143 "sudoku.m"
  MR_Integer sudoku__Repeat_7,
#line 143 "sudoku.m"
  MR_Word sudoku__Grouped_8,
#line 143 "sudoku.m"
  MR_Word * sudoku__List_9,
#line 143 "sudoku.m"
  MR_Word sudoku__List0_10)
#line 143 "sudoku.m"
{
#line 151 "sudoku.m"
  while (MR_TRUE)
#line 151 "sudoku.m"
    {
#line 151 "sudoku.m"
      /* tailcall optimized into a loop */
#line 151 "sudoku.m"
      {
#line 151 "sudoku.m"
        MR_bool sudoku__succeeded = (sudoku__Repeat_7 == (MR_Integer) 0);

#line 151 "sudoku.m"
        if (sudoku__succeeded)
#line 150 "sudoku.m"
          {
#line 150 "sudoku.m"
            *sudoku__List_9 = sudoku__List0_10;
#line 150 "sudoku.m"
            sudoku__succeeded = MR_TRUE;
#line 150 "sudoku.m"
          }
#line 151 "sudoku.m"
        else
#line 151 "sudoku.m"
          {
#line 151 "sudoku.m"
            MR_Word sudoku__List1_11;
#line 151 "sudoku.m"
            MR_Word sudoku__Grouped1_12;
#line 151 "sudoku.m"
            MR_Integer sudoku__V_13_13;
#line 151 "sudoku.m"
            MR_Integer sudoku__V_14_14;

#line 151 "sudoku.m"
            {
#line 151 "sudoku.m"
              sudoku__succeeded = sudoku__ungroup_single_5_p_0(sudoku__TypeInfo_for_E_15, sudoku__Width_6, &sudoku__List1_11, sudoku__List0_10, &sudoku__Grouped1_12, sudoku__Grouped_8);
            }
#line 151 "sudoku.m"
            if (sudoku__succeeded)
#line 151 "sudoku.m"
              {
#line 152 "sudoku.m"
                sudoku__V_14_14 = (MR_Integer) 1;
#line 152 "sudoku.m"
                sudoku__V_13_13 = (sudoku__Repeat_7 - sudoku__V_14_14);
#line 152 "sudoku.m"
                /* direct tailcall eliminated */
#line 152 "sudoku.m"
                {
#line 152 "sudoku.m"
                  MR_Integer sudoku__Repeat__tmp_copy_7 = sudoku__V_13_13;
#line 152 "sudoku.m"
                  MR_Word sudoku__Grouped__tmp_copy_8 = sudoku__Grouped1_12;
#line 152 "sudoku.m"
                  MR_Word sudoku__List0__tmp_copy_10 = sudoku__List1_11;

#line 152 "sudoku.m"
                  sudoku__List0_10 = sudoku__List0__tmp_copy_10;
#line 152 "sudoku.m"
                  sudoku__Grouped_8 = sudoku__Grouped__tmp_copy_8;
#line 152 "sudoku.m"
                  sudoku__Repeat_7 = sudoku__Repeat__tmp_copy_7;
#line 152 "sudoku.m"
                }
#line 152 "sudoku.m"
                continue;
#line 151 "sudoku.m"
              }
#line 151 "sudoku.m"
          }
#line 151 "sudoku.m"
        return sudoku__succeeded;
#line 151 "sudoku.m"
      }
#line 151 "sudoku.m"
      break;
#line 151 "sudoku.m"
    }
#line 143 "sudoku.m"
}

#line 126 "sudoku.m"
static MR_bool MR_CALL 
sudoku__ungroup_list1_5_p_0(
#line 126 "sudoku.m"
  MR_Word sudoku__TypeInfo_for_E_15,
#line 126 "sudoku.m"
  MR_Integer sudoku__Width_6,
#line 126 "sudoku.m"
  MR_Integer sudoku__Period_7,
#line 126 "sudoku.m"
  MR_Integer sudoku__Repeat_8,
#line 126 "sudoku.m"
  MR_Word * sudoku__List_9,
#line 126 "sudoku.m"
  MR_Word sudoku__Grouped_10)
#line 126 "sudoku.m"
{
#line 136 "sudoku.m"
  {
#line 136 "sudoku.m"
    MR_bool sudoku__succeeded = (sudoku__Grouped_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 136 "sudoku.m"
    if (sudoku__succeeded)
#line 135 "sudoku.m"
      {
#line 135 "sudoku.m"
        *sudoku__List_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 135 "sudoku.m"
        sudoku__succeeded = MR_TRUE;
#line 135 "sudoku.m"
      }
#line 136 "sudoku.m"
    else
#line 136 "sudoku.m"
      {
#line 136 "sudoku.m"
        MR_Word sudoku__TypeCtorInfo_16_16 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 136 "sudoku.m"
        MR_Word sudoku__TypeInfo_17_17;
#line 136 "sudoku.m"
        MR_Word sudoku__Chunk_11;
#line 136 "sudoku.m"
        MR_Word sudoku__Grouped1_12;
#line 136 "sudoku.m"
        MR_Word sudoku__List1_13;
#line 136 "sudoku.m"
        MR_Word sudoku__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 136 "sudoku.m"
        MR_Word sudoku__conv1_Chunk_11;
#line 136 "sudoku.m"
        MR_Word sudoku__conv0_Grouped1_12;

#line 2198 "Mercury/cs/sudoku.c"
        {
#line 2200 "Mercury/cs/sudoku.c"
          sudoku__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2202 "Mercury/cs/sudoku.c"
          MR_hl_field(MR_mktag(0), sudoku__TypeInfo_17_17, 0) = ((MR_Box) (sudoku__TypeCtorInfo_16_16));
#line 2204 "Mercury/cs/sudoku.c"
          MR_hl_field(MR_mktag(0), sudoku__TypeInfo_17_17, 1) = ((MR_Box) (sudoku__TypeInfo_for_E_15));
#line 2206 "Mercury/cs/sudoku.c"
        }
#line 136 "sudoku.m"
        {
#line 136 "sudoku.m"
          sudoku__succeeded = sudoku__extract_prefix_5_p_1(sudoku__TypeInfo_17_17, sudoku__Period_7, &sudoku__conv1_Chunk_11, (MR_Word) sudoku__V_14_14, &sudoku__conv0_Grouped1_12, (MR_Word) sudoku__Grouped_10);
        }
#line 136 "sudoku.m"
        if (sudoku__succeeded)
#line 136 "sudoku.m"
          {
#line 136 "sudoku.m"
            sudoku__Chunk_11 = (MR_Word) sudoku__conv1_Chunk_11;
#line 136 "sudoku.m"
            sudoku__Grouped1_12 = (MR_Word) sudoku__conv0_Grouped1_12;
#line 136 "sudoku.m"
            sudoku__succeeded = MR_TRUE;
#line 136 "sudoku.m"
          }
#line 136 "sudoku.m"
        if (sudoku__succeeded)
#line 136 "sudoku.m"
          {
#line 137 "sudoku.m"
            {
#line 137 "sudoku.m"
              sudoku__succeeded = sudoku__ungroup_list1_5_p_0(sudoku__TypeInfo_for_E_15, sudoku__Width_6, sudoku__Period_7, sudoku__Repeat_8, &sudoku__List1_13, sudoku__Grouped1_12);
            }
#line 136 "sudoku.m"
            if (sudoku__succeeded)
#line 138 "sudoku.m"
              {
#line 138 "sudoku.m"
                return sudoku__succeeded = sudoku__unchunk_list_5_p_0(sudoku__TypeInfo_for_E_15, sudoku__Width_6, sudoku__Repeat_8, sudoku__Chunk_11, sudoku__List_9, sudoku__List1_13);
              }
#line 136 "sudoku.m"
          }
#line 136 "sudoku.m"
      }
#line 136 "sudoku.m"
    return sudoku__succeeded;
#line 136 "sudoku.m"
  }
#line 126 "sudoku.m"
}

#line 95 "sudoku.m"
static MR_bool MR_CALL 
sudoku__extract_prefix_5_p_1(
#line 95 "sudoku.m"
  MR_Word sudoku__TypeInfo_for_E_19,
#line 95 "sudoku.m"
  MR_Integer sudoku__Count_6,
#line 95 "sudoku.m"
  MR_Word * sudoku__STATE_VARIABLE_List_0_11,
#line 95 "sudoku.m"
  MR_Word sudoku__STATE_VARIABLE_List_12,
#line 95 "sudoku.m"
  MR_Word * sudoku__F0_8,
#line 95 "sudoku.m"
  MR_Word sudoku__F_9)
#line 95 "sudoku.m"
{
#line 104 "sudoku.m"
  {
#line 104 "sudoku.m"
    MR_bool sudoku__succeeded;
#line 102 "sudoku.m"
    MR_Integer sudoku__V_13_13 = (MR_Integer) 0;

#line 102 "sudoku.m"
    sudoku__succeeded = (sudoku__Count_6 <= sudoku__V_13_13);
#line 104 "sudoku.m"
    if (sudoku__succeeded)
#line 103 "sudoku.m"
      {
#line 103 "sudoku.m"
        *sudoku__F0_8 = sudoku__F_9;
#line 103 "sudoku.m"
        *sudoku__STATE_VARIABLE_List_0_11 = sudoku__STATE_VARIABLE_List_12;
#line 103 "sudoku.m"
        sudoku__succeeded = MR_TRUE;
#line 103 "sudoku.m"
      }
#line 104 "sudoku.m"
    else
#line 104 "sudoku.m"
      {
#line 104 "sudoku.m"
        MR_Box sudoku__E_10;
#line 104 "sudoku.m"
        MR_Word sudoku__STATE_VARIABLE_List_14_14;
#line 104 "sudoku.m"
        MR_Integer sudoku__V_15_15;
#line 104 "sudoku.m"
        MR_Word sudoku__V_17_17;
#line 104 "sudoku.m"
        MR_Integer sudoku__V_18_18 = (MR_Integer) 1;

#line 105 "sudoku.m"
        sudoku__V_15_15 = (sudoku__Count_6 - sudoku__V_18_18);
#line 105 "sudoku.m"
        {
#line 105 "sudoku.m"
          sudoku__succeeded = sudoku__extract_prefix_5_p_1(sudoku__TypeInfo_for_E_19, sudoku__V_15_15, &sudoku__STATE_VARIABLE_List_14_14, sudoku__STATE_VARIABLE_List_12, &sudoku__V_17_17, sudoku__F_9);
        }
#line 104 "sudoku.m"
        if (sudoku__succeeded)
#line 104 "sudoku.m"
          {
#line 105 "sudoku.m"
            sudoku__succeeded = ((MR_tag((MR_Word) sudoku__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 105 "sudoku.m"
            if (sudoku__succeeded)
#line 105 "sudoku.m"
              {
#line 105 "sudoku.m"
                sudoku__E_10 = (MR_hl_field(MR_mktag(1), sudoku__V_17_17, (MR_Integer) 0));
#line 105 "sudoku.m"
                *sudoku__F0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), sudoku__V_17_17, (MR_Integer) 1)));
#line 104 "sudoku.m"
                {
#line 104 "sudoku.m"
                  MR_Word base;
#line 104 "sudoku.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 104 "sudoku.m"
                  *sudoku__STATE_VARIABLE_List_0_11 = base;
#line 104 "sudoku.m"
                  MR_hl_field(MR_mktag(1), base, 0) = sudoku__E_10;
#line 104 "sudoku.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (sudoku__STATE_VARIABLE_List_14_14));
#line 104 "sudoku.m"
                }
#line 104 "sudoku.m"
                sudoku__succeeded = MR_TRUE;
#line 105 "sudoku.m"
              }
#line 104 "sudoku.m"
          }
#line 104 "sudoku.m"
      }
#line 104 "sudoku.m"
    return sudoku__succeeded;
#line 104 "sudoku.m"
  }
#line 95 "sudoku.m"
}

#line 94 "sudoku.m"
static MR_bool MR_CALL 
sudoku__extract_prefix_5_p_0(
#line 94 "sudoku.m"
  MR_Word sudoku__TypeInfo_for_E_19,
#line 94 "sudoku.m"
  MR_Integer sudoku__Count_6,
#line 94 "sudoku.m"
  MR_Word sudoku__STATE_VARIABLE_List_0_11,
#line 94 "sudoku.m"
  MR_Word * sudoku__STATE_VARIABLE_List_12,
#line 94 "sudoku.m"
  MR_Word sudoku__F0_8,
#line 94 "sudoku.m"
  MR_Word * sudoku__F_9)
#line 94 "sudoku.m"
{
#line 104 "sudoku.m"
  while (MR_TRUE)
#line 104 "sudoku.m"
    {
#line 104 "sudoku.m"
      /* tailcall optimized into a loop */
#line 104 "sudoku.m"
      {
#line 104 "sudoku.m"
        MR_bool sudoku__succeeded;
#line 102 "sudoku.m"
        MR_Integer sudoku__V_13_13 = (MR_Integer) 0;

#line 102 "sudoku.m"
        sudoku__succeeded = (sudoku__Count_6 <= sudoku__V_13_13);
#line 104 "sudoku.m"
        if (sudoku__succeeded)
#line 103 "sudoku.m"
          {
#line 103 "sudoku.m"
            *sudoku__F_9 = sudoku__F0_8;
#line 103 "sudoku.m"
            *sudoku__STATE_VARIABLE_List_12 = sudoku__STATE_VARIABLE_List_0_11;
#line 103 "sudoku.m"
            sudoku__succeeded = MR_TRUE;
#line 103 "sudoku.m"
          }
#line 104 "sudoku.m"
        else
#line 104 "sudoku.m"
          {
#line 104 "sudoku.m"
            MR_Box sudoku__E_10;
#line 104 "sudoku.m"
            MR_Word sudoku__STATE_VARIABLE_List_14_14;
#line 104 "sudoku.m"
            MR_Integer sudoku__V_15_15;
#line 104 "sudoku.m"
            MR_Word sudoku__V_17_17;
#line 104 "sudoku.m"
            MR_Integer sudoku__V_18_18;

#line 104 "sudoku.m"
            sudoku__succeeded = ((MR_tag((MR_Word) sudoku__STATE_VARIABLE_List_0_11)) == (MR_mktag((MR_Integer) 1)));
#line 104 "sudoku.m"
            if (sudoku__succeeded)
#line 104 "sudoku.m"
              {
#line 104 "sudoku.m"
                sudoku__E_10 = (MR_hl_field(MR_mktag(1), sudoku__STATE_VARIABLE_List_0_11, (MR_Integer) 0));
#line 104 "sudoku.m"
                sudoku__STATE_VARIABLE_List_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), sudoku__STATE_VARIABLE_List_0_11, (MR_Integer) 1)));
#line 105 "sudoku.m"
                sudoku__V_18_18 = (MR_Integer) 1;
#line 105 "sudoku.m"
                sudoku__V_15_15 = (sudoku__Count_6 - sudoku__V_18_18);
#line 105 "sudoku.m"
                {
#line 105 "sudoku.m"
                  sudoku__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 105 "sudoku.m"
                  MR_hl_field(MR_mktag(1), sudoku__V_17_17, 0) = sudoku__E_10;
#line 105 "sudoku.m"
                  MR_hl_field(MR_mktag(1), sudoku__V_17_17, 1) = ((MR_Box) (sudoku__F0_8));
#line 105 "sudoku.m"
                }
#line 105 "sudoku.m"
                {
#line 105 "sudoku.m"
                  /* direct tailcall eliminated */
#line 105 "sudoku.m"
                  {
#line 105 "sudoku.m"
                    MR_Integer sudoku__Count__tmp_copy_6 = sudoku__V_15_15;
#line 105 "sudoku.m"
                    MR_Word sudoku__STATE_VARIABLE_List_0__tmp_copy_11 = sudoku__STATE_VARIABLE_List_14_14;
#line 105 "sudoku.m"
                    MR_Word sudoku__F0__tmp_copy_8 = sudoku__V_17_17;

#line 105 "sudoku.m"
                    sudoku__F0_8 = sudoku__F0__tmp_copy_8;
#line 105 "sudoku.m"
                    sudoku__STATE_VARIABLE_List_0_11 = sudoku__STATE_VARIABLE_List_0__tmp_copy_11;
#line 105 "sudoku.m"
                    sudoku__Count_6 = sudoku__Count__tmp_copy_6;
#line 105 "sudoku.m"
                  }
#line 105 "sudoku.m"
                  continue;
#line 105 "sudoku.m"
                }
#line 104 "sudoku.m"
              }
#line 104 "sudoku.m"
          }
#line 104 "sudoku.m"
        return sudoku__succeeded;
#line 104 "sudoku.m"
      }
#line 104 "sudoku.m"
      break;
#line 104 "sudoku.m"
    }
#line 94 "sudoku.m"
}

#line 77 "sudoku.m"
static MR_bool MR_CALL 
sudoku__group_single_repeat_5_p_0(
#line 77 "sudoku.m"
  MR_Word sudoku__TypeInfo_for_E_18,
#line 77 "sudoku.m"
  MR_Integer sudoku__Width_6,
#line 77 "sudoku.m"
  MR_Word sudoku__STATE_VARIABLE_List_0_14,
#line 77 "sudoku.m"
  MR_Word * sudoku__STATE_VARIABLE_List_15,
#line 77 "sudoku.m"
  MR_Word sudoku__Grouped0_8,
#line 77 "sudoku.m"
  MR_Word * sudoku__Grouped_9)
#line 77 "sudoku.m"
{
#line 86 "sudoku.m"
  {
#line 86 "sudoku.m"
    MR_bool sudoku__succeeded;

#line 86 "sudoku.m"
    if ((sudoku__Grouped0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 84 "sudoku.m"
      {
#line 85 "sudoku.m"
        *sudoku__Grouped_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 85 "sudoku.m"
        *sudoku__STATE_VARIABLE_List_15 = sudoku__STATE_VARIABLE_List_0_14;
#line 84 "sudoku.m"
        sudoku__succeeded = MR_TRUE;
#line 84 "sudoku.m"
      }
#line 86 "sudoku.m"
    else
#line 86 "sudoku.m"
      {
#line 86 "sudoku.m"
        MR_Word sudoku__G0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), sudoku__Grouped0_8, (MR_Integer) 0)));
#line 86 "sudoku.m"
        MR_Word sudoku__Grouped0tail_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), sudoku__Grouped0_8, (MR_Integer) 1)));
#line 86 "sudoku.m"
        MR_Word sudoku__G_12;
#line 86 "sudoku.m"
        MR_Word sudoku__Groupedtail_13;
#line 86 "sudoku.m"
        MR_Word sudoku__STATE_VARIABLE_List_16_16;

#line 88 "sudoku.m"
        {
#line 88 "sudoku.m"
          sudoku__succeeded = sudoku__extract_prefix_5_p_0(sudoku__TypeInfo_for_E_18, sudoku__Width_6, sudoku__STATE_VARIABLE_List_0_14, &sudoku__STATE_VARIABLE_List_16_16, sudoku__G0_10, &sudoku__G_12);
        }
#line 86 "sudoku.m"
        if (sudoku__succeeded)
#line 86 "sudoku.m"
          {
#line 89 "sudoku.m"
            {
#line 89 "sudoku.m"
              sudoku__succeeded = sudoku__group_single_repeat_5_p_0(sudoku__TypeInfo_for_E_18, sudoku__Width_6, sudoku__STATE_VARIABLE_List_16_16, sudoku__STATE_VARIABLE_List_15, sudoku__Grouped0tail_11, &sudoku__Groupedtail_13);
            }
#line 86 "sudoku.m"
            if (sudoku__succeeded)
#line 86 "sudoku.m"
              {
#line 87 "sudoku.m"
                {
#line 87 "sudoku.m"
                  MR_Word base;
#line 87 "sudoku.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 87 "sudoku.m"
                  *sudoku__Grouped_9 = base;
#line 87 "sudoku.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (sudoku__G_12));
#line 87 "sudoku.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (sudoku__Groupedtail_13));
#line 87 "sudoku.m"
                }
#line 87 "sudoku.m"
                sudoku__succeeded = MR_TRUE;
#line 86 "sudoku.m"
              }
#line 86 "sudoku.m"
          }
#line 86 "sudoku.m"
      }
#line 86 "sudoku.m"
    return sudoku__succeeded;
#line 86 "sudoku.m"
  }
#line 77 "sudoku.m"
}

#line 62 "sudoku.m"
static MR_bool MR_CALL 
sudoku__chunk_list_6_p_0(
#line 62 "sudoku.m"
  MR_Word sudoku__TypeInfo_for_E_21,
#line 62 "sudoku.m"
  MR_Integer sudoku__Width_7,
#line 62 "sudoku.m"
  MR_Integer sudoku__Repeat_8,
#line 62 "sudoku.m"
  MR_Word sudoku__STATE_VARIABLE_List_0_11,
#line 62 "sudoku.m"
  MR_Word * sudoku__STATE_VARIABLE_List_12,
#line 62 "sudoku.m"
  MR_Word sudoku__STATE_VARIABLE_Grouped_0_13,
#line 62 "sudoku.m"
  MR_Word * sudoku__STATE_VARIABLE_Grouped_14)
#line 62 "sudoku.m"
{
#line 70 "sudoku.m"
  while (MR_TRUE)
#line 70 "sudoku.m"
    {
#line 70 "sudoku.m"
      /* tailcall optimized into a loop */
#line 70 "sudoku.m"
      {
#line 70 "sudoku.m"
        MR_bool sudoku__succeeded = (sudoku__Repeat_8 == (MR_Integer) 0);

#line 70 "sudoku.m"
        if (sudoku__succeeded)
#line 69 "sudoku.m"
          {
#line 69 "sudoku.m"
            *sudoku__STATE_VARIABLE_Grouped_14 = sudoku__STATE_VARIABLE_Grouped_0_13;
#line 69 "sudoku.m"
            *sudoku__STATE_VARIABLE_List_12 = sudoku__STATE_VARIABLE_List_0_11;
#line 69 "sudoku.m"
            sudoku__succeeded = MR_TRUE;
#line 69 "sudoku.m"
          }
#line 70 "sudoku.m"
        else
#line 70 "sudoku.m"
          {
#line 70 "sudoku.m"
            MR_Word sudoku__STATE_VARIABLE_List_15_15;
#line 70 "sudoku.m"
            MR_Word sudoku__STATE_VARIABLE_Grouped_16_16;
#line 70 "sudoku.m"
            MR_Integer sudoku__V_17_17;
#line 70 "sudoku.m"
            MR_Integer sudoku__V_20_20;

#line 70 "sudoku.m"
            {
#line 70 "sudoku.m"
              sudoku__succeeded = sudoku__group_single_repeat_5_p_0(sudoku__TypeInfo_for_E_21, sudoku__Width_7, sudoku__STATE_VARIABLE_List_0_11, &sudoku__STATE_VARIABLE_List_15_15, sudoku__STATE_VARIABLE_Grouped_0_13, &sudoku__STATE_VARIABLE_Grouped_16_16);
            }
#line 70 "sudoku.m"
            if (sudoku__succeeded)
#line 70 "sudoku.m"
              {
#line 71 "sudoku.m"
                sudoku__V_20_20 = (MR_Integer) 1;
#line 71 "sudoku.m"
                sudoku__V_17_17 = (sudoku__Repeat_8 - sudoku__V_20_20);
#line 71 "sudoku.m"
                /* direct tailcall eliminated */
#line 71 "sudoku.m"
                {
#line 71 "sudoku.m"
                  MR_Integer sudoku__Repeat__tmp_copy_8 = sudoku__V_17_17;
#line 71 "sudoku.m"
                  MR_Word sudoku__STATE_VARIABLE_List_0__tmp_copy_11 = sudoku__STATE_VARIABLE_List_15_15;
#line 71 "sudoku.m"
                  MR_Word sudoku__STATE_VARIABLE_Grouped_0__tmp_copy_13 = sudoku__STATE_VARIABLE_Grouped_16_16;

#line 71 "sudoku.m"
                  sudoku__STATE_VARIABLE_Grouped_0_13 = sudoku__STATE_VARIABLE_Grouped_0__tmp_copy_13;
#line 71 "sudoku.m"
                  sudoku__STATE_VARIABLE_List_0_11 = sudoku__STATE_VARIABLE_List_0__tmp_copy_11;
#line 71 "sudoku.m"
                  sudoku__Repeat_8 = sudoku__Repeat__tmp_copy_8;
#line 71 "sudoku.m"
                }
#line 71 "sudoku.m"
                continue;
#line 70 "sudoku.m"
              }
#line 70 "sudoku.m"
          }
#line 70 "sudoku.m"
        return sudoku__succeeded;
#line 70 "sudoku.m"
      }
#line 70 "sudoku.m"
      break;
#line 70 "sudoku.m"
    }
#line 62 "sudoku.m"
}

#line 42 "sudoku.m"
static MR_bool MR_CALL 
sudoku__group_list1_5_p_0(
#line 42 "sudoku.m"
  MR_Word sudoku__TypeInfo_for_E_18,
#line 42 "sudoku.m"
  MR_Integer sudoku__Width_6,
#line 42 "sudoku.m"
  MR_Integer sudoku__Period_7,
#line 42 "sudoku.m"
  MR_Integer sudoku__Repeat_8,
#line 42 "sudoku.m"
  MR_Word sudoku__List_9,
#line 42 "sudoku.m"
  MR_Word * sudoku__Grouped_10)
#line 42 "sudoku.m"
{
#line 52 "sudoku.m"
  {
#line 52 "sudoku.m"
    MR_bool sudoku__succeeded;

#line 52 "sudoku.m"
    if ((sudoku__List_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 51 "sudoku.m"
      {
#line 51 "sudoku.m"
        *sudoku__Grouped_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 51 "sudoku.m"
        sudoku__succeeded = MR_TRUE;
#line 51 "sudoku.m"
      }
#line 52 "sudoku.m"
    else
#line 52 "sudoku.m"
      {
#line 52 "sudoku.m"
        MR_Word sudoku__TypeCtorInfo_19_19 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 52 "sudoku.m"
        MR_Word sudoku__TypeInfo_20_20;
#line 52 "sudoku.m"
        MR_Word sudoku__Grouped0_13;
#line 52 "sudoku.m"
        MR_Word sudoku__List1_14;
#line 52 "sudoku.m"
        MR_Word sudoku__Grouped1_15;
#line 52 "sudoku.m"
        MR_Word sudoku__Grouped2_16;
#line 52 "sudoku.m"
        MR_Word sudoku__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 53 "sudoku.m"
        MR_Word sudoku__conv0_Grouped0_13;
#line 57 "sudoku.m"
        MR_Word sudoku__conv1_Grouped_10;

#line 2733 "Mercury/cs/sudoku.c"
        {
#line 2735 "Mercury/cs/sudoku.c"
          sudoku__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2737 "Mercury/cs/sudoku.c"
          MR_hl_field(MR_mktag(0), sudoku__TypeInfo_20_20, 0) = ((MR_Box) (sudoku__TypeCtorInfo_19_19));
#line 2739 "Mercury/cs/sudoku.c"
          MR_hl_field(MR_mktag(0), sudoku__TypeInfo_20_20, 1) = ((MR_Box) (sudoku__TypeInfo_for_E_18));
#line 2741 "Mercury/cs/sudoku.c"
        }
#line 53 "sudoku.m"
        {
#line 53 "sudoku.m"
          mercury__list__duplicate_3_p_0(sudoku__TypeInfo_20_20, sudoku__Period_7, ((MR_Box) (sudoku__V_17_17)), &sudoku__conv0_Grouped0_13);
        }
#line 53 "sudoku.m"
        sudoku__Grouped0_13 = (MR_Word) sudoku__conv0_Grouped0_13;
#line 54 "sudoku.m"
        {
#line 54 "sudoku.m"
          sudoku__succeeded = sudoku__chunk_list_6_p_0(sudoku__TypeInfo_for_E_18, sudoku__Width_6, sudoku__Repeat_8, sudoku__List_9, &sudoku__List1_14, sudoku__Grouped0_13, &sudoku__Grouped1_15);
        }
#line 52 "sudoku.m"
        if (sudoku__succeeded)
#line 52 "sudoku.m"
          {
#line 55 "sudoku.m"
            {
#line 55 "sudoku.m"
              sudoku__succeeded = sudoku__group_list1_5_p_0(sudoku__TypeInfo_for_E_18, sudoku__Width_6, sudoku__Period_7, sudoku__Repeat_8, sudoku__List1_14, &sudoku__Grouped2_16);
            }
#line 52 "sudoku.m"
            if (sudoku__succeeded)
#line 52 "sudoku.m"
              {
#line 57 "sudoku.m"
                {
#line 57 "sudoku.m"
                  mercury__list__append_3_p_1(sudoku__TypeInfo_20_20, (MR_Word) sudoku__Grouped1_15, (MR_Word) sudoku__Grouped2_16, &sudoku__conv1_Grouped_10);
                }
#line 57 "sudoku.m"
                *sudoku__Grouped_10 = (MR_Word) sudoku__conv1_Grouped_10;
#line 57 "sudoku.m"
                sudoku__succeeded = MR_TRUE;
#line 52 "sudoku.m"
              }
#line 52 "sudoku.m"
          }
#line 52 "sudoku.m"
      }
#line 52 "sudoku.m"
    return sudoku__succeeded;
#line 52 "sudoku.m"
  }
#line 42 "sudoku.m"
}

#line 117 "sudoku.m"
static void MR_CALL 
sudoku__ungroup_list_5_p_0_1(
#line 117 "sudoku.m"
  MR_Box sudoku__closure_arg,
#line 117 "sudoku.m"
  MR_Box sudoku__wrapper_arg_1,
#line 117 "sudoku.m"
  MR_Box * sudoku__wrapper_arg_2)
#line 117 "sudoku.m"
{
#line 117 "sudoku.m"
  {
#line 117 "sudoku.m"
    MR_Box sudoku__closure = sudoku__closure_arg;
#line 117 "sudoku.m"
    MR_Word sudoku__conv0_HeadVar__2_2;

#line 117 "sudoku.m"
    {
#line 117 "sudoku.m"
      mercury__list__reverse_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), sudoku__closure, (MR_Integer) 3))), ((MR_Word) sudoku__wrapper_arg_1), &sudoku__conv0_HeadVar__2_2);
    }
#line 117 "sudoku.m"
    *sudoku__wrapper_arg_2 = ((MR_Box) (sudoku__conv0_HeadVar__2_2));
#line 117 "sudoku.m"
  }
#line 117 "sudoku.m"
}

#line 16 "sudoku.m"
void MR_CALL 
sudoku__ungroup_list_5_p_0(
#line 16 "sudoku.m"
  MR_Word sudoku__TypeInfo_for_E_21,
#line 16 "sudoku.m"
  MR_Integer sudoku__Width_6,
#line 16 "sudoku.m"
  MR_Integer sudoku__Period_7,
#line 16 "sudoku.m"
  MR_Integer sudoku__Repeat_8,
#line 16 "sudoku.m"
  MR_Word * sudoku__List_9,
#line 16 "sudoku.m"
  MR_Word sudoku__Grouped_10)
#line 16 "sudoku.m"
{
#line 116 "sudoku.m"
  {
#line 116 "sudoku.m"
    MR_bool sudoku__succeeded;
#line 116 "sudoku.m"
    MR_Word sudoku__TypeCtorInfo_22_22;
#line 116 "sudoku.m"
    MR_Word sudoku__TypeInfo_23_23;
#line 116 "sudoku.m"
    MR_Word sudoku__Grouped_rev_13;
#line 116 "sudoku.m"
    MR_Word sudoku__V_15_15;
#line 121 "sudoku.m"
    MR_Word sudoku__List1_14;

#line 117 "sudoku.m"
    {
#line 117 "sudoku.m"
      sudoku__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 117 "sudoku.m"
      MR_hl_field(MR_mktag(0), sudoku__V_15_15, 0) = ((MR_Box) (&sudoku_scalar_common_3[0]));
#line 117 "sudoku.m"
      MR_hl_field(MR_mktag(0), sudoku__V_15_15, 1) = ((MR_Box) (sudoku__ungroup_list_5_p_0_1));
#line 117 "sudoku.m"
      MR_hl_field(MR_mktag(0), sudoku__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 117 "sudoku.m"
      MR_hl_field(MR_mktag(0), sudoku__V_15_15, 3) = ((MR_Box) (sudoku__TypeInfo_for_E_21));
#line 117 "sudoku.m"
    }
#line 2866 "Mercury/cs/sudoku.c"
    sudoku__TypeCtorInfo_22_22 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 2868 "Mercury/cs/sudoku.c"
    {
#line 2870 "Mercury/cs/sudoku.c"
      sudoku__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2872 "Mercury/cs/sudoku.c"
      MR_hl_field(MR_mktag(0), sudoku__TypeInfo_23_23, 0) = ((MR_Box) (sudoku__TypeCtorInfo_22_22));
#line 2874 "Mercury/cs/sudoku.c"
      MR_hl_field(MR_mktag(0), sudoku__TypeInfo_23_23, 1) = ((MR_Box) (sudoku__TypeInfo_for_E_21));
#line 2876 "Mercury/cs/sudoku.c"
    }
#line 117 "sudoku.m"
    {
#line 117 "sudoku.m"
      mercury__list__map_3_p_0(sudoku__TypeInfo_23_23, sudoku__TypeInfo_23_23, (MR_Word) sudoku__V_15_15, (MR_Word) sudoku__Grouped_10, &sudoku__Grouped_rev_13);
    }
#line 119 "sudoku.m"
    {
#line 119 "sudoku.m"
      sudoku__succeeded = sudoku__ungroup_list1_5_p_0(sudoku__TypeInfo_for_E_21, sudoku__Width_6, sudoku__Period_7, sudoku__Repeat_8, &sudoku__List1_14, sudoku__Grouped_rev_13);
    }
#line 121 "sudoku.m"
    if (sudoku__succeeded)
#line 120 "sudoku.m"
      *sudoku__List_9 = sudoku__List1_14;
#line 121 "sudoku.m"
    else
#line 121 "sudoku.m"
      {
#line 121 "sudoku.m"
        MR_String sudoku__V_18_18 = (MR_String) "internal error:  wrong list lengths";

#line 121 "sudoku.m"
        {
#line 121 "sudoku.m"
          mercury__require__error_1_p_0(sudoku__V_18_18);
#line 121 "sudoku.m"
          return;
        }
#line 121 "sudoku.m"
      }
#line 116 "sudoku.m"
  }
#line 16 "sudoku.m"
}

#line 34 "sudoku.m"
static void MR_CALL 
sudoku__group_list_5_p_0_1(
#line 34 "sudoku.m"
  MR_Box sudoku__closure_arg,
#line 34 "sudoku.m"
  MR_Box sudoku__wrapper_arg_1,
#line 34 "sudoku.m"
  MR_Box * sudoku__wrapper_arg_2)
#line 34 "sudoku.m"
{
#line 34 "sudoku.m"
  {
#line 34 "sudoku.m"
    MR_Box sudoku__closure = sudoku__closure_arg;
#line 34 "sudoku.m"
    MR_Word sudoku__conv0_HeadVar__2_2;

#line 34 "sudoku.m"
    {
#line 34 "sudoku.m"
      mercury__list__reverse_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), sudoku__closure, (MR_Integer) 3))), ((MR_Word) sudoku__wrapper_arg_1), &sudoku__conv0_HeadVar__2_2);
    }
#line 34 "sudoku.m"
    *sudoku__wrapper_arg_2 = ((MR_Box) (sudoku__conv0_HeadVar__2_2));
#line 34 "sudoku.m"
  }
#line 34 "sudoku.m"
}

#line 13 "sudoku.m"
void MR_CALL 
sudoku__group_list_5_p_0(
#line 13 "sudoku.m"
  MR_Word sudoku__TypeInfo_for_E_20,
#line 13 "sudoku.m"
  MR_Integer sudoku__Width_6,
#line 13 "sudoku.m"
  MR_Integer sudoku__Period_7,
#line 13 "sudoku.m"
  MR_Integer sudoku__Repeat_8,
#line 13 "sudoku.m"
  MR_Word sudoku__List_9,
#line 13 "sudoku.m"
  MR_Word * sudoku__Grouped_10)
#line 13 "sudoku.m"
{
#line 36 "sudoku.m"
  {
#line 36 "sudoku.m"
    MR_bool sudoku__succeeded;
#line 36 "sudoku.m"
    MR_Word sudoku__Grouped_rev_11;

#line 33 "sudoku.m"
    {
#line 33 "sudoku.m"
      sudoku__succeeded = sudoku__group_list1_5_p_0(sudoku__TypeInfo_for_E_20, sudoku__Width_6, sudoku__Period_7, sudoku__Repeat_8, sudoku__List_9, &sudoku__Grouped_rev_11);
    }
#line 36 "sudoku.m"
    if (sudoku__succeeded)
#line 34 "sudoku.m"
      {
#line 34 "sudoku.m"
        MR_Word sudoku__TypeCtorInfo_21_21;
#line 34 "sudoku.m"
        MR_Word sudoku__TypeInfo_22_22;
#line 34 "sudoku.m"
        MR_Word sudoku__V_14_14;

#line 34 "sudoku.m"
        {
#line 34 "sudoku.m"
          sudoku__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 34 "sudoku.m"
          MR_hl_field(MR_mktag(0), sudoku__V_14_14, 0) = ((MR_Box) (&sudoku_scalar_common_3[0]));
#line 34 "sudoku.m"
          MR_hl_field(MR_mktag(0), sudoku__V_14_14, 1) = ((MR_Box) (sudoku__group_list_5_p_0_1));
#line 34 "sudoku.m"
          MR_hl_field(MR_mktag(0), sudoku__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 34 "sudoku.m"
          MR_hl_field(MR_mktag(0), sudoku__V_14_14, 3) = ((MR_Box) (sudoku__TypeInfo_for_E_20));
#line 34 "sudoku.m"
        }
#line 2997 "Mercury/cs/sudoku.c"
        sudoku__TypeCtorInfo_21_21 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 2999 "Mercury/cs/sudoku.c"
        {
#line 3001 "Mercury/cs/sudoku.c"
          sudoku__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3003 "Mercury/cs/sudoku.c"
          MR_hl_field(MR_mktag(0), sudoku__TypeInfo_22_22, 0) = ((MR_Box) (sudoku__TypeCtorInfo_21_21));
#line 3005 "Mercury/cs/sudoku.c"
          MR_hl_field(MR_mktag(0), sudoku__TypeInfo_22_22, 1) = ((MR_Box) (sudoku__TypeInfo_for_E_20));
#line 3007 "Mercury/cs/sudoku.c"
        }
#line 34 "sudoku.m"
        {
#line 34 "sudoku.m"
          mercury__list__map_3_p_0(sudoku__TypeInfo_22_22, sudoku__TypeInfo_22_22, (MR_Word) sudoku__V_14_14, (MR_Word) sudoku__Grouped_rev_11, sudoku__Grouped_10);
#line 34 "sudoku.m"
          return;
        }
#line 34 "sudoku.m"
      }
#line 36 "sudoku.m"
    else
#line 36 "sudoku.m"
      {
#line 36 "sudoku.m"
        MR_String sudoku__V_17_17 = (MR_String) "internal error:  wrong list lengths";

#line 36 "sudoku.m"
        {
#line 36 "sudoku.m"
          mercury__require__error_1_p_0(sudoku__V_17_17);
#line 36 "sudoku.m"
          return;
        }
#line 36 "sudoku.m"
      }
#line 36 "sudoku.m"
  }
#line 13 "sudoku.m"
}

#line 9 "sudoku.m"
void MR_CALL 
main_2_p_0(void)
#line 9 "sudoku.m"
{
#line 174 "sudoku.m"
  {
#line 174 "sudoku.m"
    MR_bool sudoku__succeeded;
#line 174 "sudoku.m"
    MR_Word sudoku__Args_4;
#line 185 "sudoku.m"
    MR_String sudoku__File_5;
#line 176 "sudoku.m"
    MR_Word sudoku__V_11_11;

#line 175 "sudoku.m"
    {
#line 175 "sudoku.m"
      mercury__io__command_line_arguments_3_p_0(&sudoku__Args_4);
    }
#line 176 "sudoku.m"
    sudoku__succeeded = ((MR_tag((MR_Word) sudoku__Args_4)) == (MR_mktag((MR_Integer) 1)));
#line 176 "sudoku.m"
    if (sudoku__succeeded)
#line 176 "sudoku.m"
      {
#line 176 "sudoku.m"
        sudoku__File_5 = ((MR_String) (MR_hl_field(MR_mktag(1), sudoku__Args_4, (MR_Integer) 0)));
#line 176 "sudoku.m"
        sudoku__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), sudoku__Args_4, (MR_Integer) 1)));
#line 176 "sudoku.m"
        sudoku__succeeded = (sudoku__V_11_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 176 "sudoku.m"
      }
#line 185 "sudoku.m"
    if (sudoku__succeeded)
#line 177 "sudoku.m"
      {
#line 177 "sudoku.m"
        MR_Word sudoku__Result_6;

#line 177 "sudoku.m"
        {
#line 177 "sudoku.m"
          mercury__io__see_4_p_0(sudoku__File_5, &sudoku__Result_6);
        }
#line 181 "sudoku.m"
        if ((sudoku__Result_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 178 "sudoku.m"
          {
#line 178 "sudoku.m"
            MR_Word sudoku__Puzzle_25;

#line 221 "sudoku.m"
            {
#line 221 "sudoku.m"
              sudoku__load_puzzle_3_p_0(&sudoku__Puzzle_25);
            }
#line 223 "sudoku.m"
            sudoku__succeeded = (sudoku__Puzzle_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 226 "sudoku.m"
            if (sudoku__succeeded)
#line 224 "sudoku.m"
              {
#line 224 "sudoku.m"
                MR_String sudoku__V_30_30 = (MR_String) "Error reading puzzle\n";
#line 224 "sudoku.m"
                MR_Integer sudoku__V_32_32;

#line 224 "sudoku.m"
                {
#line 224 "sudoku.m"
                  mercury__io__write_string_3_p_0(sudoku__V_30_30);
                }
#line 225 "sudoku.m"
                sudoku__V_32_32 = (MR_Integer) 1;
#line 225 "sudoku.m"
                {
#line 225 "sudoku.m"
                  mercury__io__set_exit_status_3_p_0(sudoku__V_32_32);
                }
#line 224 "sudoku.m"
              }
#line 226 "sudoku.m"
            else
#line 232 "sudoku.m"
              {
#line 232 "sudoku.m"
                MR_Integer sudoku__Size_26;
#line 232 "sudoku.m"
                MR_Integer sudoku__Boxsize_27;
#line 226 "sudoku.m"
                MR_Word sudoku__TypeCtorInfo_22_41 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 226 "sudoku.m"
                MR_Integer sudoku__V_34_34;

#line 226 "sudoku.m"
                {
#line 226 "sudoku.m"
                  sudoku__V_34_34 = mercury__list__length_1_f_0(sudoku__TypeCtorInfo_22_41, sudoku__Puzzle_25);
                }
#line 245 "sudoku.m"
#line 245 "sudoku.m"
                switch (sudoku__V_34_34) {
#line 245 "sudoku.m"
                  default:
#line 245 "sudoku.m"
                    sudoku__succeeded = MR_FALSE;
#line 245 "sudoku.m"
                    break;
#line 245 "sudoku.m"
                  case (MR_Integer) 16:
#line 245 "sudoku.m"
                    {
#line 245 "sudoku.m"
                      sudoku__Size_26 = (MR_Integer) 4;
#line 245 "sudoku.m"
                      sudoku__Boxsize_27 = (MR_Integer) 2;
#line 245 "sudoku.m"
                      sudoku__succeeded = MR_TRUE;
#line 245 "sudoku.m"
                    }
#line 245 "sudoku.m"
                    break;
#line 245 "sudoku.m"
                  case (MR_Integer) 81:
#line 246 "sudoku.m"
                    {
#line 246 "sudoku.m"
                      sudoku__Size_26 = (MR_Integer) 9;
#line 246 "sudoku.m"
                      sudoku__Boxsize_27 = (MR_Integer) 3;
#line 246 "sudoku.m"
                      sudoku__succeeded = MR_TRUE;
#line 246 "sudoku.m"
                    }
#line 245 "sudoku.m"
                    break;
#line 245 "sudoku.m"
                  case (MR_Integer) 256:
#line 247 "sudoku.m"
                    {
#line 247 "sudoku.m"
                      sudoku__Size_26 = (MR_Integer) 16;
#line 247 "sudoku.m"
                      sudoku__Boxsize_27 = (MR_Integer) 4;
#line 247 "sudoku.m"
                      sudoku__succeeded = MR_TRUE;
#line 247 "sudoku.m"
                    }
#line 245 "sudoku.m"
                    break;
#line 245 "sudoku.m"
                  case (MR_Integer) 625:
#line 248 "sudoku.m"
                    {
#line 248 "sudoku.m"
                      sudoku__Size_26 = (MR_Integer) 25;
#line 248 "sudoku.m"
                      sudoku__Boxsize_27 = (MR_Integer) 5;
#line 248 "sudoku.m"
                      sudoku__succeeded = MR_TRUE;
#line 248 "sudoku.m"
                    }
#line 245 "sudoku.m"
                    break;
#line 245 "sudoku.m"
                }
#line 232 "sudoku.m"
                if (sudoku__succeeded)
#line 230 "sudoku.m"
                  {
#line 230 "sudoku.m"
                    MR_Word sudoku__OutputPuzzle_28;
#line 289 "sudoku.m"
                    MR_Integer sudoku__V_44_44 = (MR_Integer) 0;

#line 291 "sudoku.m"
                    {
#line 291 "sudoku.m"
                      sudoku__succeeded = sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0(sudoku__V_44_44, sudoku__Puzzle_25, &sudoku__OutputPuzzle_28);
                    }
#line 230 "sudoku.m"
                    if (sudoku__succeeded)
#line 229 "sudoku.m"
                      {
#line 229 "sudoku.m"
                        sudoku__print_puzzle_5_p_0(sudoku__OutputPuzzle_28, sudoku__Size_26, sudoku__Boxsize_27);
                      }
#line 230 "sudoku.m"
                    else
#line 230 "sudoku.m"
                      {
#line 230 "sudoku.m"
                        sudoku__print_puzzle_5_p_0(sudoku__Puzzle_25, sudoku__Size_26, sudoku__Boxsize_27);
                      }
#line 230 "sudoku.m"
                  }
#line 232 "sudoku.m"
                else
#line 232 "sudoku.m"
                  {
#line 232 "sudoku.m"
                    MR_String sudoku__V_37_37 = (MR_String) "Invalid puzzle size\n";
#line 232 "sudoku.m"
                    MR_Integer sudoku__V_39_39;

#line 232 "sudoku.m"
                    {
#line 232 "sudoku.m"
                      mercury__io__write_string_3_p_0(sudoku__V_37_37);
                    }
#line 233 "sudoku.m"
                    sudoku__V_39_39 = (MR_Integer) 1;
#line 233 "sudoku.m"
                    {
#line 233 "sudoku.m"
                      mercury__io__set_exit_status_3_p_0(sudoku__V_39_39);
                    }
#line 232 "sudoku.m"
                  }
#line 232 "sudoku.m"
              }
#line 180 "sudoku.m"
            {
#line 180 "sudoku.m"
              mercury__io__seen_2_p_0();
#line 180 "sudoku.m"
              return;
            }
#line 178 "sudoku.m"
          }
#line 181 "sudoku.m"
        else
#line 181 "sudoku.m"
          {
#line 181 "sudoku.m"
            MR_String sudoku__V_13_13 = (MR_String) "Could not open puzzle file\n";
#line 181 "sudoku.m"
            MR_Integer sudoku__V_15_15;

#line 182 "sudoku.m"
            {
#line 182 "sudoku.m"
              mercury__io__write_string_3_p_0(sudoku__V_13_13);
            }
#line 183 "sudoku.m"
            sudoku__V_15_15 = (MR_Integer) 1;
#line 183 "sudoku.m"
            {
#line 183 "sudoku.m"
              mercury__io__set_exit_status_3_p_0(sudoku__V_15_15);
#line 183 "sudoku.m"
              return;
            }
#line 181 "sudoku.m"
          }
#line 177 "sudoku.m"
      }
#line 185 "sudoku.m"
    else
#line 185 "sudoku.m"
      {
#line 185 "sudoku.m"
        MR_Integer sudoku__V_20_20;
#line 185 "sudoku.m"
        MR_String sudoku__V_48_48 = (MR_String) "Usage:  sudoku filname\n";
#line 185 "sudoku.m"
        MR_String sudoku__V_50_50;
#line 185 "sudoku.m"
        MR_String sudoku__V_52_52;
#line 185 "sudoku.m"
        MR_String sudoku__V_54_54;
#line 185 "sudoku.m"
        MR_String sudoku__V_56_56;
#line 185 "sudoku.m"
        MR_String sudoku__V_58_58;
#line 185 "sudoku.m"
        MR_String sudoku__V_60_60;
#line 185 "sudoku.m"
        MR_String sudoku__V_62_62;
#line 185 "sudoku.m"
        MR_String sudoku__V_64_64;

#line 195 "sudoku.m"
        {
#line 195 "sudoku.m"
          mercury__io__write_string_3_p_0(sudoku__V_48_48);
        }
#line 196 "sudoku.m"
        sudoku__V_50_50 = (MR_String) "  where filname is the name of a file containing a sudoku puzzle\n";
#line 196 "sudoku.m"
        {
#line 196 "sudoku.m"
          mercury__io__write_string_3_p_0(sudoku__V_50_50);
        }
#line 198 "sudoku.m"
        sudoku__V_52_52 = (MR_String) "  written as a file of 4, 9, 16, or 25 lines, each with that same\n";
#line 198 "sudoku.m"
        {
#line 198 "sudoku.m"
          mercury__io__write_string_3_p_0(sudoku__V_52_52);
        }
#line 200 "sudoku.m"
        sudoku__V_54_54 = (MR_String) "  number of characters.  All characters on each line must be either\n";
#line 200 "sudoku.m"
        {
#line 200 "sudoku.m"
          mercury__io__write_string_3_p_0(sudoku__V_54_54);
        }
#line 202 "sudoku.m"
        sudoku__V_56_56 = (MR_String) "  a space (for squares to be solved for) or a digit (except 0) or a\n";
#line 202 "sudoku.m"
        {
#line 202 "sudoku.m"
          mercury__io__write_string_3_p_0(sudoku__V_56_56);
        }
#line 204 "sudoku.m"
        sudoku__V_58_58 = (MR_String) "  letter.  A solved puzzle is the same, except that all spaces have\n";
#line 204 "sudoku.m"
        {
#line 204 "sudoku.m"
          mercury__io__write_string_3_p_0(sudoku__V_58_58);
        }
#line 206 "sudoku.m"
        sudoku__V_60_60 = (MR_String) "  been filled in with letters and digits, and each digit or letter\n";
#line 206 "sudoku.m"
        {
#line 206 "sudoku.m"
          mercury__io__write_string_3_p_0(sudoku__V_60_60);
        }
#line 208 "sudoku.m"
        sudoku__V_62_62 = (MR_String) "  between 1 and the width of the puzzle (where \'a\' is taken for 10,\n";
#line 208 "sudoku.m"
        {
#line 208 "sudoku.m"
          mercury__io__write_string_3_p_0(sudoku__V_62_62);
        }
#line 210 "sudoku.m"
        sudoku__V_64_64 = (MR_String) "  and so on) appears exactly once in each row, column, and box.\n";
#line 210 "sudoku.m"
        {
#line 210 "sudoku.m"
          mercury__io__write_string_3_p_0(sudoku__V_64_64);
        }
#line 186 "sudoku.m"
        sudoku__V_20_20 = (MR_Integer) 1;
#line 186 "sudoku.m"
        {
#line 186 "sudoku.m"
          mercury__io__set_exit_status_3_p_0(sudoku__V_20_20);
#line 186 "sudoku.m"
          return;
        }
#line 185 "sudoku.m"
      }
#line 174 "sudoku.m"
  }
#line 9 "sudoku.m"
}

void mercury__sudoku__init(void)
{
}

void mercury__sudoku__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&sudoku__sudoku__type_ctor_info_cell_0);
}

void mercury__sudoku__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module sudoku. */

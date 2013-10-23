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
#include "grouping.mih"
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



#line 168 "sudoku.m"
struct sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0_s {
#line 168 "sudoku.m"
  MR_Word * sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__UpdatedPuzzle_6;
#line 168 "sudoku.m"
  MR_Cont sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__cont;
#line 168 "sudoku.m"
  void * sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__cont_env_ptr;
#line 179 "sudoku.m"
  MR_bool sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded;
#line 189 "sudoku.m"
  MR_Word sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__TypeInfo_23_23;
#line 189 "sudoku.m"
  MR_Word sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__V_22_22;
#line 168 "sudoku.m"
};

#line 9 "sudoku.m"
struct sudoku__main_2_p_0_env_0_s {
#line 15 "sudoku.m"
  MR_bool sudoku__main_2_p_0_env_0__succeeded;
#line 19 "sudoku.m"
  MR_Word sudoku__main_2_p_0_env_0__Puzzle_25;
#line 71 "sudoku.m"
  MR_Word sudoku__main_2_p_0_env_0__OutputPuzzle_28;
#line 69 "sudoku.m"
  jmp_buf sudoku__main_2_p_0_env_0__commit_0;
#line 9 "sudoku.m"
};


#line 95 "Mercury/cs/sudoku.c"
static const MR_PseudoTypeInfo sudoku__sudoku__field_types_cell_0_0[2];

#line 98 "Mercury/cs/sudoku.c"
static const MR_ConstString sudoku__sudoku__field_names_cell_0_0[2];

#line 101 "Mercury/cs/sudoku.c"
static const MR_DuFunctorDesc sudoku__sudoku__du_functor_desc_cell_0_0;

#line 104 "Mercury/cs/sudoku.c"
static const MR_DuFunctorDescPtr sudoku__sudoku__du_stag_ordered_cell_0_0[1];

#line 107 "Mercury/cs/sudoku.c"
static const MR_DuPtagLayout sudoku__sudoku__du_ptag_ordered_cell_0[1];

#line 110 "Mercury/cs/sudoku.c"
static const MR_DuFunctorDescPtr sudoku__sudoku__du_name_ordered_cell_0[1];

#line 113 "Mercury/cs/sudoku.c"
static const MR_Integer sudoku__sudoku__functor_number_map_cell_0[1];

#line 116 "Mercury/cs/sudoku.c"
static MR_bool MR_CALL 
sudoku____Unify____cell_0_0_10001(
#line 119 "Mercury/cs/sudoku.c"
  MR_Box sudoku__wrapper_arg_1,
#line 121 "Mercury/cs/sudoku.c"
  MR_Box sudoku__wrapper_arg_2);

#line 124 "Mercury/cs/sudoku.c"
static void MR_CALL 
sudoku____Compare____cell_0_0_10001(
#line 127 "Mercury/cs/sudoku.c"
  MR_Box * sudoku__wrapper_arg_1,
#line 129 "Mercury/cs/sudoku.c"
  MR_Box sudoku__wrapper_arg_2,
#line 131 "Mercury/cs/sudoku.c"
  MR_Box sudoku__wrapper_arg_3);

#line 121 "sudoku.m"
static void MR_CALL 
sudoku____Compare____cell_0_0(
#line 121 "sudoku.m"
  MR_Word * sudoku__HeadVar__1_1,
#line 121 "sudoku.m"
  MR_Word sudoku__HeadVar__2_2,
#line 121 "sudoku.m"
  MR_Word sudoku__HeadVar__3_3);

#line 121 "sudoku.m"
static MR_bool MR_CALL 
sudoku____Unify____cell_0_0(
#line 121 "sudoku.m"
  MR_Word sudoku__HeadVar__1_1,
#line 121 "sudoku.m"
  MR_Word sudoku__HeadVar__2_2);

#line 352 "sudoku.m"
static void MR_CALL 
sudoku__print_hbar_4_p_0(
#line 352 "sudoku.m"
  MR_Integer sudoku__Remaining_5,
#line 352 "sudoku.m"
  MR_Integer sudoku__Boxsize_6);

#line 330 "sudoku.m"
static void MR_CALL 
sudoku__print_row_6_p_0(
#line 330 "sudoku.m"
  MR_Word sudoku__STATE_VARIABLE_Puzzle_0_13,
#line 330 "sudoku.m"
  MR_Word * sudoku__STATE_VARIABLE_Puzzle_14,
#line 330 "sudoku.m"
  MR_Integer sudoku__Remaining_8,
#line 330 "sudoku.m"
  MR_Integer sudoku__Boxsize_9);

#line 317 "sudoku.m"
static void MR_CALL 
sudoku__print_chunk_7_p_0(
#line 317 "sudoku.m"
  MR_Word sudoku__STATE_VARIABLE_Puzzle_0_13,
#line 317 "sudoku.m"
  MR_Word * sudoku__STATE_VARIABLE_Puzzle_14,
#line 317 "sudoku.m"
  MR_Integer sudoku__Rowsleft_9,
#line 317 "sudoku.m"
  MR_Integer sudoku__Size_10,
#line 317 "sudoku.m"
  MR_Integer sudoku__Boxsize_11);

#line 302 "sudoku.m"
static void MR_CALL 
sudoku__print_puzzle_5_p_0(
#line 302 "sudoku.m"
  MR_Word sudoku__Puzzle_6,
#line 302 "sudoku.m"
  MR_Integer sudoku__Size_7,
#line 302 "sudoku.m"
  MR_Integer sudoku__Boxsize_8);

#line 189 "sudoku.m"
static void MR_CALL 
sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_1(
#line 189 "sudoku.m"
  void * sudoku__env_ptr_arg);

#line 168 "sudoku.m"
static void MR_CALL 
sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0(
#line 168 "sudoku.m"
  MR_Integer sudoku__CellIndex_4,
#line 168 "sudoku.m"
  MR_Word sudoku__Puzzle_5,
#line 168 "sudoku.m"
  MR_Word * sudoku__UpdatedPuzzle_6,
#line 168 "sudoku.m"
  MR_Cont sudoku__cont,
#line 168 "sudoku.m"
  void * sudoku__cont_env_ptr);

#line 96 "sudoku.m"
static void MR_CALL 
sudoku__load_puzzle_3_p_0(
#line 96 "sudoku.m"
  MR_Word * sudoku__Puzzle_4);

#line 69 "sudoku.m"
static void MR_CALL 
main_2_p_0_1(
#line 69 "sudoku.m"
  void * sudoku__env_ptr_arg);

#line 69 "sudoku.m"
static void MR_CALL 
main_2_p_0_2(
#line 69 "sudoku.m"
  void * sudoku__env_ptr_arg);


static /* final */ const MR_Box sudoku_scalar_common_1[10][2];




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



#line 308 "Mercury/cs/sudoku.c"
static const MR_PseudoTypeInfo sudoku__sudoku__field_types_cell_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 314 "Mercury/cs/sudoku.c"
static const MR_ConstString sudoku__sudoku__field_names_cell_0_0[2] = {
  (MR_String) "index",
  (MR_String) "value"
};

#line 320 "Mercury/cs/sudoku.c"
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

#line 335 "Mercury/cs/sudoku.c"
static const MR_DuFunctorDescPtr sudoku__sudoku__du_stag_ordered_cell_0_0[1] = {
  &sudoku__sudoku__du_functor_desc_cell_0_0
};

#line 340 "Mercury/cs/sudoku.c"
static const MR_DuPtagLayout sudoku__sudoku__du_ptag_ordered_cell_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    sudoku__sudoku__du_stag_ordered_cell_0_0
  }
};

#line 349 "Mercury/cs/sudoku.c"
static const MR_DuFunctorDescPtr sudoku__sudoku__du_name_ordered_cell_0[1] = {
  &sudoku__sudoku__du_functor_desc_cell_0_0
};

#line 354 "Mercury/cs/sudoku.c"
static const MR_Integer sudoku__sudoku__functor_number_map_cell_0[1] = {
  (MR_Integer) 0
};

#line 359 "Mercury/cs/sudoku.c"
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

#line 380 "Mercury/cs/sudoku.c"
static MR_bool MR_CALL 
sudoku____Unify____cell_0_0_10001(
#line 383 "Mercury/cs/sudoku.c"
  MR_Box sudoku__wrapper_arg_1,
#line 385 "Mercury/cs/sudoku.c"
  MR_Box sudoku__wrapper_arg_2)
#line 387 "Mercury/cs/sudoku.c"
{
#line 389 "Mercury/cs/sudoku.c"
  {
#line 391 "Mercury/cs/sudoku.c"
    MR_bool sudoku__succeeded;

#line 394 "Mercury/cs/sudoku.c"
    {
#line 396 "Mercury/cs/sudoku.c"
      sudoku__succeeded = sudoku____Unify____cell_0_0(((MR_Word) sudoku__wrapper_arg_1), ((MR_Word) sudoku__wrapper_arg_2));
    }
#line 399 "Mercury/cs/sudoku.c"
    return sudoku__succeeded;
#line 401 "Mercury/cs/sudoku.c"
  }
#line 403 "Mercury/cs/sudoku.c"
}

#line 406 "Mercury/cs/sudoku.c"
static void MR_CALL 
sudoku____Compare____cell_0_0_10001(
#line 409 "Mercury/cs/sudoku.c"
  MR_Box * sudoku__wrapper_arg_1,
#line 411 "Mercury/cs/sudoku.c"
  MR_Box sudoku__wrapper_arg_2,
#line 413 "Mercury/cs/sudoku.c"
  MR_Box sudoku__wrapper_arg_3)
#line 415 "Mercury/cs/sudoku.c"
{
#line 417 "Mercury/cs/sudoku.c"
  {
#line 419 "Mercury/cs/sudoku.c"
    MR_Word sudoku__conv0_HeadVar__1_1;

#line 422 "Mercury/cs/sudoku.c"
    {
#line 424 "Mercury/cs/sudoku.c"
      sudoku____Compare____cell_0_0(&sudoku__conv0_HeadVar__1_1, ((MR_Word) sudoku__wrapper_arg_2), ((MR_Word) sudoku__wrapper_arg_3));
    }
#line 427 "Mercury/cs/sudoku.c"
    *sudoku__wrapper_arg_1 = ((MR_Box) (sudoku__conv0_HeadVar__1_1));
#line 429 "Mercury/cs/sudoku.c"
  }
#line 431 "Mercury/cs/sudoku.c"
}

#line 121 "sudoku.m"
static void MR_CALL 
sudoku____Compare____cell_0_0(
#line 121 "sudoku.m"
  MR_Word * sudoku__HeadVar__1_1,
#line 121 "sudoku.m"
  MR_Word sudoku__HeadVar__2_2,
#line 121 "sudoku.m"
  MR_Word sudoku__HeadVar__3_3)
#line 121 "sudoku.m"
{
#line 121 "sudoku.m"
  {
#line 121 "sudoku.m"
    MR_bool sudoku__succeeded;
#line 121 "sudoku.m"
    MR_Integer sudoku__CastX_9 = (MR_Integer) sudoku__HeadVar__2_2;
#line 121 "sudoku.m"
    MR_Integer sudoku__CastY_10 = (MR_Integer) sudoku__HeadVar__3_3;

#line 121 "sudoku.m"
    sudoku__succeeded = (sudoku__CastX_9 == sudoku__CastY_10);
#line 121 "sudoku.m"
    if (sudoku__succeeded)
#line 458 "Mercury/cs/sudoku.c"
      *sudoku__HeadVar__1_1 = (MR_Integer) 0;
#line 121 "sudoku.m"
    else
#line 121 "sudoku.m"
      {
#line 121 "sudoku.m"
        MR_Integer sudoku__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), sudoku__HeadVar__2_2, (MR_Integer) 0)));
#line 121 "sudoku.m"
        MR_Integer sudoku__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), sudoku__HeadVar__2_2, (MR_Integer) 1)));
#line 121 "sudoku.m"
        MR_Integer sudoku__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), sudoku__HeadVar__3_3, (MR_Integer) 0)));
#line 121 "sudoku.m"
        MR_Integer sudoku__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), sudoku__HeadVar__3_3, (MR_Integer) 1)));
#line 121 "sudoku.m"
        MR_Word sudoku__V_8_8;

#line 121 "sudoku.m"
        {
#line 121 "sudoku.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&sudoku__V_8_8, sudoku__V_4_4, sudoku__V_6_6);
        }
#line 480 "Mercury/cs/sudoku.c"
        sudoku__succeeded = (sudoku__V_8_8 == (MR_Integer) 0);
#line 121 "sudoku.m"
        sudoku__succeeded = !(sudoku__succeeded);
#line 121 "sudoku.m"
        if (sudoku__succeeded)
#line 121 "sudoku.m"
          *sudoku__HeadVar__1_1 = sudoku__V_8_8;
#line 121 "sudoku.m"
        else
#line 121 "sudoku.m"
          {
#line 121 "sudoku.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(sudoku__HeadVar__1_1, sudoku__V_5_5, sudoku__V_7_7);
#line 121 "sudoku.m"
            return;
          }
#line 121 "sudoku.m"
      }
#line 121 "sudoku.m"
  }
#line 121 "sudoku.m"
}

#line 121 "sudoku.m"
static MR_bool MR_CALL 
sudoku____Unify____cell_0_0(
#line 121 "sudoku.m"
  MR_Word sudoku__HeadVar__1_1,
#line 121 "sudoku.m"
  MR_Word sudoku__HeadVar__2_2)
#line 121 "sudoku.m"
{
#line 121 "sudoku.m"
  {
#line 121 "sudoku.m"
    MR_bool sudoku__succeeded;
#line 121 "sudoku.m"
    MR_Integer sudoku__CastX_7 = (MR_Integer) sudoku__HeadVar__1_1;
#line 121 "sudoku.m"
    MR_Integer sudoku__CastY_8 = (MR_Integer) sudoku__HeadVar__2_2;

#line 121 "sudoku.m"
    sudoku__succeeded = (sudoku__CastX_7 == sudoku__CastY_8);
#line 121 "sudoku.m"
    if (sudoku__succeeded)
#line 121 "sudoku.m"
      sudoku__succeeded = MR_TRUE;
#line 121 "sudoku.m"
    else
#line 121 "sudoku.m"
      {
#line 121 "sudoku.m"
        MR_Integer sudoku__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), sudoku__HeadVar__1_1, (MR_Integer) 0)));
#line 121 "sudoku.m"
        MR_Integer sudoku__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), sudoku__HeadVar__1_1, (MR_Integer) 1)));
#line 121 "sudoku.m"
        MR_Integer sudoku__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), sudoku__HeadVar__2_2, (MR_Integer) 0)));
#line 121 "sudoku.m"
        MR_Integer sudoku__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), sudoku__HeadVar__2_2, (MR_Integer) 1)));

#line 541 "Mercury/cs/sudoku.c"
        sudoku__succeeded = (sudoku__V_3_3 == sudoku__V_5_5);
#line 121 "sudoku.m"
        if (sudoku__succeeded)
#line 545 "Mercury/cs/sudoku.c"
          sudoku__succeeded = (sudoku__V_4_4 == sudoku__V_6_6);
#line 121 "sudoku.m"
      }
#line 121 "sudoku.m"
    return sudoku__succeeded;
#line 121 "sudoku.m"
  }
#line 121 "sudoku.m"
}

#line 352 "sudoku.m"
static void MR_CALL 
sudoku__print_hbar_4_p_0(
#line 352 "sudoku.m"
  MR_Integer sudoku__Remaining_5,
#line 352 "sudoku.m"
  MR_Integer sudoku__Boxsize_6)
#line 352 "sudoku.m"
{
#line 358 "sudoku.m"
  while (MR_TRUE)
#line 358 "sudoku.m"
    {
#line 358 "sudoku.m"
      /* tailcall optimized into a loop */
#line 358 "sudoku.m"
      {
#line 358 "sudoku.m"
        MR_bool sudoku__succeeded;
#line 359 "sudoku.m"
        MR_Integer sudoku__V_10_10 = (MR_Integer) 0;
#line 359 "sudoku.m"
        MR_Integer sudoku__V_19_19;

#line 359 "sudoku.m"
        {
#line 359 "sudoku.m"
          sudoku__V_19_19 = mercury__int__mod_2_f_0(sudoku__Remaining_5, sudoku__Boxsize_6);
        }
#line 359 "sudoku.m"
        sudoku__succeeded = (sudoku__V_10_10 == sudoku__V_19_19);
#line 361 "sudoku.m"
        if (sudoku__succeeded)
#line 360 "sudoku.m"
          {
#line 360 "sudoku.m"
            MR_Char sudoku__V_11_11 = (MR_Char) 43;

#line 360 "sudoku.m"
            {
#line 360 "sudoku.m"
              mercury__io__write_char_3_p_0(sudoku__V_11_11);
            }
#line 360 "sudoku.m"
          }
#line 361 "sudoku.m"
        else
#line 360 "sudoku.m"
          {
#line 360 "sudoku.m"
          }
#line 363 "sudoku.m"
        sudoku__succeeded = (sudoku__Remaining_5 == (MR_Integer) 0);
#line 365 "sudoku.m"
        if (sudoku__succeeded)
#line 364 "sudoku.m"
          {
#line 364 "sudoku.m"
            mercury__io__nl_2_p_0();
#line 364 "sudoku.m"
            return;
          }
#line 365 "sudoku.m"
        else
#line 365 "sudoku.m"
          {
#line 365 "sudoku.m"
            MR_Char sudoku__V_14_14 = (MR_Char) 45;
#line 365 "sudoku.m"
            MR_Integer sudoku__V_16_16;
#line 365 "sudoku.m"
            MR_Integer sudoku__V_18_18;

#line 365 "sudoku.m"
            {
#line 365 "sudoku.m"
              mercury__io__write_char_3_p_0(sudoku__V_14_14);
            }
#line 366 "sudoku.m"
            sudoku__V_18_18 = (MR_Integer) 1;
#line 366 "sudoku.m"
            sudoku__V_16_16 = (sudoku__Remaining_5 - sudoku__V_18_18);
#line 366 "sudoku.m"
            /* direct tailcall eliminated */
#line 366 "sudoku.m"
            {
#line 366 "sudoku.m"
              MR_Integer sudoku__Remaining__tmp_copy_5 = sudoku__V_16_16;

#line 366 "sudoku.m"
              sudoku__Remaining_5 = sudoku__Remaining__tmp_copy_5;
#line 366 "sudoku.m"
            }
#line 366 "sudoku.m"
            continue;
#line 365 "sudoku.m"
          }
#line 358 "sudoku.m"
      }
#line 358 "sudoku.m"
      break;
#line 358 "sudoku.m"
    }
#line 352 "sudoku.m"
}

#line 330 "sudoku.m"
static void MR_CALL 
sudoku__print_row_6_p_0(
#line 330 "sudoku.m"
  MR_Word sudoku__STATE_VARIABLE_Puzzle_0_13,
#line 330 "sudoku.m"
  MR_Word * sudoku__STATE_VARIABLE_Puzzle_14,
#line 330 "sudoku.m"
  MR_Integer sudoku__Remaining_8,
#line 330 "sudoku.m"
  MR_Integer sudoku__Boxsize_9)
#line 330 "sudoku.m"
{
#line 335 "sudoku.m"
  while (MR_TRUE)
#line 335 "sudoku.m"
    {
#line 335 "sudoku.m"
      /* tailcall optimized into a loop */
#line 335 "sudoku.m"
      {
#line 335 "sudoku.m"
        MR_bool sudoku__succeeded;
#line 336 "sudoku.m"
        MR_Integer sudoku__V_17_17 = (MR_Integer) 0;
#line 336 "sudoku.m"
        MR_Integer sudoku__V_30_30;

#line 336 "sudoku.m"
        {
#line 336 "sudoku.m"
          sudoku__V_30_30 = mercury__int__mod_2_f_0(sudoku__Remaining_8, sudoku__Boxsize_9);
        }
#line 336 "sudoku.m"
        sudoku__succeeded = (sudoku__V_17_17 == sudoku__V_30_30);
#line 338 "sudoku.m"
        if (sudoku__succeeded)
#line 337 "sudoku.m"
          {
#line 337 "sudoku.m"
            MR_Char sudoku__V_18_18 = (MR_Char) 124;

#line 337 "sudoku.m"
            {
#line 337 "sudoku.m"
              mercury__io__write_char_3_p_0(sudoku__V_18_18);
            }
#line 337 "sudoku.m"
          }
#line 338 "sudoku.m"
        else
#line 337 "sudoku.m"
          {
#line 337 "sudoku.m"
          }
#line 340 "sudoku.m"
        sudoku__succeeded = (sudoku__Remaining_8 == (MR_Integer) 0);
#line 342 "sudoku.m"
        if (sudoku__succeeded)
#line 341 "sudoku.m"
          {
#line 341 "sudoku.m"
            {
#line 341 "sudoku.m"
              mercury__io__nl_2_p_0();
            }
#line 341 "sudoku.m"
            *sudoku__STATE_VARIABLE_Puzzle_14 = sudoku__STATE_VARIABLE_Puzzle_0_13;
#line 341 "sudoku.m"
          }
#line 342 "sudoku.m"
        else
#line 348 "sudoku.m"
          {
#line 348 "sudoku.m"
            MR_Integer sudoku__Int_11;
#line 348 "sudoku.m"
            MR_Word sudoku__STATE_VARIABLE_Puzzle_21_21;

#line 342 "sudoku.m"
            sudoku__succeeded = ((MR_tag((MR_Word) sudoku__STATE_VARIABLE_Puzzle_0_13)) == (MR_mktag((MR_Integer) 1)));
#line 342 "sudoku.m"
            if (sudoku__succeeded)
#line 342 "sudoku.m"
              {
#line 342 "sudoku.m"
                sudoku__Int_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), sudoku__STATE_VARIABLE_Puzzle_0_13, (MR_Integer) 0)));
#line 342 "sudoku.m"
                sudoku__STATE_VARIABLE_Puzzle_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), sudoku__STATE_VARIABLE_Puzzle_0_13, (MR_Integer) 1)));
#line 346 "sudoku.m"
                {
#line 346 "sudoku.m"
                  MR_Integer sudoku__V_26_26;
#line 346 "sudoku.m"
                  MR_Integer sudoku__V_28_28;
#line 345 "sudoku.m"
                  MR_Char sudoku__Digit_12;

#line 343 "sudoku.m"
                  {
#line 343 "sudoku.m"
                    sudoku__succeeded = mercury__char__int_to_digit_2_p_0(sudoku__Int_11, &sudoku__Digit_12);
                  }
#line 345 "sudoku.m"
                  if (sudoku__succeeded)
#line 344 "sudoku.m"
                    {
#line 344 "sudoku.m"
                      mercury__io__write_char_3_p_0(sudoku__Digit_12);
                    }
#line 345 "sudoku.m"
                  else
#line 345 "sudoku.m"
                    {
#line 345 "sudoku.m"
                      MR_Char sudoku__V_23_23 = (MR_Char) 46;

#line 345 "sudoku.m"
                      {
#line 345 "sudoku.m"
                        mercury__io__write_char_3_p_0(sudoku__V_23_23);
                      }
#line 345 "sudoku.m"
                    }
#line 347 "sudoku.m"
                  sudoku__V_28_28 = (MR_Integer) 1;
#line 347 "sudoku.m"
                  sudoku__V_26_26 = (sudoku__Remaining_8 - sudoku__V_28_28);
#line 347 "sudoku.m"
                  /* direct tailcall eliminated */
#line 347 "sudoku.m"
                  {
#line 347 "sudoku.m"
                    MR_Word sudoku__STATE_VARIABLE_Puzzle_0__tmp_copy_13 = sudoku__STATE_VARIABLE_Puzzle_21_21;
#line 347 "sudoku.m"
                    MR_Integer sudoku__Remaining__tmp_copy_8 = sudoku__V_26_26;

#line 347 "sudoku.m"
                    sudoku__Remaining_8 = sudoku__Remaining__tmp_copy_8;
#line 347 "sudoku.m"
                    sudoku__STATE_VARIABLE_Puzzle_0_13 = sudoku__STATE_VARIABLE_Puzzle_0__tmp_copy_13;
#line 347 "sudoku.m"
                  }
#line 347 "sudoku.m"
                  continue;
#line 346 "sudoku.m"
                }
#line 342 "sudoku.m"
              }
#line 342 "sudoku.m"
            else
#line 348 "sudoku.m"
              {
#line 348 "sudoku.m"
                {
#line 348 "sudoku.m"
                  mercury__io__nl_2_p_0();
                }
#line 348 "sudoku.m"
                *sudoku__STATE_VARIABLE_Puzzle_14 = sudoku__STATE_VARIABLE_Puzzle_0_13;
#line 348 "sudoku.m"
              }
#line 348 "sudoku.m"
          }
#line 335 "sudoku.m"
      }
#line 335 "sudoku.m"
      break;
#line 335 "sudoku.m"
    }
#line 330 "sudoku.m"
}

#line 317 "sudoku.m"
static void MR_CALL 
sudoku__print_chunk_7_p_0(
#line 317 "sudoku.m"
  MR_Word sudoku__STATE_VARIABLE_Puzzle_0_13,
#line 317 "sudoku.m"
  MR_Word * sudoku__STATE_VARIABLE_Puzzle_14,
#line 317 "sudoku.m"
  MR_Integer sudoku__Rowsleft_9,
#line 317 "sudoku.m"
  MR_Integer sudoku__Size_10,
#line 317 "sudoku.m"
  MR_Integer sudoku__Boxsize_11)
#line 317 "sudoku.m"
{
#line 325 "sudoku.m"
  while (MR_TRUE)
#line 325 "sudoku.m"
    {
#line 325 "sudoku.m"
      /* tailcall optimized into a loop */
#line 325 "sudoku.m"
      {
#line 325 "sudoku.m"
        MR_bool sudoku__succeeded = (sudoku__Rowsleft_9 == (MR_Integer) 0);

#line 325 "sudoku.m"
        if (sudoku__succeeded)
#line 324 "sudoku.m"
          *sudoku__STATE_VARIABLE_Puzzle_14 = sudoku__STATE_VARIABLE_Puzzle_0_13;
#line 325 "sudoku.m"
        else
#line 325 "sudoku.m"
          {
#line 325 "sudoku.m"
            MR_Word sudoku__STATE_VARIABLE_Puzzle_17_17;
#line 325 "sudoku.m"
            MR_Integer sudoku__V_20_20;
#line 325 "sudoku.m"
            MR_Integer sudoku__V_22_22;

#line 325 "sudoku.m"
            {
#line 325 "sudoku.m"
              sudoku__print_row_6_p_0(sudoku__STATE_VARIABLE_Puzzle_0_13, &sudoku__STATE_VARIABLE_Puzzle_17_17, sudoku__Size_10, sudoku__Boxsize_11);
            }
#line 326 "sudoku.m"
            sudoku__V_22_22 = (MR_Integer) 1;
#line 326 "sudoku.m"
            sudoku__V_20_20 = (sudoku__Rowsleft_9 - sudoku__V_22_22);
#line 326 "sudoku.m"
            /* direct tailcall eliminated */
#line 326 "sudoku.m"
            {
#line 326 "sudoku.m"
              MR_Word sudoku__STATE_VARIABLE_Puzzle_0__tmp_copy_13 = sudoku__STATE_VARIABLE_Puzzle_17_17;
#line 326 "sudoku.m"
              MR_Integer sudoku__Rowsleft__tmp_copy_9 = sudoku__V_20_20;

#line 326 "sudoku.m"
              sudoku__Rowsleft_9 = sudoku__Rowsleft__tmp_copy_9;
#line 326 "sudoku.m"
              sudoku__STATE_VARIABLE_Puzzle_0_13 = sudoku__STATE_VARIABLE_Puzzle_0__tmp_copy_13;
#line 326 "sudoku.m"
            }
#line 326 "sudoku.m"
            continue;
#line 325 "sudoku.m"
          }
#line 325 "sudoku.m"
      }
#line 325 "sudoku.m"
      break;
#line 325 "sudoku.m"
    }
#line 317 "sudoku.m"
}

#line 302 "sudoku.m"
static void MR_CALL 
sudoku__print_puzzle_5_p_0(
#line 302 "sudoku.m"
  MR_Word sudoku__Puzzle_6,
#line 302 "sudoku.m"
  MR_Integer sudoku__Size_7,
#line 302 "sudoku.m"
  MR_Integer sudoku__Boxsize_8)
#line 302 "sudoku.m"
{
#line 308 "sudoku.m"
  while (MR_TRUE)
#line 308 "sudoku.m"
    {
#line 308 "sudoku.m"
      /* tailcall optimized into a loop */
#line 308 "sudoku.m"
      {
#line 308 "sudoku.m"
        MR_bool sudoku__succeeded;

#line 309 "sudoku.m"
        {
#line 309 "sudoku.m"
          sudoku__print_hbar_4_p_0(sudoku__Size_7, sudoku__Boxsize_8);
        }
#line 310 "sudoku.m"
        sudoku__succeeded = (sudoku__Puzzle_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 312 "sudoku.m"
        if (sudoku__succeeded)
#line 310 "sudoku.m"
          {
#line 310 "sudoku.m"
          }
#line 312 "sudoku.m"
        else
#line 312 "sudoku.m"
          {
#line 312 "sudoku.m"
            MR_Word sudoku__Puzzle1_10;

#line 312 "sudoku.m"
            {
#line 312 "sudoku.m"
              sudoku__print_chunk_7_p_0(sudoku__Puzzle_6, &sudoku__Puzzle1_10, sudoku__Boxsize_8, sudoku__Size_7, sudoku__Boxsize_8);
            }
#line 313 "sudoku.m"
            /* direct tailcall eliminated */
#line 313 "sudoku.m"
            {
#line 313 "sudoku.m"
              MR_Word sudoku__Puzzle__tmp_copy_6 = sudoku__Puzzle1_10;

#line 313 "sudoku.m"
              sudoku__Puzzle_6 = sudoku__Puzzle__tmp_copy_6;
#line 313 "sudoku.m"
            }
#line 313 "sudoku.m"
            continue;
#line 312 "sudoku.m"
          }
#line 308 "sudoku.m"
      }
#line 308 "sudoku.m"
      break;
#line 308 "sudoku.m"
    }
#line 302 "sudoku.m"
}

#line 189 "sudoku.m"
static void MR_CALL 
sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_1(
#line 189 "sudoku.m"
  void * sudoku__env_ptr_arg)
#line 189 "sudoku.m"
{
#line 189 "sudoku.m"
  {
#line 189 "sudoku.m"
    struct sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0_s * sudoku__env_ptr = (struct sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0_s *) sudoku__env_ptr_arg;

#line 996 "Mercury/cs/sudoku.c"
    (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__TypeInfo_23_23 = (MR_Word) &sudoku_scalar_common_1[0];
#line 191 "sudoku.m"
    {
#line 191 "sudoku.m"
      (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__TypeInfo_23_23, ((MR_Box) (*((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__UpdatedPuzzle_6))), ((MR_Box) ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__V_22_22)));
    }
#line 191 "sudoku.m"
    if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 191 "sudoku.m"
      {
#line 191 "sudoku.m"
        ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__cont)((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__cont_env_ptr);
#line 191 "sudoku.m"
        return;
      }
#line 189 "sudoku.m"
  }
#line 189 "sudoku.m"
}

#line 168 "sudoku.m"
static void MR_CALL 
sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0(
#line 168 "sudoku.m"
  MR_Integer sudoku__CellIndex_4,
#line 168 "sudoku.m"
  MR_Word sudoku__Puzzle_5,
#line 168 "sudoku.m"
  MR_Word * sudoku__UpdatedPuzzle_6,
#line 168 "sudoku.m"
  MR_Cont sudoku__cont,
#line 168 "sudoku.m"
  void * sudoku__cont_env_ptr)
#line 168 "sudoku.m"
{
#line 168 "sudoku.m"
  {
#line 168 "sudoku.m"
    struct sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0_s sudoku__env;
#line 168 "sudoku.m"
    struct sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0_s * sudoku__env_ptr = &sudoku__env;

#line 168 "sudoku.m"
    (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__UpdatedPuzzle_6 = sudoku__UpdatedPuzzle_6;
#line 168 "sudoku.m"
    (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__cont = sudoku__cont;
#line 168 "sudoku.m"
    (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__cont_env_ptr = sudoku__cont_env_ptr;
#line 179 "sudoku.m"
    {
#line 176 "sudoku.m"
      MR_Word sudoku__TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 176 "sudoku.m"
      MR_Integer sudoku__PuzzleLen_7;

#line 176 "sudoku.m"
      {
#line 176 "sudoku.m"
        mercury__list__length_2_p_0(sudoku__TypeCtorInfo_19_19, sudoku__Puzzle_5, &sudoku__PuzzleLen_7);
      }
#line 177 "sudoku.m"
      (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = (sudoku__CellIndex_4 >= sudoku__PuzzleLen_7);
#line 179 "sudoku.m"
      if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 178 "sudoku.m"
        {
#line 178 "sudoku.m"
          *((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__UpdatedPuzzle_6) = sudoku__Puzzle_5;
#line 178 "sudoku.m"
          {
#line 178 "sudoku.m"
            ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__cont)((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__cont_env_ptr);
#line 178 "sudoku.m"
            return;
          }
#line 178 "sudoku.m"
        }
#line 179 "sudoku.m"
      else
#line 186 "sudoku.m"
        {
#line 186 "sudoku.m"
          MR_Word sudoku__PossibleValues_8;
#line 180 "sudoku.m"
          MR_Word sudoku__TypeCtorInfo_20_20;
#line 180 "sudoku.m"
          MR_Word sudoku__TypeCtorInfo_14_34;
#line 180 "sudoku.m"
          MR_Word sudoku__TypeCtorInfo_42_71 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 180 "sudoku.m"
          MR_Word sudoku__TypeInfo_43_72;
#line 180 "sudoku.m"
          MR_Word sudoku__TypeCtorInfo_24_94;
#line 180 "sudoku.m"
          MR_Integer sudoku__Len_9;
#line 180 "sudoku.m"
          MR_Word sudoku__RowValues_27;
#line 180 "sudoku.m"
          MR_Word sudoku__CollumValues_28;
#line 180 "sudoku.m"
          MR_Word sudoku__CountryValues_29;
#line 180 "sudoku.m"
          MR_Word sudoku__TempList_30;
#line 180 "sudoku.m"
          MR_Word sudoku__TempList2_31;
#line 180 "sudoku.m"
          MR_Word sudoku__RowList_40;
#line 180 "sudoku.m"
          MR_Word sudoku__CollumList_41;
#line 180 "sudoku.m"
          MR_Word sudoku__CountryList_42;
#line 180 "sudoku.m"
          MR_Integer sudoku__RowIndex_43;
#line 180 "sudoku.m"
          MR_Integer sudoku__CollumIndex_44;
#line 180 "sudoku.m"
          MR_Integer sudoku__CountryIndex_45;
#line 180 "sudoku.m"
          MR_Word sudoku__TempRow_46;
#line 180 "sudoku.m"
          MR_Word sudoku__TempCollum_47;
#line 180 "sudoku.m"
          MR_Word sudoku__TempCountry_48;
#line 180 "sudoku.m"
          MR_Integer sudoku__V_49_49 = (MR_Integer) 0;
#line 180 "sudoku.m"
          MR_Integer sudoku__V_50_50 = (MR_Integer) 9;
#line 180 "sudoku.m"
          MR_Integer sudoku__V_51_51 = (MR_Integer) 9;
#line 180 "sudoku.m"
          MR_Integer sudoku__V_52_52;
#line 180 "sudoku.m"
          MR_Integer sudoku__V_53_53;
#line 180 "sudoku.m"
          MR_Integer sudoku__V_54_54;
#line 180 "sudoku.m"
          MR_Integer sudoku__V_55_55;
#line 180 "sudoku.m"
          MR_Integer sudoku__V_56_56;
#line 180 "sudoku.m"
          MR_Integer sudoku__V_57_57;
#line 180 "sudoku.m"
          MR_Integer sudoku__V_58_58;
#line 180 "sudoku.m"
          MR_Integer sudoku__V_59_59;
#line 180 "sudoku.m"
          MR_Integer sudoku__V_68_68;
#line 180 "sudoku.m"
          MR_Integer sudoku__V_69_69;
#line 180 "sudoku.m"
          MR_Integer sudoku__V_70_70;
#line 180 "sudoku.m"
          MR_Word sudoku__FullList_75;
#line 180 "sudoku.m"
          MR_Integer sudoku__V_13_13 = (MR_Integer) 0;
#line 245 "sudoku.m"
          MR_Integer sudoku__V_60_60;
#line 289 "sudoku.m"
          MR_Box sudoku__conv0_TempRow_46;
#line 290 "sudoku.m"
          MR_Box sudoku__conv1_TempCollum_47;
#line 291 "sudoku.m"
          MR_Box sudoku__conv2_TempCountry_48;

#line 237 "sudoku.m"
          {
#line 237 "sudoku.m"
            grouping__group_list_5_p_0(sudoku__TypeCtorInfo_42_71, sudoku__V_49_49, sudoku__V_50_50, sudoku__V_51_51, sudoku__Puzzle_5, &sudoku__RowList_40);
          }
#line 238 "sudoku.m"
          sudoku__V_52_52 = (MR_Integer) 8;
#line 238 "sudoku.m"
          sudoku__V_53_53 = (MR_Integer) 9;
#line 238 "sudoku.m"
          sudoku__V_54_54 = (MR_Integer) 9;
#line 238 "sudoku.m"
          {
#line 238 "sudoku.m"
            grouping__group_list_5_p_0(sudoku__TypeCtorInfo_42_71, sudoku__V_52_52, sudoku__V_53_53, sudoku__V_54_54, sudoku__Puzzle_5, &sudoku__CollumList_41);
          }
#line 239 "sudoku.m"
          sudoku__V_55_55 = (MR_Integer) 0;
#line 239 "sudoku.m"
          sudoku__V_56_56 = (MR_Integer) 3;
#line 239 "sudoku.m"
          sudoku__V_57_57 = (MR_Integer) 3;
#line 239 "sudoku.m"
          {
#line 239 "sudoku.m"
            grouping__group_list_5_p_0(sudoku__TypeCtorInfo_42_71, sudoku__V_55_55, sudoku__V_56_56, sudoku__V_57_57, sudoku__Puzzle_5, &sudoku__CountryList_42);
          }
#line 242 "sudoku.m"
          sudoku__V_58_58 = (MR_Integer) 9;
#line 242 "sudoku.m"
          {
#line 242 "sudoku.m"
            sudoku__RowIndex_43 = mercury__int__div_2_f_0(sudoku__CellIndex_4, sudoku__V_58_58);
          }
#line 243 "sudoku.m"
          sudoku__V_59_59 = (MR_Integer) 9;
#line 243 "sudoku.m"
          {
#line 243 "sudoku.m"
            sudoku__CollumIndex_44 = mercury__int__mod_2_f_0(sudoku__CellIndex_4, sudoku__V_59_59);
          }
#line 245 "sudoku.m"
          sudoku__V_60_60 = (MR_Integer) 2;
#line 245 "sudoku.m"
          (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = (sudoku__RowIndex_43 <= sudoku__V_60_60);
#line 259 "sudoku.m"
          if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 252 "sudoku.m"
            {
#line 249 "sudoku.m"
              MR_Integer sudoku__V_61_61 = (MR_Integer) 2;

#line 249 "sudoku.m"
              (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = (sudoku__CollumIndex_44 <= sudoku__V_61_61);
#line 252 "sudoku.m"
              if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 251 "sudoku.m"
                sudoku__CountryIndex_45 = (MR_Integer) 0;
#line 252 "sudoku.m"
              else
#line 256 "sudoku.m"
                {
#line 253 "sudoku.m"
                  MR_Integer sudoku__V_62_62 = (MR_Integer) 5;

#line 253 "sudoku.m"
                  (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = (sudoku__CollumIndex_44 <= sudoku__V_62_62);
#line 256 "sudoku.m"
                  if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 255 "sudoku.m"
                    sudoku__CountryIndex_45 = (MR_Integer) 1;
#line 256 "sudoku.m"
                  else
#line 257 "sudoku.m"
                    sudoku__CountryIndex_45 = (MR_Integer) 2;
#line 256 "sudoku.m"
                }
#line 252 "sudoku.m"
            }
#line 259 "sudoku.m"
          else
#line 274 "sudoku.m"
            {
#line 260 "sudoku.m"
              MR_Integer sudoku__V_63_63 = (MR_Integer) 5;

#line 260 "sudoku.m"
              (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = (sudoku__RowIndex_43 <= sudoku__V_63_63);
#line 274 "sudoku.m"
              if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 267 "sudoku.m"
                {
#line 264 "sudoku.m"
                  MR_Integer sudoku__V_64_64 = (MR_Integer) 2;

#line 264 "sudoku.m"
                  (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = (sudoku__CollumIndex_44 <= sudoku__V_64_64);
#line 267 "sudoku.m"
                  if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 266 "sudoku.m"
                    sudoku__CountryIndex_45 = (MR_Integer) 3;
#line 267 "sudoku.m"
                  else
#line 271 "sudoku.m"
                    {
#line 268 "sudoku.m"
                      MR_Integer sudoku__V_65_65 = (MR_Integer) 5;

#line 268 "sudoku.m"
                      (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = (sudoku__CollumIndex_44 <= sudoku__V_65_65);
#line 271 "sudoku.m"
                      if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 270 "sudoku.m"
                        sudoku__CountryIndex_45 = (MR_Integer) 4;
#line 271 "sudoku.m"
                      else
#line 272 "sudoku.m"
                        sudoku__CountryIndex_45 = (MR_Integer) 5;
#line 271 "sudoku.m"
                    }
#line 267 "sudoku.m"
                }
#line 274 "sudoku.m"
              else
#line 280 "sudoku.m"
                {
#line 277 "sudoku.m"
                  MR_Integer sudoku__V_66_66 = (MR_Integer) 2;

#line 277 "sudoku.m"
                  (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = (sudoku__CollumIndex_44 <= sudoku__V_66_66);
#line 280 "sudoku.m"
                  if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 279 "sudoku.m"
                    sudoku__CountryIndex_45 = (MR_Integer) 6;
#line 280 "sudoku.m"
                  else
#line 284 "sudoku.m"
                    {
#line 281 "sudoku.m"
                      MR_Integer sudoku__V_67_67 = (MR_Integer) 5;

#line 281 "sudoku.m"
                      (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = (sudoku__CollumIndex_44 <= sudoku__V_67_67);
#line 284 "sudoku.m"
                      if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 283 "sudoku.m"
                        sudoku__CountryIndex_45 = (MR_Integer) 7;
#line 284 "sudoku.m"
                      else
#line 285 "sudoku.m"
                        sudoku__CountryIndex_45 = (MR_Integer) 8;
#line 284 "sudoku.m"
                    }
#line 280 "sudoku.m"
                }
#line 274 "sudoku.m"
            }
#line 1319 "Mercury/cs/sudoku.c"
          sudoku__TypeInfo_43_72 = (MR_Word) &sudoku_scalar_common_1[0];
#line 289 "sudoku.m"
          {
#line 289 "sudoku.m"
            (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = mercury__list__index0_3_p_0(sudoku__TypeInfo_43_72, sudoku__RowList_40, sudoku__RowIndex_43, &sudoku__conv0_TempRow_46);
          }
#line 289 "sudoku.m"
          if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 289 "sudoku.m"
            {
#line 289 "sudoku.m"
              sudoku__TempRow_46 = ((MR_Word) sudoku__conv0_TempRow_46);
#line 289 "sudoku.m"
              (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = MR_TRUE;
#line 289 "sudoku.m"
            }
#line 180 "sudoku.m"
          if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 180 "sudoku.m"
            {
#line 290 "sudoku.m"
              {
#line 290 "sudoku.m"
                (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = mercury__list__index0_3_p_0(sudoku__TypeInfo_43_72, sudoku__CollumList_41, sudoku__CollumIndex_44, &sudoku__conv1_TempCollum_47);
              }
#line 290 "sudoku.m"
              if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 290 "sudoku.m"
                {
#line 290 "sudoku.m"
                  sudoku__TempCollum_47 = ((MR_Word) sudoku__conv1_TempCollum_47);
#line 290 "sudoku.m"
                  (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = MR_TRUE;
#line 290 "sudoku.m"
                }
#line 180 "sudoku.m"
              if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 180 "sudoku.m"
                {
#line 291 "sudoku.m"
                  {
#line 291 "sudoku.m"
                    (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = mercury__list__index0_3_p_0(sudoku__TypeInfo_43_72, sudoku__CountryList_42, sudoku__CountryIndex_45, &sudoku__conv2_TempCountry_48);
                  }
#line 291 "sudoku.m"
                  if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 291 "sudoku.m"
                    {
#line 291 "sudoku.m"
                      sudoku__TempCountry_48 = ((MR_Word) sudoku__conv2_TempCountry_48);
#line 291 "sudoku.m"
                      (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = MR_TRUE;
#line 291 "sudoku.m"
                    }
#line 180 "sudoku.m"
                  if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 180 "sudoku.m"
                    {
#line 292 "sudoku.m"
                      sudoku__V_68_68 = (MR_Integer) -1;
#line 292 "sudoku.m"
                      {
#line 292 "sudoku.m"
                        mercury__list__delete_all_3_p_1(sudoku__TypeCtorInfo_42_71, sudoku__TempRow_46, ((MR_Box) (sudoku__V_68_68)), &sudoku__RowValues_27);
                      }
#line 293 "sudoku.m"
                      sudoku__V_69_69 = (MR_Integer) -1;
#line 293 "sudoku.m"
                      {
#line 293 "sudoku.m"
                        mercury__list__delete_all_3_p_1(sudoku__TypeCtorInfo_42_71, sudoku__TempCollum_47, ((MR_Box) (sudoku__V_69_69)), &sudoku__CollumValues_28);
                      }
#line 294 "sudoku.m"
                      sudoku__V_70_70 = (MR_Integer) -1;
#line 294 "sudoku.m"
                      {
#line 294 "sudoku.m"
                        mercury__list__delete_all_3_p_1(sudoku__TypeCtorInfo_42_71, sudoku__TempCountry_48, ((MR_Box) (sudoku__V_70_70)), &sudoku__CountryValues_29);
                      }
#line 1399 "Mercury/cs/sudoku.c"
                      sudoku__TypeCtorInfo_14_34 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 202 "sudoku.m"
                      {
#line 202 "sudoku.m"
                        mercury__list__append_3_p_1(sudoku__TypeCtorInfo_14_34, sudoku__RowValues_27, sudoku__CollumValues_28, &sudoku__TempList_30);
                      }
#line 203 "sudoku.m"
                      {
#line 203 "sudoku.m"
                        mercury__list__append_3_p_1(sudoku__TypeCtorInfo_14_34, sudoku__TempList_30, sudoku__CountryValues_29, &sudoku__TempList2_31);
                      }
#line 164 "sudoku.m"
                      sudoku__FullList_75 = (MR_Word) MR_mkword(MR_mktag(1), &sudoku_scalar_common_1[9]);
#line 1413 "Mercury/cs/sudoku.c"
                      sudoku__TypeCtorInfo_24_94 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 165 "sudoku.m"
                      {
#line 165 "sudoku.m"
                        mercury__list__delete_elems_3_p_0(sudoku__TypeCtorInfo_24_94, sudoku__FullList_75, sudoku__TempList2_31, &sudoku__PossibleValues_8);
                      }
#line 1420 "Mercury/cs/sudoku.c"
                      sudoku__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 181 "sudoku.m"
                      {
#line 181 "sudoku.m"
                        mercury__list__length_2_p_0(sudoku__TypeCtorInfo_20_20, sudoku__PossibleValues_8, &sudoku__Len_9);
                      }
#line 182 "sudoku.m"
                      (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = (sudoku__Len_9 == (MR_Integer) 1);
#line 180 "sudoku.m"
                    }
#line 180 "sudoku.m"
                }
#line 180 "sudoku.m"
            }
#line 186 "sudoku.m"
          if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 183 "sudoku.m"
            {
#line 183 "sudoku.m"
              MR_Word sudoku__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 183 "sudoku.m"
              MR_Integer sudoku__Head_10;
#line 183 "sudoku.m"
              MR_Integer sudoku__V_14_14 = (MR_Integer) 0;
#line 183 "sudoku.m"
              MR_Integer sudoku__V_15_15;
#line 183 "sudoku.m"
              MR_Integer sudoku__V_16_16;
#line 183 "sudoku.m"
              MR_Box sudoku__conv3_Head_10;

#line 183 "sudoku.m"
              {
#line 183 "sudoku.m"
                (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = mercury__list__index0_3_p_0(sudoku__TypeCtorInfo_21_21, sudoku__PossibleValues_8, sudoku__V_14_14, &sudoku__conv3_Head_10);
              }
#line 183 "sudoku.m"
              if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 183 "sudoku.m"
                {
#line 183 "sudoku.m"
                  sudoku__Head_10 = ((MR_Integer) sudoku__conv3_Head_10);
#line 183 "sudoku.m"
                  (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = MR_TRUE;
#line 183 "sudoku.m"
                }
#line 183 "sudoku.m"
              if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 183 "sudoku.m"
                {
#line 184 "sudoku.m"
                  sudoku__V_16_16 = (MR_Integer) 1;
#line 184 "sudoku.m"
                  sudoku__V_15_15 = (sudoku__CellIndex_4 + sudoku__V_16_16);
#line 184 "sudoku.m"
                  {
#line 184 "sudoku.m"
                    (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = mercury__list__replace_nth_4_p_0(sudoku__TypeCtorInfo_21_21, sudoku__Puzzle_5, sudoku__V_15_15, ((MR_Box) (sudoku__Head_10)), (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__UpdatedPuzzle_6);
                  }
#line 183 "sudoku.m"
                }
#line 183 "sudoku.m"
              if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 183 "sudoku.m"
                {
#line 183 "sudoku.m"
                  ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__cont)((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__cont_env_ptr);
#line 183 "sudoku.m"
                  return;
                }
#line 183 "sudoku.m"
            }
#line 186 "sudoku.m"
          else
#line 189 "sudoku.m"
            {
#line 189 "sudoku.m"
              MR_Integer sudoku__V_17_17;
#line 189 "sudoku.m"
              MR_Integer sudoku__V_18_18;

#line 188 "sudoku.m"
              *((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__UpdatedPuzzle_6) = sudoku__Puzzle_5;
#line 191 "sudoku.m"
              sudoku__V_18_18 = (MR_Integer) 1;
#line 191 "sudoku.m"
              sudoku__V_17_17 = (sudoku__CellIndex_4 + sudoku__V_18_18);
#line 191 "sudoku.m"
              {
#line 191 "sudoku.m"
                sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0(sudoku__V_17_17, *((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__UpdatedPuzzle_6), &(sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__V_22_22, sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_1, sudoku__env_ptr);
              }
#line 189 "sudoku.m"
            }
#line 186 "sudoku.m"
        }
#line 179 "sudoku.m"
    }
#line 168 "sudoku.m"
  }
#line 168 "sudoku.m"
}

#line 96 "sudoku.m"
static void MR_CALL 
sudoku__load_puzzle_3_p_0(
#line 96 "sudoku.m"
  MR_Word * sudoku__Puzzle_4)
#line 96 "sudoku.m"
{
#line 103 "sudoku.m"
  {
#line 103 "sudoku.m"
    MR_bool sudoku__succeeded;
#line 103 "sudoku.m"
    MR_Word sudoku__Result_6;

#line 104 "sudoku.m"
    {
#line 104 "sudoku.m"
      mercury__io__read_char_3_p_0(&sudoku__Result_6);
    }
#line 107 "sudoku.m"
#line 107 "sudoku.m"
    switch (MR_tag((MR_Word) sudoku__Result_6)) {
#line 107 "sudoku.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 107 "sudoku.m"
      case (MR_Integer) 0:
#line 106 "sudoku.m"
        *sudoku__Puzzle_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 107 "sudoku.m"
        break;
#line 107 "sudoku.m"
      case (MR_Integer) 1:
#line 107 "sudoku.m"
        {
#line 107 "sudoku.m"
          MR_Char sudoku__Char_8 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), sudoku__Result_6, (MR_Integer) 0)));
#line 107 "sudoku.m"
          MR_Word sudoku__Puzzle1_10;
#line 110 "sudoku.m"
          MR_Integer sudoku__Int_9;

#line 116 "sudoku.m"
          {
#line 116 "sudoku.m"
            sudoku__load_puzzle_3_p_0(&sudoku__Puzzle1_10);
          }
#line 108 "sudoku.m"
          {
#line 108 "sudoku.m"
            sudoku__succeeded = mercury__char__digit_to_int_2_p_0(sudoku__Char_8, &sudoku__Int_9);
          }
#line 110 "sudoku.m"
          if (sudoku__succeeded)
#line 109 "sudoku.m"
            {
#line 109 "sudoku.m"
              MR_Word base;
#line 109 "sudoku.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 109 "sudoku.m"
              *sudoku__Puzzle_4 = base;
#line 109 "sudoku.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (sudoku__Int_9));
#line 109 "sudoku.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (sudoku__Puzzle1_10));
#line 109 "sudoku.m"
            }
#line 110 "sudoku.m"
          else
#line 114 "sudoku.m"
            {
#line 112 "sudoku.m"
#line 112 "sudoku.m"
              switch (sudoku__Char_8) {
#line 112 "sudoku.m"
                default:
#line 112 "sudoku.m"
                  sudoku__succeeded = MR_FALSE;
#line 112 "sudoku.m"
                  break;
#line 112 "sudoku.m"
                case (MR_Char) 32:
#line 112 "sudoku.m"
                  sudoku__succeeded = MR_TRUE;
#line 112 "sudoku.m"
                  break;
#line 112 "sudoku.m"
                case (MR_Char) 46:
#line 112 "sudoku.m"
                  sudoku__succeeded = MR_TRUE;
#line 112 "sudoku.m"
                  break;
#line 112 "sudoku.m"
                case (MR_Char) 95:
#line 112 "sudoku.m"
                  sudoku__succeeded = MR_TRUE;
#line 112 "sudoku.m"
                  break;
#line 112 "sudoku.m"
              }
#line 114 "sudoku.m"
              if (sudoku__succeeded)
#line 113 "sudoku.m"
                {
#line 113 "sudoku.m"
                  MR_Integer sudoku__V_14_14 = (MR_Integer) -1;

#line 113 "sudoku.m"
                  {
#line 113 "sudoku.m"
                    MR_Word base;
#line 113 "sudoku.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 113 "sudoku.m"
                    *sudoku__Puzzle_4 = base;
#line 113 "sudoku.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (sudoku__V_14_14));
#line 113 "sudoku.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (sudoku__Puzzle1_10));
#line 113 "sudoku.m"
                  }
#line 113 "sudoku.m"
                }
#line 114 "sudoku.m"
              else
#line 114 "sudoku.m"
                *sudoku__Puzzle_4 = sudoku__Puzzle1_10;
#line 114 "sudoku.m"
            }
#line 107 "sudoku.m"
        }
#line 107 "sudoku.m"
        break;
#line 107 "sudoku.m"
      case (MR_Integer) 2:
#line 106 "sudoku.m"
        *sudoku__Puzzle_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 107 "sudoku.m"
        break;
#line 107 "sudoku.m"
    }
#line 103 "sudoku.m"
  }
#line 96 "sudoku.m"
}

#line 69 "sudoku.m"
static void MR_CALL 
main_2_p_0_1(
#line 69 "sudoku.m"
  void * sudoku__env_ptr_arg)
#line 69 "sudoku.m"
{
#line 69 "sudoku.m"
  {
#line 69 "sudoku.m"
    struct sudoku__main_2_p_0_env_0_s * sudoku__env_ptr = (struct sudoku__main_2_p_0_env_0_s *) sudoku__env_ptr_arg;

#line 69 "sudoku.m"
    MR_builtin_longjmp((sudoku__env_ptr)->sudoku__main_2_p_0_env_0__commit_0, 1);
#line 69 "sudoku.m"
  }
#line 69 "sudoku.m"
}

#line 69 "sudoku.m"
static void MR_CALL 
main_2_p_0_2(
#line 69 "sudoku.m"
  void * sudoku__env_ptr_arg)
#line 69 "sudoku.m"
{
#line 69 "sudoku.m"
  {
#line 69 "sudoku.m"
    struct sudoku__main_2_p_0_env_0_s * sudoku__env_ptr = (struct sudoku__main_2_p_0_env_0_s *) sudoku__env_ptr_arg;

#line 69 "sudoku.m"
    if (MR_builtin_setjmp((sudoku__env_ptr)->sudoku__main_2_p_0_env_0__commit_0) == 0)
#line 69 "sudoku.m"
      {
#line 130 "sudoku.m"
        {
#line 130 "sudoku.m"
          MR_Integer sudoku__V_44_44 = (MR_Integer) 0;

#line 132 "sudoku.m"
          {
#line 132 "sudoku.m"
            sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0(sudoku__V_44_44, (sudoku__env_ptr)->sudoku__main_2_p_0_env_0__Puzzle_25, &(sudoku__env_ptr)->sudoku__main_2_p_0_env_0__OutputPuzzle_28, main_2_p_0_1, sudoku__env_ptr);
          }
#line 130 "sudoku.m"
        }
#line 69 "sudoku.m"
        (sudoku__env_ptr)->sudoku__main_2_p_0_env_0__succeeded = MR_FALSE;
#line 69 "sudoku.m"
      }
#line 69 "sudoku.m"
    else
#line 69 "sudoku.m"
      (sudoku__env_ptr)->sudoku__main_2_p_0_env_0__succeeded = MR_TRUE;
#line 69 "sudoku.m"
  }
#line 69 "sudoku.m"
}

#line 9 "sudoku.m"
void MR_CALL 
main_2_p_0(void)
#line 9 "sudoku.m"
{
#line 9 "sudoku.m"
  {
#line 9 "sudoku.m"
    struct sudoku__main_2_p_0_env_0_s sudoku__env;
#line 9 "sudoku.m"
    struct sudoku__main_2_p_0_env_0_s * sudoku__env_ptr = &sudoku__env;

#line 15 "sudoku.m"
    {
#line 15 "sudoku.m"
      MR_Word sudoku__Args_4;
#line 26 "sudoku.m"
      MR_String sudoku__File_5;
#line 17 "sudoku.m"
      MR_Word sudoku__V_11_11;

#line 16 "sudoku.m"
      {
#line 16 "sudoku.m"
        mercury__io__command_line_arguments_3_p_0(&sudoku__Args_4);
      }
#line 17 "sudoku.m"
      (sudoku__env_ptr)->sudoku__main_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) sudoku__Args_4)) == (MR_mktag((MR_Integer) 1)));
#line 17 "sudoku.m"
      if ((sudoku__env_ptr)->sudoku__main_2_p_0_env_0__succeeded)
#line 17 "sudoku.m"
        {
#line 17 "sudoku.m"
          sudoku__File_5 = ((MR_String) (MR_hl_field(MR_mktag(1), sudoku__Args_4, (MR_Integer) 0)));
#line 17 "sudoku.m"
          sudoku__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), sudoku__Args_4, (MR_Integer) 1)));
#line 17 "sudoku.m"
          (sudoku__env_ptr)->sudoku__main_2_p_0_env_0__succeeded = (sudoku__V_11_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 17 "sudoku.m"
        }
#line 26 "sudoku.m"
      if ((sudoku__env_ptr)->sudoku__main_2_p_0_env_0__succeeded)
#line 18 "sudoku.m"
        {
#line 18 "sudoku.m"
          MR_Word sudoku__Result_6;

#line 18 "sudoku.m"
          {
#line 18 "sudoku.m"
            mercury__io__see_4_p_0(sudoku__File_5, &sudoku__Result_6);
          }
#line 22 "sudoku.m"
          if ((sudoku__Result_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 19 "sudoku.m"
            {
#line 62 "sudoku.m"
              {
#line 62 "sudoku.m"
                sudoku__load_puzzle_3_p_0(&(sudoku__env_ptr)->sudoku__main_2_p_0_env_0__Puzzle_25);
              }
#line 64 "sudoku.m"
              (sudoku__env_ptr)->sudoku__main_2_p_0_env_0__succeeded = ((sudoku__env_ptr)->sudoku__main_2_p_0_env_0__Puzzle_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 67 "sudoku.m"
              if ((sudoku__env_ptr)->sudoku__main_2_p_0_env_0__succeeded)
#line 65 "sudoku.m"
                {
#line 65 "sudoku.m"
                  MR_String sudoku__V_30_30 = (MR_String) "Error reading puzzle\n";
#line 65 "sudoku.m"
                  MR_Integer sudoku__V_32_32;

#line 65 "sudoku.m"
                  {
#line 65 "sudoku.m"
                    mercury__io__write_string_3_p_0(sudoku__V_30_30);
                  }
#line 66 "sudoku.m"
                  sudoku__V_32_32 = (MR_Integer) 1;
#line 66 "sudoku.m"
                  {
#line 66 "sudoku.m"
                    mercury__io__set_exit_status_3_p_0(sudoku__V_32_32);
                  }
#line 65 "sudoku.m"
                }
#line 67 "sudoku.m"
              else
#line 73 "sudoku.m"
                {
#line 73 "sudoku.m"
                  MR_Integer sudoku__Size_26;
#line 73 "sudoku.m"
                  MR_Integer sudoku__Boxsize_27;
#line 67 "sudoku.m"
                  MR_Word sudoku__TypeCtorInfo_22_41 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 67 "sudoku.m"
                  MR_Integer sudoku__V_34_34;

#line 67 "sudoku.m"
                  {
#line 67 "sudoku.m"
                    sudoku__V_34_34 = mercury__list__length_1_f_0(sudoku__TypeCtorInfo_22_41, (sudoku__env_ptr)->sudoku__main_2_p_0_env_0__Puzzle_25);
                  }
#line 86 "sudoku.m"
#line 86 "sudoku.m"
                  switch (sudoku__V_34_34) {
#line 86 "sudoku.m"
                    default:
#line 86 "sudoku.m"
                      (sudoku__env_ptr)->sudoku__main_2_p_0_env_0__succeeded = MR_FALSE;
#line 86 "sudoku.m"
                      break;
#line 86 "sudoku.m"
                    case (MR_Integer) 16:
#line 86 "sudoku.m"
                      {
#line 86 "sudoku.m"
                        sudoku__Size_26 = (MR_Integer) 4;
#line 86 "sudoku.m"
                        sudoku__Boxsize_27 = (MR_Integer) 2;
#line 86 "sudoku.m"
                        (sudoku__env_ptr)->sudoku__main_2_p_0_env_0__succeeded = MR_TRUE;
#line 86 "sudoku.m"
                      }
#line 86 "sudoku.m"
                      break;
#line 86 "sudoku.m"
                    case (MR_Integer) 81:
#line 87 "sudoku.m"
                      {
#line 87 "sudoku.m"
                        sudoku__Size_26 = (MR_Integer) 9;
#line 87 "sudoku.m"
                        sudoku__Boxsize_27 = (MR_Integer) 3;
#line 87 "sudoku.m"
                        (sudoku__env_ptr)->sudoku__main_2_p_0_env_0__succeeded = MR_TRUE;
#line 87 "sudoku.m"
                      }
#line 86 "sudoku.m"
                      break;
#line 86 "sudoku.m"
                    case (MR_Integer) 256:
#line 88 "sudoku.m"
                      {
#line 88 "sudoku.m"
                        sudoku__Size_26 = (MR_Integer) 16;
#line 88 "sudoku.m"
                        sudoku__Boxsize_27 = (MR_Integer) 4;
#line 88 "sudoku.m"
                        (sudoku__env_ptr)->sudoku__main_2_p_0_env_0__succeeded = MR_TRUE;
#line 88 "sudoku.m"
                      }
#line 86 "sudoku.m"
                      break;
#line 86 "sudoku.m"
                    case (MR_Integer) 625:
#line 89 "sudoku.m"
                      {
#line 89 "sudoku.m"
                        sudoku__Size_26 = (MR_Integer) 25;
#line 89 "sudoku.m"
                        sudoku__Boxsize_27 = (MR_Integer) 5;
#line 89 "sudoku.m"
                        (sudoku__env_ptr)->sudoku__main_2_p_0_env_0__succeeded = MR_TRUE;
#line 89 "sudoku.m"
                      }
#line 86 "sudoku.m"
                      break;
#line 86 "sudoku.m"
                  }
#line 73 "sudoku.m"
                  if ((sudoku__env_ptr)->sudoku__main_2_p_0_env_0__succeeded)
#line 71 "sudoku.m"
                    {
#line 69 "sudoku.m"
                      {
#line 69 "sudoku.m"
                        main_2_p_0_2(sudoku__env_ptr);
                      }
#line 71 "sudoku.m"
                      if ((sudoku__env_ptr)->sudoku__main_2_p_0_env_0__succeeded)
#line 70 "sudoku.m"
                        {
#line 70 "sudoku.m"
                          sudoku__print_puzzle_5_p_0((sudoku__env_ptr)->sudoku__main_2_p_0_env_0__OutputPuzzle_28, sudoku__Size_26, sudoku__Boxsize_27);
                        }
#line 71 "sudoku.m"
                      else
#line 71 "sudoku.m"
                        {
#line 71 "sudoku.m"
                          sudoku__print_puzzle_5_p_0((sudoku__env_ptr)->sudoku__main_2_p_0_env_0__Puzzle_25, sudoku__Size_26, sudoku__Boxsize_27);
                        }
#line 71 "sudoku.m"
                    }
#line 73 "sudoku.m"
                  else
#line 73 "sudoku.m"
                    {
#line 73 "sudoku.m"
                      MR_String sudoku__V_37_37 = (MR_String) "Invalid puzzle size\n";
#line 73 "sudoku.m"
                      MR_Integer sudoku__V_39_39;

#line 73 "sudoku.m"
                      {
#line 73 "sudoku.m"
                        mercury__io__write_string_3_p_0(sudoku__V_37_37);
                      }
#line 74 "sudoku.m"
                      sudoku__V_39_39 = (MR_Integer) 1;
#line 74 "sudoku.m"
                      {
#line 74 "sudoku.m"
                        mercury__io__set_exit_status_3_p_0(sudoku__V_39_39);
                      }
#line 73 "sudoku.m"
                    }
#line 73 "sudoku.m"
                }
#line 21 "sudoku.m"
              {
#line 21 "sudoku.m"
                mercury__io__seen_2_p_0();
#line 21 "sudoku.m"
                return;
              }
#line 19 "sudoku.m"
            }
#line 22 "sudoku.m"
          else
#line 22 "sudoku.m"
            {
#line 22 "sudoku.m"
              MR_String sudoku__V_13_13 = (MR_String) "Could not open puzzle file\n";
#line 22 "sudoku.m"
              MR_Integer sudoku__V_15_15;

#line 23 "sudoku.m"
              {
#line 23 "sudoku.m"
                mercury__io__write_string_3_p_0(sudoku__V_13_13);
              }
#line 24 "sudoku.m"
              sudoku__V_15_15 = (MR_Integer) 1;
#line 24 "sudoku.m"
              {
#line 24 "sudoku.m"
                mercury__io__set_exit_status_3_p_0(sudoku__V_15_15);
#line 24 "sudoku.m"
                return;
              }
#line 22 "sudoku.m"
            }
#line 18 "sudoku.m"
        }
#line 26 "sudoku.m"
      else
#line 26 "sudoku.m"
        {
#line 26 "sudoku.m"
          MR_Integer sudoku__V_20_20;
#line 26 "sudoku.m"
          MR_String sudoku__V_48_48 = (MR_String) "Usage:  sudoku filname\n";
#line 26 "sudoku.m"
          MR_String sudoku__V_50_50;
#line 26 "sudoku.m"
          MR_String sudoku__V_52_52;
#line 26 "sudoku.m"
          MR_String sudoku__V_54_54;
#line 26 "sudoku.m"
          MR_String sudoku__V_56_56;
#line 26 "sudoku.m"
          MR_String sudoku__V_58_58;
#line 26 "sudoku.m"
          MR_String sudoku__V_60_60;
#line 26 "sudoku.m"
          MR_String sudoku__V_62_62;
#line 26 "sudoku.m"
          MR_String sudoku__V_64_64;

#line 36 "sudoku.m"
          {
#line 36 "sudoku.m"
            mercury__io__write_string_3_p_0(sudoku__V_48_48);
          }
#line 37 "sudoku.m"
          sudoku__V_50_50 = (MR_String) "  where filname is the name of a file containing a sudoku puzzle\n";
#line 37 "sudoku.m"
          {
#line 37 "sudoku.m"
            mercury__io__write_string_3_p_0(sudoku__V_50_50);
          }
#line 39 "sudoku.m"
          sudoku__V_52_52 = (MR_String) "  written as a file of 4, 9, 16, or 25 lines, each with that same\n";
#line 39 "sudoku.m"
          {
#line 39 "sudoku.m"
            mercury__io__write_string_3_p_0(sudoku__V_52_52);
          }
#line 41 "sudoku.m"
          sudoku__V_54_54 = (MR_String) "  number of characters.  All characters on each line must be either\n";
#line 41 "sudoku.m"
          {
#line 41 "sudoku.m"
            mercury__io__write_string_3_p_0(sudoku__V_54_54);
          }
#line 43 "sudoku.m"
          sudoku__V_56_56 = (MR_String) "  a space (for squares to be solved for) or a digit (except 0) or a\n";
#line 43 "sudoku.m"
          {
#line 43 "sudoku.m"
            mercury__io__write_string_3_p_0(sudoku__V_56_56);
          }
#line 45 "sudoku.m"
          sudoku__V_58_58 = (MR_String) "  letter.  A solved puzzle is the same, except that all spaces have\n";
#line 45 "sudoku.m"
          {
#line 45 "sudoku.m"
            mercury__io__write_string_3_p_0(sudoku__V_58_58);
          }
#line 47 "sudoku.m"
          sudoku__V_60_60 = (MR_String) "  been filled in with letters and digits, and each digit or letter\n";
#line 47 "sudoku.m"
          {
#line 47 "sudoku.m"
            mercury__io__write_string_3_p_0(sudoku__V_60_60);
          }
#line 49 "sudoku.m"
          sudoku__V_62_62 = (MR_String) "  between 1 and the width of the puzzle (where \'a\' is taken for 10,\n";
#line 49 "sudoku.m"
          {
#line 49 "sudoku.m"
            mercury__io__write_string_3_p_0(sudoku__V_62_62);
          }
#line 51 "sudoku.m"
          sudoku__V_64_64 = (MR_String) "  and so on) appears exactly once in each row, column, and box.\n";
#line 51 "sudoku.m"
          {
#line 51 "sudoku.m"
            mercury__io__write_string_3_p_0(sudoku__V_64_64);
          }
#line 27 "sudoku.m"
          sudoku__V_20_20 = (MR_Integer) 1;
#line 27 "sudoku.m"
          {
#line 27 "sudoku.m"
            mercury__io__set_exit_status_3_p_0(sudoku__V_20_20);
#line 27 "sudoku.m"
            return;
          }
#line 26 "sudoku.m"
        }
#line 15 "sudoku.m"
    }
#line 9 "sudoku.m"
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

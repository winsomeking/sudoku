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



#line 177 "sudoku.m"
struct sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0_s {
#line 177 "sudoku.m"
  MR_Word * sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__UpdatedPuzzle_6;
#line 177 "sudoku.m"
  MR_Cont sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__cont;
#line 177 "sudoku.m"
  void * sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__cont_env_ptr;
#line 188 "sudoku.m"
  MR_bool sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded;
#line 198 "sudoku.m"
  MR_Word sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__TypeInfo_23_23;
#line 198 "sudoku.m"
  MR_Word sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__V_22_22;
#line 177 "sudoku.m"
};

#line 19 "sudoku.m"
struct sudoku__main_2_p_0_env_0_s {
#line 25 "sudoku.m"
  MR_bool sudoku__main_2_p_0_env_0__succeeded;
#line 29 "sudoku.m"
  MR_Word sudoku__main_2_p_0_env_0__Puzzle_25;
#line 81 "sudoku.m"
  MR_Word sudoku__main_2_p_0_env_0__OutputPuzzle_28;
#line 79 "sudoku.m"
  jmp_buf sudoku__main_2_p_0_env_0__commit_0;
#line 19 "sudoku.m"
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

#line 131 "sudoku.m"
static void MR_CALL 
sudoku____Compare____cell_0_0(
#line 131 "sudoku.m"
  MR_Word * sudoku__HeadVar__1_1,
#line 131 "sudoku.m"
  MR_Word sudoku__HeadVar__2_2,
#line 131 "sudoku.m"
  MR_Word sudoku__HeadVar__3_3);

#line 131 "sudoku.m"
static MR_bool MR_CALL 
sudoku____Unify____cell_0_0(
#line 131 "sudoku.m"
  MR_Word sudoku__HeadVar__1_1,
#line 131 "sudoku.m"
  MR_Word sudoku__HeadVar__2_2);

#line 360 "sudoku.m"
static void MR_CALL 
sudoku__print_hbar_4_p_0(
#line 360 "sudoku.m"
  MR_Integer sudoku__Remaining_5,
#line 360 "sudoku.m"
  MR_Integer sudoku__Boxsize_6);

#line 338 "sudoku.m"
static void MR_CALL 
sudoku__print_row_6_p_0(
#line 338 "sudoku.m"
  MR_Word sudoku__STATE_VARIABLE_Puzzle_0_13,
#line 338 "sudoku.m"
  MR_Word * sudoku__STATE_VARIABLE_Puzzle_14,
#line 338 "sudoku.m"
  MR_Integer sudoku__Remaining_8,
#line 338 "sudoku.m"
  MR_Integer sudoku__Boxsize_9);

#line 325 "sudoku.m"
static void MR_CALL 
sudoku__print_chunk_7_p_0(
#line 325 "sudoku.m"
  MR_Word sudoku__STATE_VARIABLE_Puzzle_0_13,
#line 325 "sudoku.m"
  MR_Word * sudoku__STATE_VARIABLE_Puzzle_14,
#line 325 "sudoku.m"
  MR_Integer sudoku__Rowsleft_9,
#line 325 "sudoku.m"
  MR_Integer sudoku__Size_10,
#line 325 "sudoku.m"
  MR_Integer sudoku__Boxsize_11);

#line 310 "sudoku.m"
static void MR_CALL 
sudoku__print_puzzle_5_p_0(
#line 310 "sudoku.m"
  MR_Word sudoku__Puzzle_6,
#line 310 "sudoku.m"
  MR_Integer sudoku__Size_7,
#line 310 "sudoku.m"
  MR_Integer sudoku__Boxsize_8);

#line 198 "sudoku.m"
static void MR_CALL 
sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_1(
#line 198 "sudoku.m"
  void * sudoku__env_ptr_arg);

#line 177 "sudoku.m"
static void MR_CALL 
sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0(
#line 177 "sudoku.m"
  MR_Integer sudoku__CellIndex_4,
#line 177 "sudoku.m"
  MR_Word sudoku__Puzzle_5,
#line 177 "sudoku.m"
  MR_Word * sudoku__UpdatedPuzzle_6,
#line 177 "sudoku.m"
  MR_Cont sudoku__cont,
#line 177 "sudoku.m"
  void * sudoku__cont_env_ptr);

#line 106 "sudoku.m"
static void MR_CALL 
sudoku__load_puzzle_3_p_0(
#line 106 "sudoku.m"
  MR_Word * sudoku__Puzzle_4);

#line 79 "sudoku.m"
static void MR_CALL 
main_2_p_0_1(
#line 79 "sudoku.m"
  void * sudoku__env_ptr_arg);

#line 79 "sudoku.m"
static void MR_CALL 
main_2_p_0_2(
#line 79 "sudoku.m"
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

#line 131 "sudoku.m"
static void MR_CALL 
sudoku____Compare____cell_0_0(
#line 131 "sudoku.m"
  MR_Word * sudoku__HeadVar__1_1,
#line 131 "sudoku.m"
  MR_Word sudoku__HeadVar__2_2,
#line 131 "sudoku.m"
  MR_Word sudoku__HeadVar__3_3)
#line 131 "sudoku.m"
{
#line 131 "sudoku.m"
  {
#line 131 "sudoku.m"
    MR_bool sudoku__succeeded;
#line 131 "sudoku.m"
    MR_Integer sudoku__CastX_9 = (MR_Integer) sudoku__HeadVar__2_2;
#line 131 "sudoku.m"
    MR_Integer sudoku__CastY_10 = (MR_Integer) sudoku__HeadVar__3_3;

#line 131 "sudoku.m"
    sudoku__succeeded = (sudoku__CastX_9 == sudoku__CastY_10);
#line 131 "sudoku.m"
    if (sudoku__succeeded)
#line 458 "Mercury/cs/sudoku.c"
      *sudoku__HeadVar__1_1 = (MR_Integer) 0;
#line 131 "sudoku.m"
    else
#line 131 "sudoku.m"
      {
#line 131 "sudoku.m"
        MR_Integer sudoku__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), sudoku__HeadVar__2_2, (MR_Integer) 0)));
#line 131 "sudoku.m"
        MR_Integer sudoku__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), sudoku__HeadVar__2_2, (MR_Integer) 1)));
#line 131 "sudoku.m"
        MR_Integer sudoku__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), sudoku__HeadVar__3_3, (MR_Integer) 0)));
#line 131 "sudoku.m"
        MR_Integer sudoku__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), sudoku__HeadVar__3_3, (MR_Integer) 1)));
#line 131 "sudoku.m"
        MR_Word sudoku__V_8_8;

#line 131 "sudoku.m"
        {
#line 131 "sudoku.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&sudoku__V_8_8, sudoku__V_4_4, sudoku__V_6_6);
        }
#line 480 "Mercury/cs/sudoku.c"
        sudoku__succeeded = (sudoku__V_8_8 == (MR_Integer) 0);
#line 131 "sudoku.m"
        sudoku__succeeded = !(sudoku__succeeded);
#line 131 "sudoku.m"
        if (sudoku__succeeded)
#line 131 "sudoku.m"
          *sudoku__HeadVar__1_1 = sudoku__V_8_8;
#line 131 "sudoku.m"
        else
#line 131 "sudoku.m"
          {
#line 131 "sudoku.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(sudoku__HeadVar__1_1, sudoku__V_5_5, sudoku__V_7_7);
#line 131 "sudoku.m"
            return;
          }
#line 131 "sudoku.m"
      }
#line 131 "sudoku.m"
  }
#line 131 "sudoku.m"
}

#line 131 "sudoku.m"
static MR_bool MR_CALL 
sudoku____Unify____cell_0_0(
#line 131 "sudoku.m"
  MR_Word sudoku__HeadVar__1_1,
#line 131 "sudoku.m"
  MR_Word sudoku__HeadVar__2_2)
#line 131 "sudoku.m"
{
#line 131 "sudoku.m"
  {
#line 131 "sudoku.m"
    MR_bool sudoku__succeeded;
#line 131 "sudoku.m"
    MR_Integer sudoku__CastX_7 = (MR_Integer) sudoku__HeadVar__1_1;
#line 131 "sudoku.m"
    MR_Integer sudoku__CastY_8 = (MR_Integer) sudoku__HeadVar__2_2;

#line 131 "sudoku.m"
    sudoku__succeeded = (sudoku__CastX_7 == sudoku__CastY_8);
#line 131 "sudoku.m"
    if (sudoku__succeeded)
#line 131 "sudoku.m"
      sudoku__succeeded = MR_TRUE;
#line 131 "sudoku.m"
    else
#line 131 "sudoku.m"
      {
#line 131 "sudoku.m"
        MR_Integer sudoku__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), sudoku__HeadVar__1_1, (MR_Integer) 0)));
#line 131 "sudoku.m"
        MR_Integer sudoku__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), sudoku__HeadVar__1_1, (MR_Integer) 1)));
#line 131 "sudoku.m"
        MR_Integer sudoku__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), sudoku__HeadVar__2_2, (MR_Integer) 0)));
#line 131 "sudoku.m"
        MR_Integer sudoku__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), sudoku__HeadVar__2_2, (MR_Integer) 1)));

#line 541 "Mercury/cs/sudoku.c"
        sudoku__succeeded = (sudoku__V_3_3 == sudoku__V_5_5);
#line 131 "sudoku.m"
        if (sudoku__succeeded)
#line 545 "Mercury/cs/sudoku.c"
          sudoku__succeeded = (sudoku__V_4_4 == sudoku__V_6_6);
#line 131 "sudoku.m"
      }
#line 131 "sudoku.m"
    return sudoku__succeeded;
#line 131 "sudoku.m"
  }
#line 131 "sudoku.m"
}

#line 360 "sudoku.m"
static void MR_CALL 
sudoku__print_hbar_4_p_0(
#line 360 "sudoku.m"
  MR_Integer sudoku__Remaining_5,
#line 360 "sudoku.m"
  MR_Integer sudoku__Boxsize_6)
#line 360 "sudoku.m"
{
#line 366 "sudoku.m"
  while (MR_TRUE)
#line 366 "sudoku.m"
    {
#line 366 "sudoku.m"
      /* tailcall optimized into a loop */
#line 366 "sudoku.m"
      {
#line 366 "sudoku.m"
        MR_bool sudoku__succeeded;
#line 367 "sudoku.m"
        MR_Integer sudoku__V_10_10 = (MR_Integer) 0;
#line 367 "sudoku.m"
        MR_Integer sudoku__V_19_19;

#line 367 "sudoku.m"
        {
#line 367 "sudoku.m"
          sudoku__V_19_19 = mercury__int__mod_2_f_0(sudoku__Remaining_5, sudoku__Boxsize_6);
        }
#line 367 "sudoku.m"
        sudoku__succeeded = (sudoku__V_10_10 == sudoku__V_19_19);
#line 369 "sudoku.m"
        if (sudoku__succeeded)
#line 368 "sudoku.m"
          {
#line 368 "sudoku.m"
            MR_Char sudoku__V_11_11 = (MR_Char) 43;

#line 368 "sudoku.m"
            {
#line 368 "sudoku.m"
              mercury__io__write_char_3_p_0(sudoku__V_11_11);
            }
#line 368 "sudoku.m"
          }
#line 369 "sudoku.m"
        else
#line 368 "sudoku.m"
          {
#line 368 "sudoku.m"
          }
#line 371 "sudoku.m"
        sudoku__succeeded = (sudoku__Remaining_5 == (MR_Integer) 0);
#line 373 "sudoku.m"
        if (sudoku__succeeded)
#line 372 "sudoku.m"
          {
#line 372 "sudoku.m"
            mercury__io__nl_2_p_0();
#line 372 "sudoku.m"
            return;
          }
#line 373 "sudoku.m"
        else
#line 373 "sudoku.m"
          {
#line 373 "sudoku.m"
            MR_Char sudoku__V_14_14 = (MR_Char) 45;
#line 373 "sudoku.m"
            MR_Integer sudoku__V_16_16;
#line 373 "sudoku.m"
            MR_Integer sudoku__V_18_18;

#line 373 "sudoku.m"
            {
#line 373 "sudoku.m"
              mercury__io__write_char_3_p_0(sudoku__V_14_14);
            }
#line 374 "sudoku.m"
            sudoku__V_18_18 = (MR_Integer) 1;
#line 374 "sudoku.m"
            sudoku__V_16_16 = (sudoku__Remaining_5 - sudoku__V_18_18);
#line 374 "sudoku.m"
            /* direct tailcall eliminated */
#line 374 "sudoku.m"
            {
#line 374 "sudoku.m"
              MR_Integer sudoku__Remaining__tmp_copy_5 = sudoku__V_16_16;

#line 374 "sudoku.m"
              sudoku__Remaining_5 = sudoku__Remaining__tmp_copy_5;
#line 374 "sudoku.m"
            }
#line 374 "sudoku.m"
            continue;
#line 373 "sudoku.m"
          }
#line 366 "sudoku.m"
      }
#line 366 "sudoku.m"
      break;
#line 366 "sudoku.m"
    }
#line 360 "sudoku.m"
}

#line 338 "sudoku.m"
static void MR_CALL 
sudoku__print_row_6_p_0(
#line 338 "sudoku.m"
  MR_Word sudoku__STATE_VARIABLE_Puzzle_0_13,
#line 338 "sudoku.m"
  MR_Word * sudoku__STATE_VARIABLE_Puzzle_14,
#line 338 "sudoku.m"
  MR_Integer sudoku__Remaining_8,
#line 338 "sudoku.m"
  MR_Integer sudoku__Boxsize_9)
#line 338 "sudoku.m"
{
#line 343 "sudoku.m"
  while (MR_TRUE)
#line 343 "sudoku.m"
    {
#line 343 "sudoku.m"
      /* tailcall optimized into a loop */
#line 343 "sudoku.m"
      {
#line 343 "sudoku.m"
        MR_bool sudoku__succeeded;
#line 344 "sudoku.m"
        MR_Integer sudoku__V_17_17 = (MR_Integer) 0;
#line 344 "sudoku.m"
        MR_Integer sudoku__V_30_30;

#line 344 "sudoku.m"
        {
#line 344 "sudoku.m"
          sudoku__V_30_30 = mercury__int__mod_2_f_0(sudoku__Remaining_8, sudoku__Boxsize_9);
        }
#line 344 "sudoku.m"
        sudoku__succeeded = (sudoku__V_17_17 == sudoku__V_30_30);
#line 346 "sudoku.m"
        if (sudoku__succeeded)
#line 345 "sudoku.m"
          {
#line 345 "sudoku.m"
            MR_Char sudoku__V_18_18 = (MR_Char) 124;

#line 345 "sudoku.m"
            {
#line 345 "sudoku.m"
              mercury__io__write_char_3_p_0(sudoku__V_18_18);
            }
#line 345 "sudoku.m"
          }
#line 346 "sudoku.m"
        else
#line 345 "sudoku.m"
          {
#line 345 "sudoku.m"
          }
#line 348 "sudoku.m"
        sudoku__succeeded = (sudoku__Remaining_8 == (MR_Integer) 0);
#line 350 "sudoku.m"
        if (sudoku__succeeded)
#line 349 "sudoku.m"
          {
#line 349 "sudoku.m"
            {
#line 349 "sudoku.m"
              mercury__io__nl_2_p_0();
            }
#line 349 "sudoku.m"
            *sudoku__STATE_VARIABLE_Puzzle_14 = sudoku__STATE_VARIABLE_Puzzle_0_13;
#line 349 "sudoku.m"
          }
#line 350 "sudoku.m"
        else
#line 356 "sudoku.m"
          {
#line 356 "sudoku.m"
            MR_Integer sudoku__Int_11;
#line 356 "sudoku.m"
            MR_Word sudoku__STATE_VARIABLE_Puzzle_21_21;

#line 350 "sudoku.m"
            sudoku__succeeded = ((MR_tag((MR_Word) sudoku__STATE_VARIABLE_Puzzle_0_13)) == (MR_mktag((MR_Integer) 1)));
#line 350 "sudoku.m"
            if (sudoku__succeeded)
#line 350 "sudoku.m"
              {
#line 350 "sudoku.m"
                sudoku__Int_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), sudoku__STATE_VARIABLE_Puzzle_0_13, (MR_Integer) 0)));
#line 350 "sudoku.m"
                sudoku__STATE_VARIABLE_Puzzle_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), sudoku__STATE_VARIABLE_Puzzle_0_13, (MR_Integer) 1)));
#line 354 "sudoku.m"
                {
#line 354 "sudoku.m"
                  MR_Integer sudoku__V_26_26;
#line 354 "sudoku.m"
                  MR_Integer sudoku__V_28_28;
#line 353 "sudoku.m"
                  MR_Char sudoku__Digit_12;

#line 351 "sudoku.m"
                  {
#line 351 "sudoku.m"
                    sudoku__succeeded = mercury__char__int_to_digit_2_p_0(sudoku__Int_11, &sudoku__Digit_12);
                  }
#line 353 "sudoku.m"
                  if (sudoku__succeeded)
#line 352 "sudoku.m"
                    {
#line 352 "sudoku.m"
                      mercury__io__write_char_3_p_0(sudoku__Digit_12);
                    }
#line 353 "sudoku.m"
                  else
#line 353 "sudoku.m"
                    {
#line 353 "sudoku.m"
                      MR_Char sudoku__V_23_23 = (MR_Char) 46;

#line 353 "sudoku.m"
                      {
#line 353 "sudoku.m"
                        mercury__io__write_char_3_p_0(sudoku__V_23_23);
                      }
#line 353 "sudoku.m"
                    }
#line 355 "sudoku.m"
                  sudoku__V_28_28 = (MR_Integer) 1;
#line 355 "sudoku.m"
                  sudoku__V_26_26 = (sudoku__Remaining_8 - sudoku__V_28_28);
#line 355 "sudoku.m"
                  /* direct tailcall eliminated */
#line 355 "sudoku.m"
                  {
#line 355 "sudoku.m"
                    MR_Word sudoku__STATE_VARIABLE_Puzzle_0__tmp_copy_13 = sudoku__STATE_VARIABLE_Puzzle_21_21;
#line 355 "sudoku.m"
                    MR_Integer sudoku__Remaining__tmp_copy_8 = sudoku__V_26_26;

#line 355 "sudoku.m"
                    sudoku__Remaining_8 = sudoku__Remaining__tmp_copy_8;
#line 355 "sudoku.m"
                    sudoku__STATE_VARIABLE_Puzzle_0_13 = sudoku__STATE_VARIABLE_Puzzle_0__tmp_copy_13;
#line 355 "sudoku.m"
                  }
#line 355 "sudoku.m"
                  continue;
#line 354 "sudoku.m"
                }
#line 350 "sudoku.m"
              }
#line 350 "sudoku.m"
            else
#line 356 "sudoku.m"
              {
#line 356 "sudoku.m"
                {
#line 356 "sudoku.m"
                  mercury__io__nl_2_p_0();
                }
#line 356 "sudoku.m"
                *sudoku__STATE_VARIABLE_Puzzle_14 = sudoku__STATE_VARIABLE_Puzzle_0_13;
#line 356 "sudoku.m"
              }
#line 356 "sudoku.m"
          }
#line 343 "sudoku.m"
      }
#line 343 "sudoku.m"
      break;
#line 343 "sudoku.m"
    }
#line 338 "sudoku.m"
}

#line 325 "sudoku.m"
static void MR_CALL 
sudoku__print_chunk_7_p_0(
#line 325 "sudoku.m"
  MR_Word sudoku__STATE_VARIABLE_Puzzle_0_13,
#line 325 "sudoku.m"
  MR_Word * sudoku__STATE_VARIABLE_Puzzle_14,
#line 325 "sudoku.m"
  MR_Integer sudoku__Rowsleft_9,
#line 325 "sudoku.m"
  MR_Integer sudoku__Size_10,
#line 325 "sudoku.m"
  MR_Integer sudoku__Boxsize_11)
#line 325 "sudoku.m"
{
#line 333 "sudoku.m"
  while (MR_TRUE)
#line 333 "sudoku.m"
    {
#line 333 "sudoku.m"
      /* tailcall optimized into a loop */
#line 333 "sudoku.m"
      {
#line 333 "sudoku.m"
        MR_bool sudoku__succeeded = (sudoku__Rowsleft_9 == (MR_Integer) 0);

#line 333 "sudoku.m"
        if (sudoku__succeeded)
#line 332 "sudoku.m"
          *sudoku__STATE_VARIABLE_Puzzle_14 = sudoku__STATE_VARIABLE_Puzzle_0_13;
#line 333 "sudoku.m"
        else
#line 333 "sudoku.m"
          {
#line 333 "sudoku.m"
            MR_Word sudoku__STATE_VARIABLE_Puzzle_17_17;
#line 333 "sudoku.m"
            MR_Integer sudoku__V_20_20;
#line 333 "sudoku.m"
            MR_Integer sudoku__V_22_22;

#line 333 "sudoku.m"
            {
#line 333 "sudoku.m"
              sudoku__print_row_6_p_0(sudoku__STATE_VARIABLE_Puzzle_0_13, &sudoku__STATE_VARIABLE_Puzzle_17_17, sudoku__Size_10, sudoku__Boxsize_11);
            }
#line 334 "sudoku.m"
            sudoku__V_22_22 = (MR_Integer) 1;
#line 334 "sudoku.m"
            sudoku__V_20_20 = (sudoku__Rowsleft_9 - sudoku__V_22_22);
#line 334 "sudoku.m"
            /* direct tailcall eliminated */
#line 334 "sudoku.m"
            {
#line 334 "sudoku.m"
              MR_Word sudoku__STATE_VARIABLE_Puzzle_0__tmp_copy_13 = sudoku__STATE_VARIABLE_Puzzle_17_17;
#line 334 "sudoku.m"
              MR_Integer sudoku__Rowsleft__tmp_copy_9 = sudoku__V_20_20;

#line 334 "sudoku.m"
              sudoku__Rowsleft_9 = sudoku__Rowsleft__tmp_copy_9;
#line 334 "sudoku.m"
              sudoku__STATE_VARIABLE_Puzzle_0_13 = sudoku__STATE_VARIABLE_Puzzle_0__tmp_copy_13;
#line 334 "sudoku.m"
            }
#line 334 "sudoku.m"
            continue;
#line 333 "sudoku.m"
          }
#line 333 "sudoku.m"
      }
#line 333 "sudoku.m"
      break;
#line 333 "sudoku.m"
    }
#line 325 "sudoku.m"
}

#line 310 "sudoku.m"
static void MR_CALL 
sudoku__print_puzzle_5_p_0(
#line 310 "sudoku.m"
  MR_Word sudoku__Puzzle_6,
#line 310 "sudoku.m"
  MR_Integer sudoku__Size_7,
#line 310 "sudoku.m"
  MR_Integer sudoku__Boxsize_8)
#line 310 "sudoku.m"
{
#line 316 "sudoku.m"
  while (MR_TRUE)
#line 316 "sudoku.m"
    {
#line 316 "sudoku.m"
      /* tailcall optimized into a loop */
#line 316 "sudoku.m"
      {
#line 316 "sudoku.m"
        MR_bool sudoku__succeeded;

#line 317 "sudoku.m"
        {
#line 317 "sudoku.m"
          sudoku__print_hbar_4_p_0(sudoku__Size_7, sudoku__Boxsize_8);
        }
#line 318 "sudoku.m"
        sudoku__succeeded = (sudoku__Puzzle_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 320 "sudoku.m"
        if (sudoku__succeeded)
#line 318 "sudoku.m"
          {
#line 318 "sudoku.m"
          }
#line 320 "sudoku.m"
        else
#line 320 "sudoku.m"
          {
#line 320 "sudoku.m"
            MR_Word sudoku__Puzzle1_10;

#line 320 "sudoku.m"
            {
#line 320 "sudoku.m"
              sudoku__print_chunk_7_p_0(sudoku__Puzzle_6, &sudoku__Puzzle1_10, sudoku__Boxsize_8, sudoku__Size_7, sudoku__Boxsize_8);
            }
#line 321 "sudoku.m"
            /* direct tailcall eliminated */
#line 321 "sudoku.m"
            {
#line 321 "sudoku.m"
              MR_Word sudoku__Puzzle__tmp_copy_6 = sudoku__Puzzle1_10;

#line 321 "sudoku.m"
              sudoku__Puzzle_6 = sudoku__Puzzle__tmp_copy_6;
#line 321 "sudoku.m"
            }
#line 321 "sudoku.m"
            continue;
#line 320 "sudoku.m"
          }
#line 316 "sudoku.m"
      }
#line 316 "sudoku.m"
      break;
#line 316 "sudoku.m"
    }
#line 310 "sudoku.m"
}

#line 198 "sudoku.m"
static void MR_CALL 
sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_1(
#line 198 "sudoku.m"
  void * sudoku__env_ptr_arg)
#line 198 "sudoku.m"
{
#line 198 "sudoku.m"
  {
#line 198 "sudoku.m"
    struct sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0_s * sudoku__env_ptr = (struct sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0_s *) sudoku__env_ptr_arg;

#line 996 "Mercury/cs/sudoku.c"
    (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__TypeInfo_23_23 = (MR_Word) &sudoku_scalar_common_1[0];
#line 200 "sudoku.m"
    {
#line 200 "sudoku.m"
      (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__TypeInfo_23_23, ((MR_Box) (*((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__UpdatedPuzzle_6))), ((MR_Box) ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__V_22_22)));
    }
#line 200 "sudoku.m"
    if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 200 "sudoku.m"
      {
#line 200 "sudoku.m"
        ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__cont)((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__cont_env_ptr);
#line 200 "sudoku.m"
        return;
      }
#line 198 "sudoku.m"
  }
#line 198 "sudoku.m"
}

#line 177 "sudoku.m"
static void MR_CALL 
sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0(
#line 177 "sudoku.m"
  MR_Integer sudoku__CellIndex_4,
#line 177 "sudoku.m"
  MR_Word sudoku__Puzzle_5,
#line 177 "sudoku.m"
  MR_Word * sudoku__UpdatedPuzzle_6,
#line 177 "sudoku.m"
  MR_Cont sudoku__cont,
#line 177 "sudoku.m"
  void * sudoku__cont_env_ptr)
#line 177 "sudoku.m"
{
#line 177 "sudoku.m"
  {
#line 177 "sudoku.m"
    struct sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0_s sudoku__env;
#line 177 "sudoku.m"
    struct sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0_s * sudoku__env_ptr = &sudoku__env;

#line 177 "sudoku.m"
    (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__UpdatedPuzzle_6 = sudoku__UpdatedPuzzle_6;
#line 177 "sudoku.m"
    (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__cont = sudoku__cont;
#line 177 "sudoku.m"
    (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__cont_env_ptr = sudoku__cont_env_ptr;
#line 188 "sudoku.m"
    {
#line 185 "sudoku.m"
      MR_Word sudoku__TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 185 "sudoku.m"
      MR_Integer sudoku__PuzzleLen_7;

#line 185 "sudoku.m"
      {
#line 185 "sudoku.m"
        mercury__list__length_2_p_0(sudoku__TypeCtorInfo_19_19, sudoku__Puzzle_5, &sudoku__PuzzleLen_7);
      }
#line 186 "sudoku.m"
      (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = (sudoku__CellIndex_4 >= sudoku__PuzzleLen_7);
#line 188 "sudoku.m"
      if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 187 "sudoku.m"
        {
#line 187 "sudoku.m"
          *((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__UpdatedPuzzle_6) = sudoku__Puzzle_5;
#line 187 "sudoku.m"
          {
#line 187 "sudoku.m"
            ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__cont)((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__cont_env_ptr);
#line 187 "sudoku.m"
            return;
          }
#line 187 "sudoku.m"
        }
#line 188 "sudoku.m"
      else
#line 195 "sudoku.m"
        {
#line 195 "sudoku.m"
          MR_Word sudoku__PossibleValues_8;
#line 189 "sudoku.m"
          MR_Word sudoku__TypeCtorInfo_20_20;
#line 189 "sudoku.m"
          MR_Word sudoku__TypeCtorInfo_14_34;
#line 189 "sudoku.m"
          MR_Word sudoku__TypeCtorInfo_42_71 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 189 "sudoku.m"
          MR_Word sudoku__TypeInfo_43_72;
#line 189 "sudoku.m"
          MR_Word sudoku__TypeCtorInfo_24_94;
#line 189 "sudoku.m"
          MR_Integer sudoku__Len_9;
#line 189 "sudoku.m"
          MR_Word sudoku__RowValues_27;
#line 189 "sudoku.m"
          MR_Word sudoku__CollumValues_28;
#line 189 "sudoku.m"
          MR_Word sudoku__CountryValues_29;
#line 189 "sudoku.m"
          MR_Word sudoku__TempList_30;
#line 189 "sudoku.m"
          MR_Word sudoku__TempList2_31;
#line 189 "sudoku.m"
          MR_Word sudoku__RowList_40;
#line 189 "sudoku.m"
          MR_Word sudoku__CollumList_41;
#line 189 "sudoku.m"
          MR_Word sudoku__CountryList_42;
#line 189 "sudoku.m"
          MR_Integer sudoku__RowIndex_43;
#line 189 "sudoku.m"
          MR_Integer sudoku__CollumIndex_44;
#line 189 "sudoku.m"
          MR_Integer sudoku__CountryIndex_45;
#line 189 "sudoku.m"
          MR_Word sudoku__TempRow_46;
#line 189 "sudoku.m"
          MR_Word sudoku__TempCollum_47;
#line 189 "sudoku.m"
          MR_Word sudoku__TempCountry_48;
#line 189 "sudoku.m"
          MR_Integer sudoku__V_49_49 = (MR_Integer) 0;
#line 189 "sudoku.m"
          MR_Integer sudoku__V_50_50 = (MR_Integer) 9;
#line 189 "sudoku.m"
          MR_Integer sudoku__V_51_51 = (MR_Integer) 9;
#line 189 "sudoku.m"
          MR_Integer sudoku__V_52_52;
#line 189 "sudoku.m"
          MR_Integer sudoku__V_53_53;
#line 189 "sudoku.m"
          MR_Integer sudoku__V_54_54;
#line 189 "sudoku.m"
          MR_Integer sudoku__V_55_55;
#line 189 "sudoku.m"
          MR_Integer sudoku__V_56_56;
#line 189 "sudoku.m"
          MR_Integer sudoku__V_57_57;
#line 189 "sudoku.m"
          MR_Integer sudoku__V_58_58;
#line 189 "sudoku.m"
          MR_Integer sudoku__V_59_59;
#line 189 "sudoku.m"
          MR_Integer sudoku__V_68_68;
#line 189 "sudoku.m"
          MR_Integer sudoku__V_69_69;
#line 189 "sudoku.m"
          MR_Integer sudoku__V_70_70;
#line 189 "sudoku.m"
          MR_Word sudoku__FullList_75;
#line 189 "sudoku.m"
          MR_Integer sudoku__V_13_13 = (MR_Integer) 0;
#line 253 "sudoku.m"
          MR_Integer sudoku__V_60_60;
#line 297 "sudoku.m"
          MR_Box sudoku__conv0_TempRow_46;
#line 298 "sudoku.m"
          MR_Box sudoku__conv1_TempCollum_47;
#line 299 "sudoku.m"
          MR_Box sudoku__conv2_TempCountry_48;

#line 245 "sudoku.m"
          {
#line 245 "sudoku.m"
            grouping__group_list_5_p_0(sudoku__TypeCtorInfo_42_71, sudoku__V_49_49, sudoku__V_50_50, sudoku__V_51_51, sudoku__Puzzle_5, &sudoku__RowList_40);
          }
#line 246 "sudoku.m"
          sudoku__V_52_52 = (MR_Integer) 8;
#line 246 "sudoku.m"
          sudoku__V_53_53 = (MR_Integer) 9;
#line 246 "sudoku.m"
          sudoku__V_54_54 = (MR_Integer) 9;
#line 246 "sudoku.m"
          {
#line 246 "sudoku.m"
            grouping__group_list_5_p_0(sudoku__TypeCtorInfo_42_71, sudoku__V_52_52, sudoku__V_53_53, sudoku__V_54_54, sudoku__Puzzle_5, &sudoku__CollumList_41);
          }
#line 247 "sudoku.m"
          sudoku__V_55_55 = (MR_Integer) 0;
#line 247 "sudoku.m"
          sudoku__V_56_56 = (MR_Integer) 3;
#line 247 "sudoku.m"
          sudoku__V_57_57 = (MR_Integer) 3;
#line 247 "sudoku.m"
          {
#line 247 "sudoku.m"
            grouping__group_list_5_p_0(sudoku__TypeCtorInfo_42_71, sudoku__V_55_55, sudoku__V_56_56, sudoku__V_57_57, sudoku__Puzzle_5, &sudoku__CountryList_42);
          }
#line 250 "sudoku.m"
          sudoku__V_58_58 = (MR_Integer) 9;
#line 250 "sudoku.m"
          {
#line 250 "sudoku.m"
            sudoku__RowIndex_43 = mercury__int__div_2_f_0(sudoku__CellIndex_4, sudoku__V_58_58);
          }
#line 251 "sudoku.m"
          sudoku__V_59_59 = (MR_Integer) 9;
#line 251 "sudoku.m"
          {
#line 251 "sudoku.m"
            sudoku__CollumIndex_44 = mercury__int__mod_2_f_0(sudoku__CellIndex_4, sudoku__V_59_59);
          }
#line 253 "sudoku.m"
          sudoku__V_60_60 = (MR_Integer) 2;
#line 253 "sudoku.m"
          (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = (sudoku__RowIndex_43 <= sudoku__V_60_60);
#line 267 "sudoku.m"
          if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 260 "sudoku.m"
            {
#line 257 "sudoku.m"
              MR_Integer sudoku__V_61_61 = (MR_Integer) 2;

#line 257 "sudoku.m"
              (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = (sudoku__CollumIndex_44 <= sudoku__V_61_61);
#line 260 "sudoku.m"
              if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 259 "sudoku.m"
                sudoku__CountryIndex_45 = (MR_Integer) 0;
#line 260 "sudoku.m"
              else
#line 264 "sudoku.m"
                {
#line 261 "sudoku.m"
                  MR_Integer sudoku__V_62_62 = (MR_Integer) 5;

#line 261 "sudoku.m"
                  (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = (sudoku__CollumIndex_44 <= sudoku__V_62_62);
#line 264 "sudoku.m"
                  if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 263 "sudoku.m"
                    sudoku__CountryIndex_45 = (MR_Integer) 1;
#line 264 "sudoku.m"
                  else
#line 265 "sudoku.m"
                    sudoku__CountryIndex_45 = (MR_Integer) 2;
#line 264 "sudoku.m"
                }
#line 260 "sudoku.m"
            }
#line 267 "sudoku.m"
          else
#line 282 "sudoku.m"
            {
#line 268 "sudoku.m"
              MR_Integer sudoku__V_63_63 = (MR_Integer) 5;

#line 268 "sudoku.m"
              (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = (sudoku__RowIndex_43 <= sudoku__V_63_63);
#line 282 "sudoku.m"
              if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 275 "sudoku.m"
                {
#line 272 "sudoku.m"
                  MR_Integer sudoku__V_64_64 = (MR_Integer) 2;

#line 272 "sudoku.m"
                  (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = (sudoku__CollumIndex_44 <= sudoku__V_64_64);
#line 275 "sudoku.m"
                  if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 274 "sudoku.m"
                    sudoku__CountryIndex_45 = (MR_Integer) 3;
#line 275 "sudoku.m"
                  else
#line 279 "sudoku.m"
                    {
#line 276 "sudoku.m"
                      MR_Integer sudoku__V_65_65 = (MR_Integer) 5;

#line 276 "sudoku.m"
                      (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = (sudoku__CollumIndex_44 <= sudoku__V_65_65);
#line 279 "sudoku.m"
                      if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 278 "sudoku.m"
                        sudoku__CountryIndex_45 = (MR_Integer) 4;
#line 279 "sudoku.m"
                      else
#line 280 "sudoku.m"
                        sudoku__CountryIndex_45 = (MR_Integer) 5;
#line 279 "sudoku.m"
                    }
#line 275 "sudoku.m"
                }
#line 282 "sudoku.m"
              else
#line 288 "sudoku.m"
                {
#line 285 "sudoku.m"
                  MR_Integer sudoku__V_66_66 = (MR_Integer) 2;

#line 285 "sudoku.m"
                  (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = (sudoku__CollumIndex_44 <= sudoku__V_66_66);
#line 288 "sudoku.m"
                  if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 287 "sudoku.m"
                    sudoku__CountryIndex_45 = (MR_Integer) 6;
#line 288 "sudoku.m"
                  else
#line 292 "sudoku.m"
                    {
#line 289 "sudoku.m"
                      MR_Integer sudoku__V_67_67 = (MR_Integer) 5;

#line 289 "sudoku.m"
                      (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = (sudoku__CollumIndex_44 <= sudoku__V_67_67);
#line 292 "sudoku.m"
                      if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 291 "sudoku.m"
                        sudoku__CountryIndex_45 = (MR_Integer) 7;
#line 292 "sudoku.m"
                      else
#line 293 "sudoku.m"
                        sudoku__CountryIndex_45 = (MR_Integer) 8;
#line 292 "sudoku.m"
                    }
#line 288 "sudoku.m"
                }
#line 282 "sudoku.m"
            }
#line 1319 "Mercury/cs/sudoku.c"
          sudoku__TypeInfo_43_72 = (MR_Word) &sudoku_scalar_common_1[0];
#line 297 "sudoku.m"
          {
#line 297 "sudoku.m"
            (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = mercury__list__index0_3_p_0(sudoku__TypeInfo_43_72, sudoku__RowList_40, sudoku__RowIndex_43, &sudoku__conv0_TempRow_46);
          }
#line 297 "sudoku.m"
          if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 297 "sudoku.m"
            {
#line 297 "sudoku.m"
              sudoku__TempRow_46 = ((MR_Word) sudoku__conv0_TempRow_46);
#line 297 "sudoku.m"
              (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = MR_TRUE;
#line 297 "sudoku.m"
            }
#line 189 "sudoku.m"
          if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 189 "sudoku.m"
            {
#line 298 "sudoku.m"
              {
#line 298 "sudoku.m"
                (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = mercury__list__index0_3_p_0(sudoku__TypeInfo_43_72, sudoku__CollumList_41, sudoku__CollumIndex_44, &sudoku__conv1_TempCollum_47);
              }
#line 298 "sudoku.m"
              if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 298 "sudoku.m"
                {
#line 298 "sudoku.m"
                  sudoku__TempCollum_47 = ((MR_Word) sudoku__conv1_TempCollum_47);
#line 298 "sudoku.m"
                  (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = MR_TRUE;
#line 298 "sudoku.m"
                }
#line 189 "sudoku.m"
              if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 189 "sudoku.m"
                {
#line 299 "sudoku.m"
                  {
#line 299 "sudoku.m"
                    (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = mercury__list__index0_3_p_0(sudoku__TypeInfo_43_72, sudoku__CountryList_42, sudoku__CountryIndex_45, &sudoku__conv2_TempCountry_48);
                  }
#line 299 "sudoku.m"
                  if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 299 "sudoku.m"
                    {
#line 299 "sudoku.m"
                      sudoku__TempCountry_48 = ((MR_Word) sudoku__conv2_TempCountry_48);
#line 299 "sudoku.m"
                      (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = MR_TRUE;
#line 299 "sudoku.m"
                    }
#line 189 "sudoku.m"
                  if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 189 "sudoku.m"
                    {
#line 300 "sudoku.m"
                      sudoku__V_68_68 = (MR_Integer) -1;
#line 300 "sudoku.m"
                      {
#line 300 "sudoku.m"
                        mercury__list__delete_all_3_p_1(sudoku__TypeCtorInfo_42_71, sudoku__TempRow_46, ((MR_Box) (sudoku__V_68_68)), &sudoku__RowValues_27);
                      }
#line 301 "sudoku.m"
                      sudoku__V_69_69 = (MR_Integer) -1;
#line 301 "sudoku.m"
                      {
#line 301 "sudoku.m"
                        mercury__list__delete_all_3_p_1(sudoku__TypeCtorInfo_42_71, sudoku__TempCollum_47, ((MR_Box) (sudoku__V_69_69)), &sudoku__CollumValues_28);
                      }
#line 302 "sudoku.m"
                      sudoku__V_70_70 = (MR_Integer) -1;
#line 302 "sudoku.m"
                      {
#line 302 "sudoku.m"
                        mercury__list__delete_all_3_p_1(sudoku__TypeCtorInfo_42_71, sudoku__TempCountry_48, ((MR_Box) (sudoku__V_70_70)), &sudoku__CountryValues_29);
                      }
#line 1399 "Mercury/cs/sudoku.c"
                      sudoku__TypeCtorInfo_14_34 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 211 "sudoku.m"
                      {
#line 211 "sudoku.m"
                        mercury__list__append_3_p_1(sudoku__TypeCtorInfo_14_34, sudoku__RowValues_27, sudoku__CollumValues_28, &sudoku__TempList_30);
                      }
#line 212 "sudoku.m"
                      {
#line 212 "sudoku.m"
                        mercury__list__append_3_p_1(sudoku__TypeCtorInfo_14_34, sudoku__TempList_30, sudoku__CountryValues_29, &sudoku__TempList2_31);
                      }
#line 173 "sudoku.m"
                      sudoku__FullList_75 = (MR_Word) MR_mkword(MR_mktag(1), &sudoku_scalar_common_1[9]);
#line 1413 "Mercury/cs/sudoku.c"
                      sudoku__TypeCtorInfo_24_94 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 174 "sudoku.m"
                      {
#line 174 "sudoku.m"
                        mercury__list__delete_elems_3_p_0(sudoku__TypeCtorInfo_24_94, sudoku__FullList_75, sudoku__TempList2_31, &sudoku__PossibleValues_8);
                      }
#line 1420 "Mercury/cs/sudoku.c"
                      sudoku__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 190 "sudoku.m"
                      {
#line 190 "sudoku.m"
                        mercury__list__length_2_p_0(sudoku__TypeCtorInfo_20_20, sudoku__PossibleValues_8, &sudoku__Len_9);
                      }
#line 191 "sudoku.m"
                      (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = (sudoku__Len_9 == (MR_Integer) 1);
#line 189 "sudoku.m"
                    }
#line 189 "sudoku.m"
                }
#line 189 "sudoku.m"
            }
#line 195 "sudoku.m"
          if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 192 "sudoku.m"
            {
#line 192 "sudoku.m"
              MR_Word sudoku__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 192 "sudoku.m"
              MR_Integer sudoku__Head_10;
#line 192 "sudoku.m"
              MR_Integer sudoku__V_14_14 = (MR_Integer) 0;
#line 192 "sudoku.m"
              MR_Integer sudoku__V_15_15;
#line 192 "sudoku.m"
              MR_Integer sudoku__V_16_16;
#line 192 "sudoku.m"
              MR_Box sudoku__conv3_Head_10;

#line 192 "sudoku.m"
              {
#line 192 "sudoku.m"
                (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = mercury__list__index0_3_p_0(sudoku__TypeCtorInfo_21_21, sudoku__PossibleValues_8, sudoku__V_14_14, &sudoku__conv3_Head_10);
              }
#line 192 "sudoku.m"
              if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 192 "sudoku.m"
                {
#line 192 "sudoku.m"
                  sudoku__Head_10 = ((MR_Integer) sudoku__conv3_Head_10);
#line 192 "sudoku.m"
                  (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = MR_TRUE;
#line 192 "sudoku.m"
                }
#line 192 "sudoku.m"
              if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 192 "sudoku.m"
                {
#line 193 "sudoku.m"
                  sudoku__V_16_16 = (MR_Integer) 1;
#line 193 "sudoku.m"
                  sudoku__V_15_15 = (sudoku__CellIndex_4 + sudoku__V_16_16);
#line 193 "sudoku.m"
                  {
#line 193 "sudoku.m"
                    (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded = mercury__list__replace_nth_4_p_0(sudoku__TypeCtorInfo_21_21, sudoku__Puzzle_5, sudoku__V_15_15, ((MR_Box) (sudoku__Head_10)), (sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__UpdatedPuzzle_6);
                  }
#line 192 "sudoku.m"
                }
#line 192 "sudoku.m"
              if ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__succeeded)
#line 192 "sudoku.m"
                {
#line 192 "sudoku.m"
                  ((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__cont)((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__cont_env_ptr);
#line 192 "sudoku.m"
                  return;
                }
#line 192 "sudoku.m"
            }
#line 195 "sudoku.m"
          else
#line 198 "sudoku.m"
            {
#line 198 "sudoku.m"
              MR_Integer sudoku__V_17_17;
#line 198 "sudoku.m"
              MR_Integer sudoku__V_18_18;

#line 197 "sudoku.m"
              *((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__UpdatedPuzzle_6) = sudoku__Puzzle_5;
#line 200 "sudoku.m"
              sudoku__V_18_18 = (MR_Integer) 1;
#line 200 "sudoku.m"
              sudoku__V_17_17 = (sudoku__CellIndex_4 + sudoku__V_18_18);
#line 200 "sudoku.m"
              {
#line 200 "sudoku.m"
                sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0(sudoku__V_17_17, *((sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__UpdatedPuzzle_6), &(sudoku__env_ptr)->sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_env_0__V_22_22, sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0_1, sudoku__env_ptr);
              }
#line 198 "sudoku.m"
            }
#line 195 "sudoku.m"
        }
#line 188 "sudoku.m"
    }
#line 177 "sudoku.m"
  }
#line 177 "sudoku.m"
}

#line 106 "sudoku.m"
static void MR_CALL 
sudoku__load_puzzle_3_p_0(
#line 106 "sudoku.m"
  MR_Word * sudoku__Puzzle_4)
#line 106 "sudoku.m"
{
#line 113 "sudoku.m"
  {
#line 113 "sudoku.m"
    MR_bool sudoku__succeeded;
#line 113 "sudoku.m"
    MR_Word sudoku__Result_6;

#line 114 "sudoku.m"
    {
#line 114 "sudoku.m"
      mercury__io__read_char_3_p_0(&sudoku__Result_6);
    }
#line 117 "sudoku.m"
#line 117 "sudoku.m"
    switch (MR_tag((MR_Word) sudoku__Result_6)) {
#line 117 "sudoku.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 117 "sudoku.m"
      case (MR_Integer) 0:
#line 116 "sudoku.m"
        *sudoku__Puzzle_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 117 "sudoku.m"
        break;
#line 117 "sudoku.m"
      case (MR_Integer) 1:
#line 117 "sudoku.m"
        {
#line 117 "sudoku.m"
          MR_Char sudoku__Char_8 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), sudoku__Result_6, (MR_Integer) 0)));
#line 117 "sudoku.m"
          MR_Word sudoku__Puzzle1_10;
#line 120 "sudoku.m"
          MR_Integer sudoku__Int_9;

#line 126 "sudoku.m"
          {
#line 126 "sudoku.m"
            sudoku__load_puzzle_3_p_0(&sudoku__Puzzle1_10);
          }
#line 118 "sudoku.m"
          {
#line 118 "sudoku.m"
            sudoku__succeeded = mercury__char__digit_to_int_2_p_0(sudoku__Char_8, &sudoku__Int_9);
          }
#line 120 "sudoku.m"
          if (sudoku__succeeded)
#line 119 "sudoku.m"
            {
#line 119 "sudoku.m"
              MR_Word base;
#line 119 "sudoku.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 119 "sudoku.m"
              *sudoku__Puzzle_4 = base;
#line 119 "sudoku.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (sudoku__Int_9));
#line 119 "sudoku.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (sudoku__Puzzle1_10));
#line 119 "sudoku.m"
            }
#line 120 "sudoku.m"
          else
#line 124 "sudoku.m"
            {
#line 122 "sudoku.m"
#line 122 "sudoku.m"
              switch (sudoku__Char_8) {
#line 122 "sudoku.m"
                default:
#line 122 "sudoku.m"
                  sudoku__succeeded = MR_FALSE;
#line 122 "sudoku.m"
                  break;
#line 122 "sudoku.m"
                case (MR_Char) 32:
#line 122 "sudoku.m"
                  sudoku__succeeded = MR_TRUE;
#line 122 "sudoku.m"
                  break;
#line 122 "sudoku.m"
                case (MR_Char) 46:
#line 122 "sudoku.m"
                  sudoku__succeeded = MR_TRUE;
#line 122 "sudoku.m"
                  break;
#line 122 "sudoku.m"
                case (MR_Char) 95:
#line 122 "sudoku.m"
                  sudoku__succeeded = MR_TRUE;
#line 122 "sudoku.m"
                  break;
#line 122 "sudoku.m"
              }
#line 124 "sudoku.m"
              if (sudoku__succeeded)
#line 123 "sudoku.m"
                {
#line 123 "sudoku.m"
                  MR_Integer sudoku__V_14_14 = (MR_Integer) -1;

#line 123 "sudoku.m"
                  {
#line 123 "sudoku.m"
                    MR_Word base;
#line 123 "sudoku.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 123 "sudoku.m"
                    *sudoku__Puzzle_4 = base;
#line 123 "sudoku.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (sudoku__V_14_14));
#line 123 "sudoku.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (sudoku__Puzzle1_10));
#line 123 "sudoku.m"
                  }
#line 123 "sudoku.m"
                }
#line 124 "sudoku.m"
              else
#line 124 "sudoku.m"
                *sudoku__Puzzle_4 = sudoku__Puzzle1_10;
#line 124 "sudoku.m"
            }
#line 117 "sudoku.m"
        }
#line 117 "sudoku.m"
        break;
#line 117 "sudoku.m"
      case (MR_Integer) 2:
#line 116 "sudoku.m"
        *sudoku__Puzzle_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 117 "sudoku.m"
        break;
#line 117 "sudoku.m"
    }
#line 113 "sudoku.m"
  }
#line 106 "sudoku.m"
}

#line 79 "sudoku.m"
static void MR_CALL 
main_2_p_0_1(
#line 79 "sudoku.m"
  void * sudoku__env_ptr_arg)
#line 79 "sudoku.m"
{
#line 79 "sudoku.m"
  {
#line 79 "sudoku.m"
    struct sudoku__main_2_p_0_env_0_s * sudoku__env_ptr = (struct sudoku__main_2_p_0_env_0_s *) sudoku__env_ptr_arg;

#line 79 "sudoku.m"
    MR_builtin_longjmp((sudoku__env_ptr)->sudoku__main_2_p_0_env_0__commit_0, 1);
#line 79 "sudoku.m"
  }
#line 79 "sudoku.m"
}

#line 79 "sudoku.m"
static void MR_CALL 
main_2_p_0_2(
#line 79 "sudoku.m"
  void * sudoku__env_ptr_arg)
#line 79 "sudoku.m"
{
#line 79 "sudoku.m"
  {
#line 79 "sudoku.m"
    struct sudoku__main_2_p_0_env_0_s * sudoku__env_ptr = (struct sudoku__main_2_p_0_env_0_s *) sudoku__env_ptr_arg;

#line 79 "sudoku.m"
    if (MR_builtin_setjmp((sudoku__env_ptr)->sudoku__main_2_p_0_env_0__commit_0) == 0)
#line 79 "sudoku.m"
      {
#line 140 "sudoku.m"
        {
#line 140 "sudoku.m"
          MR_Integer sudoku__V_44_44 = (MR_Integer) 0;

#line 142 "sudoku.m"
          {
#line 142 "sudoku.m"
            sudoku__findAndUpdate_cells_haveOnePossibleValue_3_p_0(sudoku__V_44_44, (sudoku__env_ptr)->sudoku__main_2_p_0_env_0__Puzzle_25, &(sudoku__env_ptr)->sudoku__main_2_p_0_env_0__OutputPuzzle_28, main_2_p_0_1, sudoku__env_ptr);
          }
#line 140 "sudoku.m"
        }
#line 79 "sudoku.m"
        (sudoku__env_ptr)->sudoku__main_2_p_0_env_0__succeeded = MR_FALSE;
#line 79 "sudoku.m"
      }
#line 79 "sudoku.m"
    else
#line 79 "sudoku.m"
      (sudoku__env_ptr)->sudoku__main_2_p_0_env_0__succeeded = MR_TRUE;
#line 79 "sudoku.m"
  }
#line 79 "sudoku.m"
}

#line 19 "sudoku.m"
void MR_CALL 
main_2_p_0(void)
#line 19 "sudoku.m"
{
#line 19 "sudoku.m"
  {
#line 19 "sudoku.m"
    struct sudoku__main_2_p_0_env_0_s sudoku__env;
#line 19 "sudoku.m"
    struct sudoku__main_2_p_0_env_0_s * sudoku__env_ptr = &sudoku__env;

#line 25 "sudoku.m"
    {
#line 25 "sudoku.m"
      MR_Word sudoku__Args_4;
#line 36 "sudoku.m"
      MR_String sudoku__File_5;
#line 27 "sudoku.m"
      MR_Word sudoku__V_11_11;

#line 26 "sudoku.m"
      {
#line 26 "sudoku.m"
        mercury__io__command_line_arguments_3_p_0(&sudoku__Args_4);
      }
#line 27 "sudoku.m"
      (sudoku__env_ptr)->sudoku__main_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) sudoku__Args_4)) == (MR_mktag((MR_Integer) 1)));
#line 27 "sudoku.m"
      if ((sudoku__env_ptr)->sudoku__main_2_p_0_env_0__succeeded)
#line 27 "sudoku.m"
        {
#line 27 "sudoku.m"
          sudoku__File_5 = ((MR_String) (MR_hl_field(MR_mktag(1), sudoku__Args_4, (MR_Integer) 0)));
#line 27 "sudoku.m"
          sudoku__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), sudoku__Args_4, (MR_Integer) 1)));
#line 27 "sudoku.m"
          (sudoku__env_ptr)->sudoku__main_2_p_0_env_0__succeeded = (sudoku__V_11_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 27 "sudoku.m"
        }
#line 36 "sudoku.m"
      if ((sudoku__env_ptr)->sudoku__main_2_p_0_env_0__succeeded)
#line 28 "sudoku.m"
        {
#line 28 "sudoku.m"
          MR_Word sudoku__Result_6;

#line 28 "sudoku.m"
          {
#line 28 "sudoku.m"
            mercury__io__see_4_p_0(sudoku__File_5, &sudoku__Result_6);
          }
#line 32 "sudoku.m"
          if ((sudoku__Result_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 29 "sudoku.m"
            {
#line 72 "sudoku.m"
              {
#line 72 "sudoku.m"
                sudoku__load_puzzle_3_p_0(&(sudoku__env_ptr)->sudoku__main_2_p_0_env_0__Puzzle_25);
              }
#line 74 "sudoku.m"
              (sudoku__env_ptr)->sudoku__main_2_p_0_env_0__succeeded = ((sudoku__env_ptr)->sudoku__main_2_p_0_env_0__Puzzle_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 77 "sudoku.m"
              if ((sudoku__env_ptr)->sudoku__main_2_p_0_env_0__succeeded)
#line 75 "sudoku.m"
                {
#line 75 "sudoku.m"
                  MR_String sudoku__V_30_30 = (MR_String) "Error reading puzzle\n";
#line 75 "sudoku.m"
                  MR_Integer sudoku__V_32_32;

#line 75 "sudoku.m"
                  {
#line 75 "sudoku.m"
                    mercury__io__write_string_3_p_0(sudoku__V_30_30);
                  }
#line 76 "sudoku.m"
                  sudoku__V_32_32 = (MR_Integer) 1;
#line 76 "sudoku.m"
                  {
#line 76 "sudoku.m"
                    mercury__io__set_exit_status_3_p_0(sudoku__V_32_32);
                  }
#line 75 "sudoku.m"
                }
#line 77 "sudoku.m"
              else
#line 83 "sudoku.m"
                {
#line 83 "sudoku.m"
                  MR_Integer sudoku__Size_26;
#line 83 "sudoku.m"
                  MR_Integer sudoku__Boxsize_27;
#line 77 "sudoku.m"
                  MR_Word sudoku__TypeCtorInfo_22_41 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 77 "sudoku.m"
                  MR_Integer sudoku__V_34_34;

#line 77 "sudoku.m"
                  {
#line 77 "sudoku.m"
                    sudoku__V_34_34 = mercury__list__length_1_f_0(sudoku__TypeCtorInfo_22_41, (sudoku__env_ptr)->sudoku__main_2_p_0_env_0__Puzzle_25);
                  }
#line 96 "sudoku.m"
#line 96 "sudoku.m"
                  switch (sudoku__V_34_34) {
#line 96 "sudoku.m"
                    default:
#line 96 "sudoku.m"
                      (sudoku__env_ptr)->sudoku__main_2_p_0_env_0__succeeded = MR_FALSE;
#line 96 "sudoku.m"
                      break;
#line 96 "sudoku.m"
                    case (MR_Integer) 16:
#line 96 "sudoku.m"
                      {
#line 96 "sudoku.m"
                        sudoku__Size_26 = (MR_Integer) 4;
#line 96 "sudoku.m"
                        sudoku__Boxsize_27 = (MR_Integer) 2;
#line 96 "sudoku.m"
                        (sudoku__env_ptr)->sudoku__main_2_p_0_env_0__succeeded = MR_TRUE;
#line 96 "sudoku.m"
                      }
#line 96 "sudoku.m"
                      break;
#line 96 "sudoku.m"
                    case (MR_Integer) 81:
#line 97 "sudoku.m"
                      {
#line 97 "sudoku.m"
                        sudoku__Size_26 = (MR_Integer) 9;
#line 97 "sudoku.m"
                        sudoku__Boxsize_27 = (MR_Integer) 3;
#line 97 "sudoku.m"
                        (sudoku__env_ptr)->sudoku__main_2_p_0_env_0__succeeded = MR_TRUE;
#line 97 "sudoku.m"
                      }
#line 96 "sudoku.m"
                      break;
#line 96 "sudoku.m"
                    case (MR_Integer) 256:
#line 98 "sudoku.m"
                      {
#line 98 "sudoku.m"
                        sudoku__Size_26 = (MR_Integer) 16;
#line 98 "sudoku.m"
                        sudoku__Boxsize_27 = (MR_Integer) 4;
#line 98 "sudoku.m"
                        (sudoku__env_ptr)->sudoku__main_2_p_0_env_0__succeeded = MR_TRUE;
#line 98 "sudoku.m"
                      }
#line 96 "sudoku.m"
                      break;
#line 96 "sudoku.m"
                    case (MR_Integer) 625:
#line 99 "sudoku.m"
                      {
#line 99 "sudoku.m"
                        sudoku__Size_26 = (MR_Integer) 25;
#line 99 "sudoku.m"
                        sudoku__Boxsize_27 = (MR_Integer) 5;
#line 99 "sudoku.m"
                        (sudoku__env_ptr)->sudoku__main_2_p_0_env_0__succeeded = MR_TRUE;
#line 99 "sudoku.m"
                      }
#line 96 "sudoku.m"
                      break;
#line 96 "sudoku.m"
                  }
#line 83 "sudoku.m"
                  if ((sudoku__env_ptr)->sudoku__main_2_p_0_env_0__succeeded)
#line 81 "sudoku.m"
                    {
#line 79 "sudoku.m"
                      {
#line 79 "sudoku.m"
                        main_2_p_0_2(sudoku__env_ptr);
                      }
#line 81 "sudoku.m"
                      if ((sudoku__env_ptr)->sudoku__main_2_p_0_env_0__succeeded)
#line 80 "sudoku.m"
                        {
#line 80 "sudoku.m"
                          sudoku__print_puzzle_5_p_0((sudoku__env_ptr)->sudoku__main_2_p_0_env_0__OutputPuzzle_28, sudoku__Size_26, sudoku__Boxsize_27);
                        }
#line 81 "sudoku.m"
                      else
#line 81 "sudoku.m"
                        {
#line 81 "sudoku.m"
                          sudoku__print_puzzle_5_p_0((sudoku__env_ptr)->sudoku__main_2_p_0_env_0__Puzzle_25, sudoku__Size_26, sudoku__Boxsize_27);
                        }
#line 81 "sudoku.m"
                    }
#line 83 "sudoku.m"
                  else
#line 83 "sudoku.m"
                    {
#line 83 "sudoku.m"
                      MR_String sudoku__V_37_37 = (MR_String) "Invalid puzzle size\n";
#line 83 "sudoku.m"
                      MR_Integer sudoku__V_39_39;

#line 83 "sudoku.m"
                      {
#line 83 "sudoku.m"
                        mercury__io__write_string_3_p_0(sudoku__V_37_37);
                      }
#line 84 "sudoku.m"
                      sudoku__V_39_39 = (MR_Integer) 1;
#line 84 "sudoku.m"
                      {
#line 84 "sudoku.m"
                        mercury__io__set_exit_status_3_p_0(sudoku__V_39_39);
                      }
#line 83 "sudoku.m"
                    }
#line 83 "sudoku.m"
                }
#line 31 "sudoku.m"
              {
#line 31 "sudoku.m"
                mercury__io__seen_2_p_0();
#line 31 "sudoku.m"
                return;
              }
#line 29 "sudoku.m"
            }
#line 32 "sudoku.m"
          else
#line 32 "sudoku.m"
            {
#line 32 "sudoku.m"
              MR_String sudoku__V_13_13 = (MR_String) "Could not open puzzle file\n";
#line 32 "sudoku.m"
              MR_Integer sudoku__V_15_15;

#line 33 "sudoku.m"
              {
#line 33 "sudoku.m"
                mercury__io__write_string_3_p_0(sudoku__V_13_13);
              }
#line 34 "sudoku.m"
              sudoku__V_15_15 = (MR_Integer) 1;
#line 34 "sudoku.m"
              {
#line 34 "sudoku.m"
                mercury__io__set_exit_status_3_p_0(sudoku__V_15_15);
#line 34 "sudoku.m"
                return;
              }
#line 32 "sudoku.m"
            }
#line 28 "sudoku.m"
        }
#line 36 "sudoku.m"
      else
#line 36 "sudoku.m"
        {
#line 36 "sudoku.m"
          MR_Integer sudoku__V_20_20;
#line 36 "sudoku.m"
          MR_String sudoku__V_48_48 = (MR_String) "Usage:  sudoku filname\n";
#line 36 "sudoku.m"
          MR_String sudoku__V_50_50;
#line 36 "sudoku.m"
          MR_String sudoku__V_52_52;
#line 36 "sudoku.m"
          MR_String sudoku__V_54_54;
#line 36 "sudoku.m"
          MR_String sudoku__V_56_56;
#line 36 "sudoku.m"
          MR_String sudoku__V_58_58;
#line 36 "sudoku.m"
          MR_String sudoku__V_60_60;
#line 36 "sudoku.m"
          MR_String sudoku__V_62_62;
#line 36 "sudoku.m"
          MR_String sudoku__V_64_64;

#line 46 "sudoku.m"
          {
#line 46 "sudoku.m"
            mercury__io__write_string_3_p_0(sudoku__V_48_48);
          }
#line 47 "sudoku.m"
          sudoku__V_50_50 = (MR_String) "  where filname is the name of a file containing a sudoku puzzle\n";
#line 47 "sudoku.m"
          {
#line 47 "sudoku.m"
            mercury__io__write_string_3_p_0(sudoku__V_50_50);
          }
#line 49 "sudoku.m"
          sudoku__V_52_52 = (MR_String) "  written as a file of 4, 9, 16, or 25 lines, each with that same\n";
#line 49 "sudoku.m"
          {
#line 49 "sudoku.m"
            mercury__io__write_string_3_p_0(sudoku__V_52_52);
          }
#line 51 "sudoku.m"
          sudoku__V_54_54 = (MR_String) "  number of characters.  All characters on each line must be either\n";
#line 51 "sudoku.m"
          {
#line 51 "sudoku.m"
            mercury__io__write_string_3_p_0(sudoku__V_54_54);
          }
#line 53 "sudoku.m"
          sudoku__V_56_56 = (MR_String) "  a space (for squares to be solved for) or a digit (except 0) or a\n";
#line 53 "sudoku.m"
          {
#line 53 "sudoku.m"
            mercury__io__write_string_3_p_0(sudoku__V_56_56);
          }
#line 55 "sudoku.m"
          sudoku__V_58_58 = (MR_String) "  letter.  A solved puzzle is the same, except that all spaces have\n";
#line 55 "sudoku.m"
          {
#line 55 "sudoku.m"
            mercury__io__write_string_3_p_0(sudoku__V_58_58);
          }
#line 57 "sudoku.m"
          sudoku__V_60_60 = (MR_String) "  been filled in with letters and digits, and each digit or letter\n";
#line 57 "sudoku.m"
          {
#line 57 "sudoku.m"
            mercury__io__write_string_3_p_0(sudoku__V_60_60);
          }
#line 59 "sudoku.m"
          sudoku__V_62_62 = (MR_String) "  between 1 and the width of the puzzle (where \'a\' is taken for 10,\n";
#line 59 "sudoku.m"
          {
#line 59 "sudoku.m"
            mercury__io__write_string_3_p_0(sudoku__V_62_62);
          }
#line 61 "sudoku.m"
          sudoku__V_64_64 = (MR_String) "  and so on) appears exactly once in each row, column, and box.\n";
#line 61 "sudoku.m"
          {
#line 61 "sudoku.m"
            mercury__io__write_string_3_p_0(sudoku__V_64_64);
          }
#line 37 "sudoku.m"
          sudoku__V_20_20 = (MR_Integer) 1;
#line 37 "sudoku.m"
          {
#line 37 "sudoku.m"
            mercury__io__set_exit_status_3_p_0(sudoku__V_20_20);
#line 37 "sudoku.m"
            return;
          }
#line 36 "sudoku.m"
        }
#line 25 "sudoku.m"
    }
#line 19 "sudoku.m"
  }
#line 19 "sudoku.m"
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

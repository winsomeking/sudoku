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




#line 170 "sudoku.m"
static void MR_CALL 
sudoku__print_hbar_4_p_0(
#line 170 "sudoku.m"
  MR_Integer sudoku__Remaining_5,
#line 170 "sudoku.m"
  MR_Integer sudoku__Boxsize_6);

#line 148 "sudoku.m"
static void MR_CALL 
sudoku__print_row_6_p_0(
#line 148 "sudoku.m"
  MR_Word sudoku__STATE_VARIABLE_Puzzle_0_13,
#line 148 "sudoku.m"
  MR_Word * sudoku__STATE_VARIABLE_Puzzle_14,
#line 148 "sudoku.m"
  MR_Integer sudoku__Remaining_8,
#line 148 "sudoku.m"
  MR_Integer sudoku__Boxsize_9);

#line 135 "sudoku.m"
static void MR_CALL 
sudoku__print_chunk_7_p_0(
#line 135 "sudoku.m"
  MR_Word sudoku__STATE_VARIABLE_Puzzle_0_13,
#line 135 "sudoku.m"
  MR_Word * sudoku__STATE_VARIABLE_Puzzle_14,
#line 135 "sudoku.m"
  MR_Integer sudoku__Rowsleft_9,
#line 135 "sudoku.m"
  MR_Integer sudoku__Size_10,
#line 135 "sudoku.m"
  MR_Integer sudoku__Boxsize_11);

#line 120 "sudoku.m"
static void MR_CALL 
sudoku__print_puzzle_5_p_0(
#line 120 "sudoku.m"
  MR_Word sudoku__Puzzle_6,
#line 120 "sudoku.m"
  MR_Integer sudoku__Size_7,
#line 120 "sudoku.m"
  MR_Integer sudoku__Boxsize_8);

#line 95 "sudoku.m"
static void MR_CALL 
sudoku__load_puzzle_3_p_0(
#line 95 "sudoku.m"
  MR_Word * sudoku__Puzzle_4);







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



#line 170 "sudoku.m"
static void MR_CALL 
sudoku__print_hbar_4_p_0(
#line 170 "sudoku.m"
  MR_Integer sudoku__Remaining_5,
#line 170 "sudoku.m"
  MR_Integer sudoku__Boxsize_6)
#line 170 "sudoku.m"
{
#line 176 "sudoku.m"
  while (MR_TRUE)
#line 176 "sudoku.m"
    {
#line 176 "sudoku.m"
      /* tailcall optimized into a loop */
#line 176 "sudoku.m"
      {
#line 176 "sudoku.m"
        MR_bool sudoku__succeeded;
#line 177 "sudoku.m"
        MR_Integer sudoku__V_10_10 = (MR_Integer) 0;
#line 177 "sudoku.m"
        MR_Integer sudoku__V_19_19;

#line 177 "sudoku.m"
        {
#line 177 "sudoku.m"
          sudoku__V_19_19 = mercury__int__mod_2_f_0(sudoku__Remaining_5, sudoku__Boxsize_6);
        }
#line 177 "sudoku.m"
        sudoku__succeeded = (sudoku__V_10_10 == sudoku__V_19_19);
#line 179 "sudoku.m"
        if (sudoku__succeeded)
#line 178 "sudoku.m"
          {
#line 178 "sudoku.m"
            MR_Char sudoku__V_11_11 = (MR_Char) 43;

#line 178 "sudoku.m"
            {
#line 178 "sudoku.m"
              mercury__io__write_char_3_p_0(sudoku__V_11_11);
            }
#line 178 "sudoku.m"
          }
#line 179 "sudoku.m"
        else
#line 178 "sudoku.m"
          {
#line 178 "sudoku.m"
          }
#line 181 "sudoku.m"
        sudoku__succeeded = (sudoku__Remaining_5 == (MR_Integer) 0);
#line 183 "sudoku.m"
        if (sudoku__succeeded)
#line 182 "sudoku.m"
          {
#line 182 "sudoku.m"
            mercury__io__nl_2_p_0();
#line 182 "sudoku.m"
            return;
          }
#line 183 "sudoku.m"
        else
#line 183 "sudoku.m"
          {
#line 183 "sudoku.m"
            MR_Char sudoku__V_14_14 = (MR_Char) 45;
#line 183 "sudoku.m"
            MR_Integer sudoku__V_16_16;
#line 183 "sudoku.m"
            MR_Integer sudoku__V_18_18;

#line 183 "sudoku.m"
            {
#line 183 "sudoku.m"
              mercury__io__write_char_3_p_0(sudoku__V_14_14);
            }
#line 184 "sudoku.m"
            sudoku__V_18_18 = (MR_Integer) 1;
#line 184 "sudoku.m"
            sudoku__V_16_16 = (sudoku__Remaining_5 - sudoku__V_18_18);
#line 184 "sudoku.m"
            /* direct tailcall eliminated */
#line 184 "sudoku.m"
            {
#line 184 "sudoku.m"
              MR_Integer sudoku__Remaining__tmp_copy_5 = sudoku__V_16_16;

#line 184 "sudoku.m"
              sudoku__Remaining_5 = sudoku__Remaining__tmp_copy_5;
#line 184 "sudoku.m"
            }
#line 184 "sudoku.m"
            continue;
#line 183 "sudoku.m"
          }
#line 176 "sudoku.m"
      }
#line 176 "sudoku.m"
      break;
#line 176 "sudoku.m"
    }
#line 170 "sudoku.m"
}

#line 148 "sudoku.m"
static void MR_CALL 
sudoku__print_row_6_p_0(
#line 148 "sudoku.m"
  MR_Word sudoku__STATE_VARIABLE_Puzzle_0_13,
#line 148 "sudoku.m"
  MR_Word * sudoku__STATE_VARIABLE_Puzzle_14,
#line 148 "sudoku.m"
  MR_Integer sudoku__Remaining_8,
#line 148 "sudoku.m"
  MR_Integer sudoku__Boxsize_9)
#line 148 "sudoku.m"
{
#line 153 "sudoku.m"
  while (MR_TRUE)
#line 153 "sudoku.m"
    {
#line 153 "sudoku.m"
      /* tailcall optimized into a loop */
#line 153 "sudoku.m"
      {
#line 153 "sudoku.m"
        MR_bool sudoku__succeeded;
#line 154 "sudoku.m"
        MR_Integer sudoku__V_17_17 = (MR_Integer) 0;
#line 154 "sudoku.m"
        MR_Integer sudoku__V_30_30;

#line 154 "sudoku.m"
        {
#line 154 "sudoku.m"
          sudoku__V_30_30 = mercury__int__mod_2_f_0(sudoku__Remaining_8, sudoku__Boxsize_9);
        }
#line 154 "sudoku.m"
        sudoku__succeeded = (sudoku__V_17_17 == sudoku__V_30_30);
#line 156 "sudoku.m"
        if (sudoku__succeeded)
#line 155 "sudoku.m"
          {
#line 155 "sudoku.m"
            MR_Char sudoku__V_18_18 = (MR_Char) 124;

#line 155 "sudoku.m"
            {
#line 155 "sudoku.m"
              mercury__io__write_char_3_p_0(sudoku__V_18_18);
            }
#line 155 "sudoku.m"
          }
#line 156 "sudoku.m"
        else
#line 155 "sudoku.m"
          {
#line 155 "sudoku.m"
          }
#line 158 "sudoku.m"
        sudoku__succeeded = (sudoku__Remaining_8 == (MR_Integer) 0);
#line 160 "sudoku.m"
        if (sudoku__succeeded)
#line 159 "sudoku.m"
          {
#line 159 "sudoku.m"
            {
#line 159 "sudoku.m"
              mercury__io__nl_2_p_0();
            }
#line 159 "sudoku.m"
            *sudoku__STATE_VARIABLE_Puzzle_14 = sudoku__STATE_VARIABLE_Puzzle_0_13;
#line 159 "sudoku.m"
          }
#line 160 "sudoku.m"
        else
#line 166 "sudoku.m"
          {
#line 166 "sudoku.m"
            MR_Integer sudoku__Int_11;
#line 166 "sudoku.m"
            MR_Word sudoku__STATE_VARIABLE_Puzzle_21_21;

#line 160 "sudoku.m"
            sudoku__succeeded = ((MR_tag((MR_Word) sudoku__STATE_VARIABLE_Puzzle_0_13)) == (MR_mktag((MR_Integer) 1)));
#line 160 "sudoku.m"
            if (sudoku__succeeded)
#line 160 "sudoku.m"
              {
#line 160 "sudoku.m"
                sudoku__Int_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), sudoku__STATE_VARIABLE_Puzzle_0_13, (MR_Integer) 0)));
#line 160 "sudoku.m"
                sudoku__STATE_VARIABLE_Puzzle_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), sudoku__STATE_VARIABLE_Puzzle_0_13, (MR_Integer) 1)));
#line 164 "sudoku.m"
                {
#line 164 "sudoku.m"
                  MR_Integer sudoku__V_26_26;
#line 164 "sudoku.m"
                  MR_Integer sudoku__V_28_28;
#line 163 "sudoku.m"
                  MR_Char sudoku__Digit_12;

#line 161 "sudoku.m"
                  {
#line 161 "sudoku.m"
                    sudoku__succeeded = mercury__char__int_to_digit_2_p_0(sudoku__Int_11, &sudoku__Digit_12);
                  }
#line 163 "sudoku.m"
                  if (sudoku__succeeded)
#line 162 "sudoku.m"
                    {
#line 162 "sudoku.m"
                      mercury__io__write_char_3_p_0(sudoku__Digit_12);
                    }
#line 163 "sudoku.m"
                  else
#line 163 "sudoku.m"
                    {
#line 163 "sudoku.m"
                      MR_Char sudoku__V_23_23 = (MR_Char) 46;

#line 163 "sudoku.m"
                      {
#line 163 "sudoku.m"
                        mercury__io__write_char_3_p_0(sudoku__V_23_23);
                      }
#line 163 "sudoku.m"
                    }
#line 165 "sudoku.m"
                  sudoku__V_28_28 = (MR_Integer) 1;
#line 165 "sudoku.m"
                  sudoku__V_26_26 = (sudoku__Remaining_8 - sudoku__V_28_28);
#line 165 "sudoku.m"
                  /* direct tailcall eliminated */
#line 165 "sudoku.m"
                  {
#line 165 "sudoku.m"
                    MR_Word sudoku__STATE_VARIABLE_Puzzle_0__tmp_copy_13 = sudoku__STATE_VARIABLE_Puzzle_21_21;
#line 165 "sudoku.m"
                    MR_Integer sudoku__Remaining__tmp_copy_8 = sudoku__V_26_26;

#line 165 "sudoku.m"
                    sudoku__Remaining_8 = sudoku__Remaining__tmp_copy_8;
#line 165 "sudoku.m"
                    sudoku__STATE_VARIABLE_Puzzle_0_13 = sudoku__STATE_VARIABLE_Puzzle_0__tmp_copy_13;
#line 165 "sudoku.m"
                  }
#line 165 "sudoku.m"
                  continue;
#line 164 "sudoku.m"
                }
#line 160 "sudoku.m"
              }
#line 160 "sudoku.m"
            else
#line 166 "sudoku.m"
              {
#line 166 "sudoku.m"
                {
#line 166 "sudoku.m"
                  mercury__io__nl_2_p_0();
                }
#line 166 "sudoku.m"
                *sudoku__STATE_VARIABLE_Puzzle_14 = sudoku__STATE_VARIABLE_Puzzle_0_13;
#line 166 "sudoku.m"
              }
#line 166 "sudoku.m"
          }
#line 153 "sudoku.m"
      }
#line 153 "sudoku.m"
      break;
#line 153 "sudoku.m"
    }
#line 148 "sudoku.m"
}

#line 135 "sudoku.m"
static void MR_CALL 
sudoku__print_chunk_7_p_0(
#line 135 "sudoku.m"
  MR_Word sudoku__STATE_VARIABLE_Puzzle_0_13,
#line 135 "sudoku.m"
  MR_Word * sudoku__STATE_VARIABLE_Puzzle_14,
#line 135 "sudoku.m"
  MR_Integer sudoku__Rowsleft_9,
#line 135 "sudoku.m"
  MR_Integer sudoku__Size_10,
#line 135 "sudoku.m"
  MR_Integer sudoku__Boxsize_11)
#line 135 "sudoku.m"
{
#line 143 "sudoku.m"
  while (MR_TRUE)
#line 143 "sudoku.m"
    {
#line 143 "sudoku.m"
      /* tailcall optimized into a loop */
#line 143 "sudoku.m"
      {
#line 143 "sudoku.m"
        MR_bool sudoku__succeeded = (sudoku__Rowsleft_9 == (MR_Integer) 0);

#line 143 "sudoku.m"
        if (sudoku__succeeded)
#line 142 "sudoku.m"
          *sudoku__STATE_VARIABLE_Puzzle_14 = sudoku__STATE_VARIABLE_Puzzle_0_13;
#line 143 "sudoku.m"
        else
#line 143 "sudoku.m"
          {
#line 143 "sudoku.m"
            MR_Word sudoku__STATE_VARIABLE_Puzzle_17_17;
#line 143 "sudoku.m"
            MR_Integer sudoku__V_20_20;
#line 143 "sudoku.m"
            MR_Integer sudoku__V_22_22;

#line 143 "sudoku.m"
            {
#line 143 "sudoku.m"
              sudoku__print_row_6_p_0(sudoku__STATE_VARIABLE_Puzzle_0_13, &sudoku__STATE_VARIABLE_Puzzle_17_17, sudoku__Size_10, sudoku__Boxsize_11);
            }
#line 144 "sudoku.m"
            sudoku__V_22_22 = (MR_Integer) 1;
#line 144 "sudoku.m"
            sudoku__V_20_20 = (sudoku__Rowsleft_9 - sudoku__V_22_22);
#line 144 "sudoku.m"
            /* direct tailcall eliminated */
#line 144 "sudoku.m"
            {
#line 144 "sudoku.m"
              MR_Word sudoku__STATE_VARIABLE_Puzzle_0__tmp_copy_13 = sudoku__STATE_VARIABLE_Puzzle_17_17;
#line 144 "sudoku.m"
              MR_Integer sudoku__Rowsleft__tmp_copy_9 = sudoku__V_20_20;

#line 144 "sudoku.m"
              sudoku__Rowsleft_9 = sudoku__Rowsleft__tmp_copy_9;
#line 144 "sudoku.m"
              sudoku__STATE_VARIABLE_Puzzle_0_13 = sudoku__STATE_VARIABLE_Puzzle_0__tmp_copy_13;
#line 144 "sudoku.m"
            }
#line 144 "sudoku.m"
            continue;
#line 143 "sudoku.m"
          }
#line 143 "sudoku.m"
      }
#line 143 "sudoku.m"
      break;
#line 143 "sudoku.m"
    }
#line 135 "sudoku.m"
}

#line 120 "sudoku.m"
static void MR_CALL 
sudoku__print_puzzle_5_p_0(
#line 120 "sudoku.m"
  MR_Word sudoku__Puzzle_6,
#line 120 "sudoku.m"
  MR_Integer sudoku__Size_7,
#line 120 "sudoku.m"
  MR_Integer sudoku__Boxsize_8)
#line 120 "sudoku.m"
{
#line 126 "sudoku.m"
  while (MR_TRUE)
#line 126 "sudoku.m"
    {
#line 126 "sudoku.m"
      /* tailcall optimized into a loop */
#line 126 "sudoku.m"
      {
#line 126 "sudoku.m"
        MR_bool sudoku__succeeded;

#line 127 "sudoku.m"
        {
#line 127 "sudoku.m"
          sudoku__print_hbar_4_p_0(sudoku__Size_7, sudoku__Boxsize_8);
        }
#line 128 "sudoku.m"
        sudoku__succeeded = (sudoku__Puzzle_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 130 "sudoku.m"
        if (sudoku__succeeded)
#line 128 "sudoku.m"
          {
#line 128 "sudoku.m"
          }
#line 130 "sudoku.m"
        else
#line 130 "sudoku.m"
          {
#line 130 "sudoku.m"
            MR_Word sudoku__Puzzle1_10;

#line 130 "sudoku.m"
            {
#line 130 "sudoku.m"
              sudoku__print_chunk_7_p_0(sudoku__Puzzle_6, &sudoku__Puzzle1_10, sudoku__Boxsize_8, sudoku__Size_7, sudoku__Boxsize_8);
            }
#line 131 "sudoku.m"
            /* direct tailcall eliminated */
#line 131 "sudoku.m"
            {
#line 131 "sudoku.m"
              MR_Word sudoku__Puzzle__tmp_copy_6 = sudoku__Puzzle1_10;

#line 131 "sudoku.m"
              sudoku__Puzzle_6 = sudoku__Puzzle__tmp_copy_6;
#line 131 "sudoku.m"
            }
#line 131 "sudoku.m"
            continue;
#line 130 "sudoku.m"
          }
#line 126 "sudoku.m"
      }
#line 126 "sudoku.m"
      break;
#line 126 "sudoku.m"
    }
#line 120 "sudoku.m"
}

#line 95 "sudoku.m"
static void MR_CALL 
sudoku__load_puzzle_3_p_0(
#line 95 "sudoku.m"
  MR_Word * sudoku__Puzzle_4)
#line 95 "sudoku.m"
{
#line 102 "sudoku.m"
  {
#line 102 "sudoku.m"
    MR_bool sudoku__succeeded;
#line 102 "sudoku.m"
    MR_Word sudoku__Result_6;

#line 103 "sudoku.m"
    {
#line 103 "sudoku.m"
      mercury__io__read_char_3_p_0(&sudoku__Result_6);
    }
#line 106 "sudoku.m"
#line 106 "sudoku.m"
    switch (MR_tag((MR_Word) sudoku__Result_6)) {
#line 106 "sudoku.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 106 "sudoku.m"
      case (MR_Integer) 0:
#line 105 "sudoku.m"
        *sudoku__Puzzle_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 106 "sudoku.m"
        break;
#line 106 "sudoku.m"
      case (MR_Integer) 1:
#line 106 "sudoku.m"
        {
#line 106 "sudoku.m"
          MR_Char sudoku__Char_8 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), sudoku__Result_6, (MR_Integer) 0)));
#line 106 "sudoku.m"
          MR_Word sudoku__Puzzle1_10;
#line 109 "sudoku.m"
          MR_Integer sudoku__Int_9;

#line 115 "sudoku.m"
          {
#line 115 "sudoku.m"
            sudoku__load_puzzle_3_p_0(&sudoku__Puzzle1_10);
          }
#line 107 "sudoku.m"
          {
#line 107 "sudoku.m"
            sudoku__succeeded = mercury__char__digit_to_int_2_p_0(sudoku__Char_8, &sudoku__Int_9);
          }
#line 109 "sudoku.m"
          if (sudoku__succeeded)
#line 108 "sudoku.m"
            {
#line 108 "sudoku.m"
              MR_Word base;
#line 108 "sudoku.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "sudoku.m"
              *sudoku__Puzzle_4 = base;
#line 108 "sudoku.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (sudoku__Int_9));
#line 108 "sudoku.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (sudoku__Puzzle1_10));
#line 108 "sudoku.m"
            }
#line 109 "sudoku.m"
          else
#line 113 "sudoku.m"
            {
#line 111 "sudoku.m"
#line 111 "sudoku.m"
              switch (sudoku__Char_8) {
#line 111 "sudoku.m"
                default:
#line 111 "sudoku.m"
                  sudoku__succeeded = MR_FALSE;
#line 111 "sudoku.m"
                  break;
#line 111 "sudoku.m"
                case (MR_Char) 32:
#line 111 "sudoku.m"
                  sudoku__succeeded = MR_TRUE;
#line 111 "sudoku.m"
                  break;
#line 111 "sudoku.m"
                case (MR_Char) 46:
#line 111 "sudoku.m"
                  sudoku__succeeded = MR_TRUE;
#line 111 "sudoku.m"
                  break;
#line 111 "sudoku.m"
                case (MR_Char) 95:
#line 111 "sudoku.m"
                  sudoku__succeeded = MR_TRUE;
#line 111 "sudoku.m"
                  break;
#line 111 "sudoku.m"
              }
#line 113 "sudoku.m"
              if (sudoku__succeeded)
#line 112 "sudoku.m"
                {
#line 112 "sudoku.m"
                  MR_Integer sudoku__V_14_14 = (MR_Integer) -1;

#line 112 "sudoku.m"
                  {
#line 112 "sudoku.m"
                    MR_Word base;
#line 112 "sudoku.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 112 "sudoku.m"
                    *sudoku__Puzzle_4 = base;
#line 112 "sudoku.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (sudoku__V_14_14));
#line 112 "sudoku.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (sudoku__Puzzle1_10));
#line 112 "sudoku.m"
                  }
#line 112 "sudoku.m"
                }
#line 113 "sudoku.m"
              else
#line 113 "sudoku.m"
                *sudoku__Puzzle_4 = sudoku__Puzzle1_10;
#line 113 "sudoku.m"
            }
#line 106 "sudoku.m"
        }
#line 106 "sudoku.m"
        break;
#line 106 "sudoku.m"
      case (MR_Integer) 2:
#line 105 "sudoku.m"
        *sudoku__Puzzle_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 106 "sudoku.m"
        break;
#line 106 "sudoku.m"
    }
#line 102 "sudoku.m"
  }
#line 95 "sudoku.m"
}

#line 14 "sudoku.m"
void MR_CALL 
main_2_p_0(void)
#line 14 "sudoku.m"
{
#line 20 "sudoku.m"
  {
#line 20 "sudoku.m"
    MR_bool sudoku__succeeded;
#line 20 "sudoku.m"
    MR_Word sudoku__Args_4;
#line 31 "sudoku.m"
    MR_String sudoku__File_5;
#line 22 "sudoku.m"
    MR_Word sudoku__V_11_11;

#line 21 "sudoku.m"
    {
#line 21 "sudoku.m"
      mercury__io__command_line_arguments_3_p_0(&sudoku__Args_4);
    }
#line 22 "sudoku.m"
    sudoku__succeeded = ((MR_tag((MR_Word) sudoku__Args_4)) == (MR_mktag((MR_Integer) 1)));
#line 22 "sudoku.m"
    if (sudoku__succeeded)
#line 22 "sudoku.m"
      {
#line 22 "sudoku.m"
        sudoku__File_5 = ((MR_String) (MR_hl_field(MR_mktag(1), sudoku__Args_4, (MR_Integer) 0)));
#line 22 "sudoku.m"
        sudoku__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), sudoku__Args_4, (MR_Integer) 1)));
#line 22 "sudoku.m"
        sudoku__succeeded = (sudoku__V_11_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 22 "sudoku.m"
      }
#line 31 "sudoku.m"
    if (sudoku__succeeded)
#line 23 "sudoku.m"
      {
#line 23 "sudoku.m"
        MR_Word sudoku__Result_6;

#line 23 "sudoku.m"
        {
#line 23 "sudoku.m"
          mercury__io__see_4_p_0(sudoku__File_5, &sudoku__Result_6);
        }
#line 27 "sudoku.m"
        if ((sudoku__Result_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 24 "sudoku.m"
          {
#line 24 "sudoku.m"
            MR_Word sudoku__Puzzle_25;

#line 67 "sudoku.m"
            {
#line 67 "sudoku.m"
              sudoku__load_puzzle_3_p_0(&sudoku__Puzzle_25);
            }
#line 68 "sudoku.m"
            sudoku__succeeded = (sudoku__Puzzle_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 71 "sudoku.m"
            if (sudoku__succeeded)
#line 69 "sudoku.m"
              {
#line 69 "sudoku.m"
                MR_String sudoku__V_29_29 = (MR_String) "Error reading puzzle\n";
#line 69 "sudoku.m"
                MR_Integer sudoku__V_31_31;

#line 69 "sudoku.m"
                {
#line 69 "sudoku.m"
                  mercury__io__write_string_3_p_0(sudoku__V_29_29);
                }
#line 70 "sudoku.m"
                sudoku__V_31_31 = (MR_Integer) 1;
#line 70 "sudoku.m"
                {
#line 70 "sudoku.m"
                  mercury__io__set_exit_status_3_p_0(sudoku__V_31_31);
                }
#line 69 "sudoku.m"
              }
#line 71 "sudoku.m"
            else
#line 74 "sudoku.m"
              {
#line 74 "sudoku.m"
                MR_Integer sudoku__Size_26;
#line 74 "sudoku.m"
                MR_Integer sudoku__Boxsize_27;
#line 71 "sudoku.m"
                MR_Word sudoku__TypeCtorInfo_20_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 71 "sudoku.m"
                MR_Integer sudoku__V_33_33;

#line 71 "sudoku.m"
                {
#line 71 "sudoku.m"
                  sudoku__V_33_33 = mercury__list__length_1_f_0(sudoku__TypeCtorInfo_20_39, sudoku__Puzzle_25);
                }
#line 85 "sudoku.m"
#line 85 "sudoku.m"
                switch (sudoku__V_33_33) {
#line 85 "sudoku.m"
                  default:
#line 85 "sudoku.m"
                    sudoku__succeeded = MR_FALSE;
#line 85 "sudoku.m"
                    break;
#line 85 "sudoku.m"
                  case (MR_Integer) 16:
#line 85 "sudoku.m"
                    {
#line 85 "sudoku.m"
                      sudoku__Size_26 = (MR_Integer) 4;
#line 85 "sudoku.m"
                      sudoku__Boxsize_27 = (MR_Integer) 2;
#line 85 "sudoku.m"
                      sudoku__succeeded = MR_TRUE;
#line 85 "sudoku.m"
                    }
#line 85 "sudoku.m"
                    break;
#line 85 "sudoku.m"
                  case (MR_Integer) 81:
#line 86 "sudoku.m"
                    {
#line 86 "sudoku.m"
                      sudoku__Size_26 = (MR_Integer) 9;
#line 86 "sudoku.m"
                      sudoku__Boxsize_27 = (MR_Integer) 3;
#line 86 "sudoku.m"
                      sudoku__succeeded = MR_TRUE;
#line 86 "sudoku.m"
                    }
#line 85 "sudoku.m"
                    break;
#line 85 "sudoku.m"
                  case (MR_Integer) 256:
#line 87 "sudoku.m"
                    {
#line 87 "sudoku.m"
                      sudoku__Size_26 = (MR_Integer) 16;
#line 87 "sudoku.m"
                      sudoku__Boxsize_27 = (MR_Integer) 4;
#line 87 "sudoku.m"
                      sudoku__succeeded = MR_TRUE;
#line 87 "sudoku.m"
                    }
#line 85 "sudoku.m"
                    break;
#line 85 "sudoku.m"
                  case (MR_Integer) 625:
#line 88 "sudoku.m"
                    {
#line 88 "sudoku.m"
                      sudoku__Size_26 = (MR_Integer) 25;
#line 88 "sudoku.m"
                      sudoku__Boxsize_27 = (MR_Integer) 5;
#line 88 "sudoku.m"
                      sudoku__succeeded = MR_TRUE;
#line 88 "sudoku.m"
                    }
#line 85 "sudoku.m"
                    break;
#line 85 "sudoku.m"
                }
#line 74 "sudoku.m"
                if (sudoku__succeeded)
#line 73 "sudoku.m"
                  {
#line 73 "sudoku.m"
                    sudoku__print_puzzle_5_p_0(sudoku__Puzzle_25, sudoku__Size_26, sudoku__Boxsize_27);
                  }
#line 74 "sudoku.m"
                else
#line 74 "sudoku.m"
                  {
#line 74 "sudoku.m"
                    MR_String sudoku__V_35_35 = (MR_String) "Invalid puzzle size\n";
#line 74 "sudoku.m"
                    MR_Integer sudoku__V_37_37;

#line 74 "sudoku.m"
                    {
#line 74 "sudoku.m"
                      mercury__io__write_string_3_p_0(sudoku__V_35_35);
                    }
#line 75 "sudoku.m"
                    sudoku__V_37_37 = (MR_Integer) 1;
#line 75 "sudoku.m"
                    {
#line 75 "sudoku.m"
                      mercury__io__set_exit_status_3_p_0(sudoku__V_37_37);
                    }
#line 74 "sudoku.m"
                  }
#line 74 "sudoku.m"
              }
#line 26 "sudoku.m"
            {
#line 26 "sudoku.m"
              mercury__io__seen_2_p_0();
#line 26 "sudoku.m"
              return;
            }
#line 24 "sudoku.m"
          }
#line 27 "sudoku.m"
        else
#line 27 "sudoku.m"
          {
#line 27 "sudoku.m"
            MR_String sudoku__V_13_13 = (MR_String) "Could not open puzzle file\n";
#line 27 "sudoku.m"
            MR_Integer sudoku__V_15_15;

#line 28 "sudoku.m"
            {
#line 28 "sudoku.m"
              mercury__io__write_string_3_p_0(sudoku__V_13_13);
            }
#line 29 "sudoku.m"
            sudoku__V_15_15 = (MR_Integer) 1;
#line 29 "sudoku.m"
            {
#line 29 "sudoku.m"
              mercury__io__set_exit_status_3_p_0(sudoku__V_15_15);
#line 29 "sudoku.m"
              return;
            }
#line 27 "sudoku.m"
          }
#line 23 "sudoku.m"
      }
#line 31 "sudoku.m"
    else
#line 31 "sudoku.m"
      {
#line 31 "sudoku.m"
        MR_Integer sudoku__V_20_20;
#line 31 "sudoku.m"
        MR_String sudoku__V_43_43 = (MR_String) "Usage:  sudoku filname\n";
#line 31 "sudoku.m"
        MR_String sudoku__V_45_45;
#line 31 "sudoku.m"
        MR_String sudoku__V_47_47;
#line 31 "sudoku.m"
        MR_String sudoku__V_49_49;
#line 31 "sudoku.m"
        MR_String sudoku__V_51_51;
#line 31 "sudoku.m"
        MR_String sudoku__V_53_53;
#line 31 "sudoku.m"
        MR_String sudoku__V_55_55;
#line 31 "sudoku.m"
        MR_String sudoku__V_57_57;
#line 31 "sudoku.m"
        MR_String sudoku__V_59_59;

#line 41 "sudoku.m"
        {
#line 41 "sudoku.m"
          mercury__io__write_string_3_p_0(sudoku__V_43_43);
        }
#line 42 "sudoku.m"
        sudoku__V_45_45 = (MR_String) "  where filname is the name of a file containing a sudoku puzzle\n";
#line 42 "sudoku.m"
        {
#line 42 "sudoku.m"
          mercury__io__write_string_3_p_0(sudoku__V_45_45);
        }
#line 44 "sudoku.m"
        sudoku__V_47_47 = (MR_String) "  written as a file of 4, 9, 16, or 25 lines, each with that same\n";
#line 44 "sudoku.m"
        {
#line 44 "sudoku.m"
          mercury__io__write_string_3_p_0(sudoku__V_47_47);
        }
#line 46 "sudoku.m"
        sudoku__V_49_49 = (MR_String) "  number of characters.  All characters on each line must be either\n";
#line 46 "sudoku.m"
        {
#line 46 "sudoku.m"
          mercury__io__write_string_3_p_0(sudoku__V_49_49);
        }
#line 48 "sudoku.m"
        sudoku__V_51_51 = (MR_String) "  a space (for squares to be solved for) or a digit (except 0) or a\n";
#line 48 "sudoku.m"
        {
#line 48 "sudoku.m"
          mercury__io__write_string_3_p_0(sudoku__V_51_51);
        }
#line 50 "sudoku.m"
        sudoku__V_53_53 = (MR_String) "  letter.  A solved puzzle is the same, except that all spaces have\n";
#line 50 "sudoku.m"
        {
#line 50 "sudoku.m"
          mercury__io__write_string_3_p_0(sudoku__V_53_53);
        }
#line 52 "sudoku.m"
        sudoku__V_55_55 = (MR_String) "  been filled in with letters and digits, and each digit or letter\n";
#line 52 "sudoku.m"
        {
#line 52 "sudoku.m"
          mercury__io__write_string_3_p_0(sudoku__V_55_55);
        }
#line 54 "sudoku.m"
        sudoku__V_57_57 = (MR_String) "  between 1 and the width of the puzzle (where \'a\' is taken for 10,\n";
#line 54 "sudoku.m"
        {
#line 54 "sudoku.m"
          mercury__io__write_string_3_p_0(sudoku__V_57_57);
        }
#line 56 "sudoku.m"
        sudoku__V_59_59 = (MR_String) "  and so on) appears exactly once in each row, column, and box.\n";
#line 56 "sudoku.m"
        {
#line 56 "sudoku.m"
          mercury__io__write_string_3_p_0(sudoku__V_59_59);
        }
#line 32 "sudoku.m"
        sudoku__V_20_20 = (MR_Integer) 1;
#line 32 "sudoku.m"
        {
#line 32 "sudoku.m"
          mercury__io__set_exit_status_3_p_0(sudoku__V_20_20);
#line 32 "sudoku.m"
          return;
        }
#line 31 "sudoku.m"
      }
#line 20 "sudoku.m"
  }
#line 14 "sudoku.m"
}

void mercury__sudoku__init(void)
{
}

void mercury__sudoku__init_type_tables(void)
{
}

void mercury__sudoku__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module sudoku. */

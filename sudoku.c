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




#line 234 "sudoku.m"
static void MR_CALL 
sudoku__print_hbar_4_p_0(
#line 234 "sudoku.m"
  MR_Integer sudoku__Remaining_5,
#line 234 "sudoku.m"
  MR_Integer sudoku__Boxsize_6);

#line 212 "sudoku.m"
static void MR_CALL 
sudoku__print_row_6_p_0(
#line 212 "sudoku.m"
  MR_Word sudoku__STATE_VARIABLE_Puzzle_0_13,
#line 212 "sudoku.m"
  MR_Word * sudoku__STATE_VARIABLE_Puzzle_14,
#line 212 "sudoku.m"
  MR_Integer sudoku__Remaining_8,
#line 212 "sudoku.m"
  MR_Integer sudoku__Boxsize_9);

#line 199 "sudoku.m"
static void MR_CALL 
sudoku__print_chunk_7_p_0(
#line 199 "sudoku.m"
  MR_Word sudoku__STATE_VARIABLE_Puzzle_0_13,
#line 199 "sudoku.m"
  MR_Word * sudoku__STATE_VARIABLE_Puzzle_14,
#line 199 "sudoku.m"
  MR_Integer sudoku__Rowsleft_9,
#line 199 "sudoku.m"
  MR_Integer sudoku__Size_10,
#line 199 "sudoku.m"
  MR_Integer sudoku__Boxsize_11);

#line 184 "sudoku.m"
static void MR_CALL 
sudoku__print_puzzle_5_p_0(
#line 184 "sudoku.m"
  MR_Word sudoku__Puzzle_6,
#line 184 "sudoku.m"
  MR_Integer sudoku__Size_7,
#line 184 "sudoku.m"
  MR_Integer sudoku__Boxsize_8);

#line 100 "sudoku.m"
static void MR_CALL 
sudoku__load_puzzle_3_p_0(
#line 100 "sudoku.m"
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



#line 234 "sudoku.m"
static void MR_CALL 
sudoku__print_hbar_4_p_0(
#line 234 "sudoku.m"
  MR_Integer sudoku__Remaining_5,
#line 234 "sudoku.m"
  MR_Integer sudoku__Boxsize_6)
#line 234 "sudoku.m"
{
#line 240 "sudoku.m"
  while (MR_TRUE)
#line 240 "sudoku.m"
    {
#line 240 "sudoku.m"
      /* tailcall optimized into a loop */
#line 240 "sudoku.m"
      {
#line 240 "sudoku.m"
        MR_bool sudoku__succeeded;
#line 241 "sudoku.m"
        MR_Integer sudoku__V_10_10 = (MR_Integer) 0;
#line 241 "sudoku.m"
        MR_Integer sudoku__V_19_19;

#line 241 "sudoku.m"
        {
#line 241 "sudoku.m"
          sudoku__V_19_19 = mercury__int__mod_2_f_0(sudoku__Remaining_5, sudoku__Boxsize_6);
        }
#line 241 "sudoku.m"
        sudoku__succeeded = (sudoku__V_10_10 == sudoku__V_19_19);
#line 243 "sudoku.m"
        if (sudoku__succeeded)
#line 242 "sudoku.m"
          {
#line 242 "sudoku.m"
            MR_Char sudoku__V_11_11 = (MR_Char) 43;

#line 242 "sudoku.m"
            {
#line 242 "sudoku.m"
              mercury__io__write_char_3_p_0(sudoku__V_11_11);
            }
#line 242 "sudoku.m"
          }
#line 243 "sudoku.m"
        else
#line 242 "sudoku.m"
          {
#line 242 "sudoku.m"
          }
#line 245 "sudoku.m"
        sudoku__succeeded = (sudoku__Remaining_5 == (MR_Integer) 0);
#line 247 "sudoku.m"
        if (sudoku__succeeded)
#line 246 "sudoku.m"
          {
#line 246 "sudoku.m"
            mercury__io__nl_2_p_0();
#line 246 "sudoku.m"
            return;
          }
#line 247 "sudoku.m"
        else
#line 247 "sudoku.m"
          {
#line 247 "sudoku.m"
            MR_Char sudoku__V_14_14 = (MR_Char) 45;
#line 247 "sudoku.m"
            MR_Integer sudoku__V_16_16;
#line 247 "sudoku.m"
            MR_Integer sudoku__V_18_18;

#line 247 "sudoku.m"
            {
#line 247 "sudoku.m"
              mercury__io__write_char_3_p_0(sudoku__V_14_14);
            }
#line 248 "sudoku.m"
            sudoku__V_18_18 = (MR_Integer) 1;
#line 248 "sudoku.m"
            sudoku__V_16_16 = (sudoku__Remaining_5 - sudoku__V_18_18);
#line 248 "sudoku.m"
            /* direct tailcall eliminated */
#line 248 "sudoku.m"
            {
#line 248 "sudoku.m"
              MR_Integer sudoku__Remaining__tmp_copy_5 = sudoku__V_16_16;

#line 248 "sudoku.m"
              sudoku__Remaining_5 = sudoku__Remaining__tmp_copy_5;
#line 248 "sudoku.m"
            }
#line 248 "sudoku.m"
            continue;
#line 247 "sudoku.m"
          }
#line 240 "sudoku.m"
      }
#line 240 "sudoku.m"
      break;
#line 240 "sudoku.m"
    }
#line 234 "sudoku.m"
}

#line 212 "sudoku.m"
static void MR_CALL 
sudoku__print_row_6_p_0(
#line 212 "sudoku.m"
  MR_Word sudoku__STATE_VARIABLE_Puzzle_0_13,
#line 212 "sudoku.m"
  MR_Word * sudoku__STATE_VARIABLE_Puzzle_14,
#line 212 "sudoku.m"
  MR_Integer sudoku__Remaining_8,
#line 212 "sudoku.m"
  MR_Integer sudoku__Boxsize_9)
#line 212 "sudoku.m"
{
#line 217 "sudoku.m"
  while (MR_TRUE)
#line 217 "sudoku.m"
    {
#line 217 "sudoku.m"
      /* tailcall optimized into a loop */
#line 217 "sudoku.m"
      {
#line 217 "sudoku.m"
        MR_bool sudoku__succeeded;
#line 218 "sudoku.m"
        MR_Integer sudoku__V_17_17 = (MR_Integer) 0;
#line 218 "sudoku.m"
        MR_Integer sudoku__V_30_30;

#line 218 "sudoku.m"
        {
#line 218 "sudoku.m"
          sudoku__V_30_30 = mercury__int__mod_2_f_0(sudoku__Remaining_8, sudoku__Boxsize_9);
        }
#line 218 "sudoku.m"
        sudoku__succeeded = (sudoku__V_17_17 == sudoku__V_30_30);
#line 220 "sudoku.m"
        if (sudoku__succeeded)
#line 219 "sudoku.m"
          {
#line 219 "sudoku.m"
            MR_Char sudoku__V_18_18 = (MR_Char) 124;

#line 219 "sudoku.m"
            {
#line 219 "sudoku.m"
              mercury__io__write_char_3_p_0(sudoku__V_18_18);
            }
#line 219 "sudoku.m"
          }
#line 220 "sudoku.m"
        else
#line 219 "sudoku.m"
          {
#line 219 "sudoku.m"
          }
#line 222 "sudoku.m"
        sudoku__succeeded = (sudoku__Remaining_8 == (MR_Integer) 0);
#line 224 "sudoku.m"
        if (sudoku__succeeded)
#line 223 "sudoku.m"
          {
#line 223 "sudoku.m"
            {
#line 223 "sudoku.m"
              mercury__io__nl_2_p_0();
            }
#line 223 "sudoku.m"
            *sudoku__STATE_VARIABLE_Puzzle_14 = sudoku__STATE_VARIABLE_Puzzle_0_13;
#line 223 "sudoku.m"
          }
#line 224 "sudoku.m"
        else
#line 230 "sudoku.m"
          {
#line 230 "sudoku.m"
            MR_Integer sudoku__Int_11;
#line 230 "sudoku.m"
            MR_Word sudoku__STATE_VARIABLE_Puzzle_21_21;

#line 224 "sudoku.m"
            sudoku__succeeded = ((MR_tag((MR_Word) sudoku__STATE_VARIABLE_Puzzle_0_13)) == (MR_mktag((MR_Integer) 1)));
#line 224 "sudoku.m"
            if (sudoku__succeeded)
#line 224 "sudoku.m"
              {
#line 224 "sudoku.m"
                sudoku__Int_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), sudoku__STATE_VARIABLE_Puzzle_0_13, (MR_Integer) 0)));
#line 224 "sudoku.m"
                sudoku__STATE_VARIABLE_Puzzle_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), sudoku__STATE_VARIABLE_Puzzle_0_13, (MR_Integer) 1)));
#line 228 "sudoku.m"
                {
#line 228 "sudoku.m"
                  MR_Integer sudoku__V_26_26;
#line 228 "sudoku.m"
                  MR_Integer sudoku__V_28_28;
#line 227 "sudoku.m"
                  MR_Char sudoku__Digit_12;

#line 225 "sudoku.m"
                  {
#line 225 "sudoku.m"
                    sudoku__succeeded = mercury__char__int_to_digit_2_p_0(sudoku__Int_11, &sudoku__Digit_12);
                  }
#line 227 "sudoku.m"
                  if (sudoku__succeeded)
#line 226 "sudoku.m"
                    {
#line 226 "sudoku.m"
                      mercury__io__write_char_3_p_0(sudoku__Digit_12);
                    }
#line 227 "sudoku.m"
                  else
#line 227 "sudoku.m"
                    {
#line 227 "sudoku.m"
                      MR_Char sudoku__V_23_23 = (MR_Char) 46;

#line 227 "sudoku.m"
                      {
#line 227 "sudoku.m"
                        mercury__io__write_char_3_p_0(sudoku__V_23_23);
                      }
#line 227 "sudoku.m"
                    }
#line 229 "sudoku.m"
                  sudoku__V_28_28 = (MR_Integer) 1;
#line 229 "sudoku.m"
                  sudoku__V_26_26 = (sudoku__Remaining_8 - sudoku__V_28_28);
#line 229 "sudoku.m"
                  /* direct tailcall eliminated */
#line 229 "sudoku.m"
                  {
#line 229 "sudoku.m"
                    MR_Word sudoku__STATE_VARIABLE_Puzzle_0__tmp_copy_13 = sudoku__STATE_VARIABLE_Puzzle_21_21;
#line 229 "sudoku.m"
                    MR_Integer sudoku__Remaining__tmp_copy_8 = sudoku__V_26_26;

#line 229 "sudoku.m"
                    sudoku__Remaining_8 = sudoku__Remaining__tmp_copy_8;
#line 229 "sudoku.m"
                    sudoku__STATE_VARIABLE_Puzzle_0_13 = sudoku__STATE_VARIABLE_Puzzle_0__tmp_copy_13;
#line 229 "sudoku.m"
                  }
#line 229 "sudoku.m"
                  continue;
#line 228 "sudoku.m"
                }
#line 224 "sudoku.m"
              }
#line 224 "sudoku.m"
            else
#line 230 "sudoku.m"
              {
#line 230 "sudoku.m"
                {
#line 230 "sudoku.m"
                  mercury__io__nl_2_p_0();
                }
#line 230 "sudoku.m"
                *sudoku__STATE_VARIABLE_Puzzle_14 = sudoku__STATE_VARIABLE_Puzzle_0_13;
#line 230 "sudoku.m"
              }
#line 230 "sudoku.m"
          }
#line 217 "sudoku.m"
      }
#line 217 "sudoku.m"
      break;
#line 217 "sudoku.m"
    }
#line 212 "sudoku.m"
}

#line 199 "sudoku.m"
static void MR_CALL 
sudoku__print_chunk_7_p_0(
#line 199 "sudoku.m"
  MR_Word sudoku__STATE_VARIABLE_Puzzle_0_13,
#line 199 "sudoku.m"
  MR_Word * sudoku__STATE_VARIABLE_Puzzle_14,
#line 199 "sudoku.m"
  MR_Integer sudoku__Rowsleft_9,
#line 199 "sudoku.m"
  MR_Integer sudoku__Size_10,
#line 199 "sudoku.m"
  MR_Integer sudoku__Boxsize_11)
#line 199 "sudoku.m"
{
#line 207 "sudoku.m"
  while (MR_TRUE)
#line 207 "sudoku.m"
    {
#line 207 "sudoku.m"
      /* tailcall optimized into a loop */
#line 207 "sudoku.m"
      {
#line 207 "sudoku.m"
        MR_bool sudoku__succeeded = (sudoku__Rowsleft_9 == (MR_Integer) 0);

#line 207 "sudoku.m"
        if (sudoku__succeeded)
#line 206 "sudoku.m"
          *sudoku__STATE_VARIABLE_Puzzle_14 = sudoku__STATE_VARIABLE_Puzzle_0_13;
#line 207 "sudoku.m"
        else
#line 207 "sudoku.m"
          {
#line 207 "sudoku.m"
            MR_Word sudoku__STATE_VARIABLE_Puzzle_17_17;
#line 207 "sudoku.m"
            MR_Integer sudoku__V_20_20;
#line 207 "sudoku.m"
            MR_Integer sudoku__V_22_22;

#line 207 "sudoku.m"
            {
#line 207 "sudoku.m"
              sudoku__print_row_6_p_0(sudoku__STATE_VARIABLE_Puzzle_0_13, &sudoku__STATE_VARIABLE_Puzzle_17_17, sudoku__Size_10, sudoku__Boxsize_11);
            }
#line 208 "sudoku.m"
            sudoku__V_22_22 = (MR_Integer) 1;
#line 208 "sudoku.m"
            sudoku__V_20_20 = (sudoku__Rowsleft_9 - sudoku__V_22_22);
#line 208 "sudoku.m"
            /* direct tailcall eliminated */
#line 208 "sudoku.m"
            {
#line 208 "sudoku.m"
              MR_Word sudoku__STATE_VARIABLE_Puzzle_0__tmp_copy_13 = sudoku__STATE_VARIABLE_Puzzle_17_17;
#line 208 "sudoku.m"
              MR_Integer sudoku__Rowsleft__tmp_copy_9 = sudoku__V_20_20;

#line 208 "sudoku.m"
              sudoku__Rowsleft_9 = sudoku__Rowsleft__tmp_copy_9;
#line 208 "sudoku.m"
              sudoku__STATE_VARIABLE_Puzzle_0_13 = sudoku__STATE_VARIABLE_Puzzle_0__tmp_copy_13;
#line 208 "sudoku.m"
            }
#line 208 "sudoku.m"
            continue;
#line 207 "sudoku.m"
          }
#line 207 "sudoku.m"
      }
#line 207 "sudoku.m"
      break;
#line 207 "sudoku.m"
    }
#line 199 "sudoku.m"
}

#line 184 "sudoku.m"
static void MR_CALL 
sudoku__print_puzzle_5_p_0(
#line 184 "sudoku.m"
  MR_Word sudoku__Puzzle_6,
#line 184 "sudoku.m"
  MR_Integer sudoku__Size_7,
#line 184 "sudoku.m"
  MR_Integer sudoku__Boxsize_8)
#line 184 "sudoku.m"
{
#line 190 "sudoku.m"
  while (MR_TRUE)
#line 190 "sudoku.m"
    {
#line 190 "sudoku.m"
      /* tailcall optimized into a loop */
#line 190 "sudoku.m"
      {
#line 190 "sudoku.m"
        MR_bool sudoku__succeeded;

#line 191 "sudoku.m"
        {
#line 191 "sudoku.m"
          sudoku__print_hbar_4_p_0(sudoku__Size_7, sudoku__Boxsize_8);
        }
#line 192 "sudoku.m"
        sudoku__succeeded = (sudoku__Puzzle_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 194 "sudoku.m"
        if (sudoku__succeeded)
#line 192 "sudoku.m"
          {
#line 192 "sudoku.m"
          }
#line 194 "sudoku.m"
        else
#line 194 "sudoku.m"
          {
#line 194 "sudoku.m"
            MR_Word sudoku__Puzzle1_10;

#line 194 "sudoku.m"
            {
#line 194 "sudoku.m"
              sudoku__print_chunk_7_p_0(sudoku__Puzzle_6, &sudoku__Puzzle1_10, sudoku__Boxsize_8, sudoku__Size_7, sudoku__Boxsize_8);
            }
#line 195 "sudoku.m"
            /* direct tailcall eliminated */
#line 195 "sudoku.m"
            {
#line 195 "sudoku.m"
              MR_Word sudoku__Puzzle__tmp_copy_6 = sudoku__Puzzle1_10;

#line 195 "sudoku.m"
              sudoku__Puzzle_6 = sudoku__Puzzle__tmp_copy_6;
#line 195 "sudoku.m"
            }
#line 195 "sudoku.m"
            continue;
#line 194 "sudoku.m"
          }
#line 190 "sudoku.m"
      }
#line 190 "sudoku.m"
      break;
#line 190 "sudoku.m"
    }
#line 184 "sudoku.m"
}

#line 100 "sudoku.m"
static void MR_CALL 
sudoku__load_puzzle_3_p_0(
#line 100 "sudoku.m"
  MR_Word * sudoku__Puzzle_4)
#line 100 "sudoku.m"
{
#line 107 "sudoku.m"
  {
#line 107 "sudoku.m"
    MR_bool sudoku__succeeded;
#line 107 "sudoku.m"
    MR_Word sudoku__Result_6;

#line 108 "sudoku.m"
    {
#line 108 "sudoku.m"
      mercury__io__read_char_3_p_0(&sudoku__Result_6);
    }
#line 111 "sudoku.m"
#line 111 "sudoku.m"
    switch (MR_tag((MR_Word) sudoku__Result_6)) {
#line 111 "sudoku.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 111 "sudoku.m"
      case (MR_Integer) 0:
#line 110 "sudoku.m"
        *sudoku__Puzzle_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 111 "sudoku.m"
        break;
#line 111 "sudoku.m"
      case (MR_Integer) 1:
#line 111 "sudoku.m"
        {
#line 111 "sudoku.m"
          MR_Char sudoku__Char_8 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), sudoku__Result_6, (MR_Integer) 0)));
#line 111 "sudoku.m"
          MR_Word sudoku__Puzzle1_10;
#line 114 "sudoku.m"
          MR_Integer sudoku__Int_9;

#line 120 "sudoku.m"
          {
#line 120 "sudoku.m"
            sudoku__load_puzzle_3_p_0(&sudoku__Puzzle1_10);
          }
#line 112 "sudoku.m"
          {
#line 112 "sudoku.m"
            sudoku__succeeded = mercury__char__digit_to_int_2_p_0(sudoku__Char_8, &sudoku__Int_9);
          }
#line 114 "sudoku.m"
          if (sudoku__succeeded)
#line 113 "sudoku.m"
            {
#line 113 "sudoku.m"
              MR_Word base;
#line 113 "sudoku.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 113 "sudoku.m"
              *sudoku__Puzzle_4 = base;
#line 113 "sudoku.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (sudoku__Int_9));
#line 113 "sudoku.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (sudoku__Puzzle1_10));
#line 113 "sudoku.m"
            }
#line 114 "sudoku.m"
          else
#line 118 "sudoku.m"
            {
#line 116 "sudoku.m"
#line 116 "sudoku.m"
              switch (sudoku__Char_8) {
#line 116 "sudoku.m"
                default:
#line 116 "sudoku.m"
                  sudoku__succeeded = MR_FALSE;
#line 116 "sudoku.m"
                  break;
#line 116 "sudoku.m"
                case (MR_Char) 32:
#line 116 "sudoku.m"
                  sudoku__succeeded = MR_TRUE;
#line 116 "sudoku.m"
                  break;
#line 116 "sudoku.m"
                case (MR_Char) 46:
#line 116 "sudoku.m"
                  sudoku__succeeded = MR_TRUE;
#line 116 "sudoku.m"
                  break;
#line 116 "sudoku.m"
                case (MR_Char) 95:
#line 116 "sudoku.m"
                  sudoku__succeeded = MR_TRUE;
#line 116 "sudoku.m"
                  break;
#line 116 "sudoku.m"
              }
#line 118 "sudoku.m"
              if (sudoku__succeeded)
#line 117 "sudoku.m"
                {
#line 117 "sudoku.m"
                  MR_Integer sudoku__V_14_14 = (MR_Integer) -1;

#line 117 "sudoku.m"
                  {
#line 117 "sudoku.m"
                    MR_Word base;
#line 117 "sudoku.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 117 "sudoku.m"
                    *sudoku__Puzzle_4 = base;
#line 117 "sudoku.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (sudoku__V_14_14));
#line 117 "sudoku.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (sudoku__Puzzle1_10));
#line 117 "sudoku.m"
                  }
#line 117 "sudoku.m"
                }
#line 118 "sudoku.m"
              else
#line 118 "sudoku.m"
                *sudoku__Puzzle_4 = sudoku__Puzzle1_10;
#line 118 "sudoku.m"
            }
#line 111 "sudoku.m"
        }
#line 111 "sudoku.m"
        break;
#line 111 "sudoku.m"
      case (MR_Integer) 2:
#line 110 "sudoku.m"
        *sudoku__Puzzle_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 111 "sudoku.m"
        break;
#line 111 "sudoku.m"
    }
#line 107 "sudoku.m"
  }
#line 100 "sudoku.m"
}

#line 19 "sudoku.m"
void MR_CALL 
main_2_p_0(void)
#line 19 "sudoku.m"
{
#line 25 "sudoku.m"
  {
#line 25 "sudoku.m"
    MR_bool sudoku__succeeded;
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
    sudoku__succeeded = ((MR_tag((MR_Word) sudoku__Args_4)) == (MR_mktag((MR_Integer) 1)));
#line 27 "sudoku.m"
    if (sudoku__succeeded)
#line 27 "sudoku.m"
      {
#line 27 "sudoku.m"
        sudoku__File_5 = ((MR_String) (MR_hl_field(MR_mktag(1), sudoku__Args_4, (MR_Integer) 0)));
#line 27 "sudoku.m"
        sudoku__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), sudoku__Args_4, (MR_Integer) 1)));
#line 27 "sudoku.m"
        sudoku__succeeded = (sudoku__V_11_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 27 "sudoku.m"
      }
#line 36 "sudoku.m"
    if (sudoku__succeeded)
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
#line 29 "sudoku.m"
            MR_Word sudoku__Puzzle_25;

#line 72 "sudoku.m"
            {
#line 72 "sudoku.m"
              sudoku__load_puzzle_3_p_0(&sudoku__Puzzle_25);
            }
#line 73 "sudoku.m"
            sudoku__succeeded = (sudoku__Puzzle_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 76 "sudoku.m"
            if (sudoku__succeeded)
#line 74 "sudoku.m"
              {
#line 74 "sudoku.m"
                MR_String sudoku__V_29_29 = (MR_String) "Error reading puzzle\n";
#line 74 "sudoku.m"
                MR_Integer sudoku__V_31_31;

#line 74 "sudoku.m"
                {
#line 74 "sudoku.m"
                  mercury__io__write_string_3_p_0(sudoku__V_29_29);
                }
#line 75 "sudoku.m"
                sudoku__V_31_31 = (MR_Integer) 1;
#line 75 "sudoku.m"
                {
#line 75 "sudoku.m"
                  mercury__io__set_exit_status_3_p_0(sudoku__V_31_31);
                }
#line 74 "sudoku.m"
              }
#line 76 "sudoku.m"
            else
#line 79 "sudoku.m"
              {
#line 79 "sudoku.m"
                MR_Integer sudoku__Size_26;
#line 79 "sudoku.m"
                MR_Integer sudoku__Boxsize_27;
#line 76 "sudoku.m"
                MR_Word sudoku__TypeCtorInfo_20_39 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 76 "sudoku.m"
                MR_Integer sudoku__V_33_33;

#line 76 "sudoku.m"
                {
#line 76 "sudoku.m"
                  sudoku__V_33_33 = mercury__list__length_1_f_0(sudoku__TypeCtorInfo_20_39, sudoku__Puzzle_25);
                }
#line 90 "sudoku.m"
#line 90 "sudoku.m"
                switch (sudoku__V_33_33) {
#line 90 "sudoku.m"
                  default:
#line 90 "sudoku.m"
                    sudoku__succeeded = MR_FALSE;
#line 90 "sudoku.m"
                    break;
#line 90 "sudoku.m"
                  case (MR_Integer) 16:
#line 90 "sudoku.m"
                    {
#line 90 "sudoku.m"
                      sudoku__Size_26 = (MR_Integer) 4;
#line 90 "sudoku.m"
                      sudoku__Boxsize_27 = (MR_Integer) 2;
#line 90 "sudoku.m"
                      sudoku__succeeded = MR_TRUE;
#line 90 "sudoku.m"
                    }
#line 90 "sudoku.m"
                    break;
#line 90 "sudoku.m"
                  case (MR_Integer) 81:
#line 91 "sudoku.m"
                    {
#line 91 "sudoku.m"
                      sudoku__Size_26 = (MR_Integer) 9;
#line 91 "sudoku.m"
                      sudoku__Boxsize_27 = (MR_Integer) 3;
#line 91 "sudoku.m"
                      sudoku__succeeded = MR_TRUE;
#line 91 "sudoku.m"
                    }
#line 90 "sudoku.m"
                    break;
#line 90 "sudoku.m"
                  case (MR_Integer) 256:
#line 92 "sudoku.m"
                    {
#line 92 "sudoku.m"
                      sudoku__Size_26 = (MR_Integer) 16;
#line 92 "sudoku.m"
                      sudoku__Boxsize_27 = (MR_Integer) 4;
#line 92 "sudoku.m"
                      sudoku__succeeded = MR_TRUE;
#line 92 "sudoku.m"
                    }
#line 90 "sudoku.m"
                    break;
#line 90 "sudoku.m"
                  case (MR_Integer) 625:
#line 93 "sudoku.m"
                    {
#line 93 "sudoku.m"
                      sudoku__Size_26 = (MR_Integer) 25;
#line 93 "sudoku.m"
                      sudoku__Boxsize_27 = (MR_Integer) 5;
#line 93 "sudoku.m"
                      sudoku__succeeded = MR_TRUE;
#line 93 "sudoku.m"
                    }
#line 90 "sudoku.m"
                    break;
#line 90 "sudoku.m"
                }
#line 79 "sudoku.m"
                if (sudoku__succeeded)
#line 78 "sudoku.m"
                  {
#line 78 "sudoku.m"
                    sudoku__print_puzzle_5_p_0(sudoku__Puzzle_25, sudoku__Size_26, sudoku__Boxsize_27);
                  }
#line 79 "sudoku.m"
                else
#line 79 "sudoku.m"
                  {
#line 79 "sudoku.m"
                    MR_String sudoku__V_35_35 = (MR_String) "Invalid puzzle size\n";
#line 79 "sudoku.m"
                    MR_Integer sudoku__V_37_37;

#line 79 "sudoku.m"
                    {
#line 79 "sudoku.m"
                      mercury__io__write_string_3_p_0(sudoku__V_35_35);
                    }
#line 80 "sudoku.m"
                    sudoku__V_37_37 = (MR_Integer) 1;
#line 80 "sudoku.m"
                    {
#line 80 "sudoku.m"
                      mercury__io__set_exit_status_3_p_0(sudoku__V_37_37);
                    }
#line 79 "sudoku.m"
                  }
#line 79 "sudoku.m"
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
        MR_String sudoku__V_43_43 = (MR_String) "Usage:  sudoku filname\n";
#line 36 "sudoku.m"
        MR_String sudoku__V_45_45;
#line 36 "sudoku.m"
        MR_String sudoku__V_47_47;
#line 36 "sudoku.m"
        MR_String sudoku__V_49_49;
#line 36 "sudoku.m"
        MR_String sudoku__V_51_51;
#line 36 "sudoku.m"
        MR_String sudoku__V_53_53;
#line 36 "sudoku.m"
        MR_String sudoku__V_55_55;
#line 36 "sudoku.m"
        MR_String sudoku__V_57_57;
#line 36 "sudoku.m"
        MR_String sudoku__V_59_59;

#line 46 "sudoku.m"
        {
#line 46 "sudoku.m"
          mercury__io__write_string_3_p_0(sudoku__V_43_43);
        }
#line 47 "sudoku.m"
        sudoku__V_45_45 = (MR_String) "  where filname is the name of a file containing a sudoku puzzle\n";
#line 47 "sudoku.m"
        {
#line 47 "sudoku.m"
          mercury__io__write_string_3_p_0(sudoku__V_45_45);
        }
#line 49 "sudoku.m"
        sudoku__V_47_47 = (MR_String) "  written as a file of 4, 9, 16, or 25 lines, each with that same\n";
#line 49 "sudoku.m"
        {
#line 49 "sudoku.m"
          mercury__io__write_string_3_p_0(sudoku__V_47_47);
        }
#line 51 "sudoku.m"
        sudoku__V_49_49 = (MR_String) "  number of characters.  All characters on each line must be either\n";
#line 51 "sudoku.m"
        {
#line 51 "sudoku.m"
          mercury__io__write_string_3_p_0(sudoku__V_49_49);
        }
#line 53 "sudoku.m"
        sudoku__V_51_51 = (MR_String) "  a space (for squares to be solved for) or a digit (except 0) or a\n";
#line 53 "sudoku.m"
        {
#line 53 "sudoku.m"
          mercury__io__write_string_3_p_0(sudoku__V_51_51);
        }
#line 55 "sudoku.m"
        sudoku__V_53_53 = (MR_String) "  letter.  A solved puzzle is the same, except that all spaces have\n";
#line 55 "sudoku.m"
        {
#line 55 "sudoku.m"
          mercury__io__write_string_3_p_0(sudoku__V_53_53);
        }
#line 57 "sudoku.m"
        sudoku__V_55_55 = (MR_String) "  been filled in with letters and digits, and each digit or letter\n";
#line 57 "sudoku.m"
        {
#line 57 "sudoku.m"
          mercury__io__write_string_3_p_0(sudoku__V_55_55);
        }
#line 59 "sudoku.m"
        sudoku__V_57_57 = (MR_String) "  between 1 and the width of the puzzle (where \'a\' is taken for 10,\n";
#line 59 "sudoku.m"
        {
#line 59 "sudoku.m"
          mercury__io__write_string_3_p_0(sudoku__V_57_57);
        }
#line 61 "sudoku.m"
        sudoku__V_59_59 = (MR_String) "  and so on) appears exactly once in each row, column, and box.\n";
#line 61 "sudoku.m"
        {
#line 61 "sudoku.m"
          mercury__io__write_string_3_p_0(sudoku__V_59_59);
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

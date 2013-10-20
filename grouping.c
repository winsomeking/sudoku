/*
** Automatically generated from `grouping.m'
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


/* :- module grouping. */
/* :- implementation. */

/*
INIT mercury__grouping__init
ENDINIT
*/

#include "grouping.mih"


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




#line 65 "grouping.c"
static const MR_FA_PseudoTypeInfo_Struct1 grouping__list__pti_list_1__pseudo_1;

#line 156 "grouping.m"
static MR_bool MR_CALL 
grouping__ungroup_single_5_p_0(
#line 156 "grouping.m"
  MR_Word grouping__TypeInfo_for_E_16,
#line 156 "grouping.m"
  MR_Integer grouping__Width_6,
#line 156 "grouping.m"
  MR_Word * grouping__List_7,
#line 156 "grouping.m"
  MR_Word grouping__List0_8,
#line 156 "grouping.m"
  MR_Word * grouping__Grouped_9,
#line 156 "grouping.m"
  MR_Word grouping__Grouped0_10);

#line 142 "grouping.m"
static MR_bool MR_CALL 
grouping__unchunk_list_5_p_0(
#line 142 "grouping.m"
  MR_Word grouping__TypeInfo_for_E_15,
#line 142 "grouping.m"
  MR_Integer grouping__Width_6,
#line 142 "grouping.m"
  MR_Integer grouping__Repeat_7,
#line 142 "grouping.m"
  MR_Word grouping__Grouped_8,
#line 142 "grouping.m"
  MR_Word * grouping__List_9,
#line 142 "grouping.m"
  MR_Word grouping__List0_10);

#line 125 "grouping.m"
static MR_bool MR_CALL 
grouping__ungroup_list1_5_p_0(
#line 125 "grouping.m"
  MR_Word grouping__TypeInfo_for_E_15,
#line 125 "grouping.m"
  MR_Integer grouping__Width_6,
#line 125 "grouping.m"
  MR_Integer grouping__Period_7,
#line 125 "grouping.m"
  MR_Integer grouping__Repeat_8,
#line 125 "grouping.m"
  MR_Word * grouping__List_9,
#line 125 "grouping.m"
  MR_Word grouping__Grouped_10);

#line 94 "grouping.m"
static MR_bool MR_CALL 
grouping__extract_prefix_5_p_1(
#line 94 "grouping.m"
  MR_Word grouping__TypeInfo_for_E_19,
#line 94 "grouping.m"
  MR_Integer grouping__Count_6,
#line 94 "grouping.m"
  MR_Word * grouping__STATE_VARIABLE_List_0_11,
#line 94 "grouping.m"
  MR_Word grouping__STATE_VARIABLE_List_12,
#line 94 "grouping.m"
  MR_Word * grouping__F0_8,
#line 94 "grouping.m"
  MR_Word grouping__F_9);

#line 93 "grouping.m"
static MR_bool MR_CALL 
grouping__extract_prefix_5_p_0(
#line 93 "grouping.m"
  MR_Word grouping__TypeInfo_for_E_19,
#line 93 "grouping.m"
  MR_Integer grouping__Count_6,
#line 93 "grouping.m"
  MR_Word grouping__STATE_VARIABLE_List_0_11,
#line 93 "grouping.m"
  MR_Word * grouping__STATE_VARIABLE_List_12,
#line 93 "grouping.m"
  MR_Word grouping__F0_8,
#line 93 "grouping.m"
  MR_Word * grouping__F_9);

#line 76 "grouping.m"
static MR_bool MR_CALL 
grouping__group_single_repeat_5_p_0(
#line 76 "grouping.m"
  MR_Word grouping__TypeInfo_for_E_18,
#line 76 "grouping.m"
  MR_Integer grouping__Width_6,
#line 76 "grouping.m"
  MR_Word grouping__STATE_VARIABLE_List_0_14,
#line 76 "grouping.m"
  MR_Word * grouping__STATE_VARIABLE_List_15,
#line 76 "grouping.m"
  MR_Word grouping__Grouped0_8,
#line 76 "grouping.m"
  MR_Word * grouping__Grouped_9);

#line 61 "grouping.m"
static MR_bool MR_CALL 
grouping__chunk_list_6_p_0(
#line 61 "grouping.m"
  MR_Word grouping__TypeInfo_for_E_21,
#line 61 "grouping.m"
  MR_Integer grouping__Width_7,
#line 61 "grouping.m"
  MR_Integer grouping__Repeat_8,
#line 61 "grouping.m"
  MR_Word grouping__STATE_VARIABLE_List_0_11,
#line 61 "grouping.m"
  MR_Word * grouping__STATE_VARIABLE_List_12,
#line 61 "grouping.m"
  MR_Word grouping__STATE_VARIABLE_Grouped_0_13,
#line 61 "grouping.m"
  MR_Word * grouping__STATE_VARIABLE_Grouped_14);

#line 41 "grouping.m"
static MR_bool MR_CALL 
grouping__group_list1_5_p_0(
#line 41 "grouping.m"
  MR_Word grouping__TypeInfo_for_E_18,
#line 41 "grouping.m"
  MR_Integer grouping__Width_6,
#line 41 "grouping.m"
  MR_Integer grouping__Period_7,
#line 41 "grouping.m"
  MR_Integer grouping__Repeat_8,
#line 41 "grouping.m"
  MR_Word grouping__List_9,
#line 41 "grouping.m"
  MR_Word * grouping__Grouped_10);

#line 116 "grouping.m"
static void MR_CALL 
grouping__ungroup_list_5_p_0_1(
#line 116 "grouping.m"
  MR_Box grouping__closure_arg,
#line 116 "grouping.m"
  MR_Box grouping__wrapper_arg_1,
#line 116 "grouping.m"
  MR_Box * grouping__wrapper_arg_2);

#line 33 "grouping.m"
static void MR_CALL 
grouping__group_list_5_p_0_1(
#line 33 "grouping.m"
  MR_Box grouping__closure_arg,
#line 33 "grouping.m"
  MR_Box grouping__wrapper_arg_1,
#line 33 "grouping.m"
  MR_Box * grouping__wrapper_arg_2);


static /* final */ const MR_Integer grouping_scalar_common_1[1][2];

static /* final */ const MR_Box grouping_scalar_common_2[1][6];




static /* final */ const MR_Integer grouping_scalar_common_1[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box grouping_scalar_common_2[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&grouping_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&grouping__list__pti_list_1__pseudo_1)),
    ((MR_Box) (&grouping__list__pti_list_1__pseudo_1))
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



#line 261 "grouping.c"
static const MR_FA_PseudoTypeInfo_Struct1 grouping__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 156 "grouping.m"
static MR_bool MR_CALL 
grouping__ungroup_single_5_p_0(
#line 156 "grouping.m"
  MR_Word grouping__TypeInfo_for_E_16,
#line 156 "grouping.m"
  MR_Integer grouping__Width_6,
#line 156 "grouping.m"
  MR_Word * grouping__List_7,
#line 156 "grouping.m"
  MR_Word grouping__List0_8,
#line 156 "grouping.m"
  MR_Word * grouping__Grouped_9,
#line 156 "grouping.m"
  MR_Word grouping__Grouped0_10)
#line 156 "grouping.m"
{
#line 165 "grouping.m"
  {
#line 165 "grouping.m"
    MR_bool grouping__succeeded;

#line 165 "grouping.m"
    if ((grouping__Grouped0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 162 "grouping.m"
      {
#line 163 "grouping.m"
        *grouping__Grouped_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 164 "grouping.m"
        *grouping__List_7 = grouping__List0_8;
#line 162 "grouping.m"
        grouping__succeeded = MR_TRUE;
#line 162 "grouping.m"
      }
#line 165 "grouping.m"
    else
#line 165 "grouping.m"
      {
#line 165 "grouping.m"
        MR_Word grouping__G0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), grouping__Grouped0_10, (MR_Integer) 0)));
#line 165 "grouping.m"
        MR_Word grouping__Grouped0tail_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), grouping__Grouped0_10, (MR_Integer) 1)));
#line 165 "grouping.m"
        MR_Word grouping__G_13;
#line 165 "grouping.m"
        MR_Word grouping__Groupedtail_14;
#line 165 "grouping.m"
        MR_Word grouping__List1_15;

#line 167 "grouping.m"
        {
#line 167 "grouping.m"
          grouping__succeeded = grouping__extract_prefix_5_p_1(grouping__TypeInfo_for_E_16, grouping__Width_6, &grouping__List1_15, grouping__List0_8, &grouping__G_13, grouping__G0_11);
        }
#line 165 "grouping.m"
        if (grouping__succeeded)
#line 165 "grouping.m"
          {
#line 168 "grouping.m"
            {
#line 168 "grouping.m"
              grouping__succeeded = grouping__ungroup_single_5_p_0(grouping__TypeInfo_for_E_16, grouping__Width_6, grouping__List_7, grouping__List1_15, &grouping__Groupedtail_14, grouping__Grouped0tail_12);
            }
#line 165 "grouping.m"
            if (grouping__succeeded)
#line 165 "grouping.m"
              {
#line 166 "grouping.m"
                {
#line 166 "grouping.m"
                  MR_Word base;
#line 166 "grouping.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 166 "grouping.m"
                  *grouping__Grouped_9 = base;
#line 166 "grouping.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (grouping__G_13));
#line 166 "grouping.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (grouping__Groupedtail_14));
#line 166 "grouping.m"
                }
#line 166 "grouping.m"
                grouping__succeeded = MR_TRUE;
#line 165 "grouping.m"
              }
#line 165 "grouping.m"
          }
#line 165 "grouping.m"
      }
#line 165 "grouping.m"
    return grouping__succeeded;
#line 165 "grouping.m"
  }
#line 156 "grouping.m"
}

#line 142 "grouping.m"
static MR_bool MR_CALL 
grouping__unchunk_list_5_p_0(
#line 142 "grouping.m"
  MR_Word grouping__TypeInfo_for_E_15,
#line 142 "grouping.m"
  MR_Integer grouping__Width_6,
#line 142 "grouping.m"
  MR_Integer grouping__Repeat_7,
#line 142 "grouping.m"
  MR_Word grouping__Grouped_8,
#line 142 "grouping.m"
  MR_Word * grouping__List_9,
#line 142 "grouping.m"
  MR_Word grouping__List0_10)
#line 142 "grouping.m"
{
#line 150 "grouping.m"
  while (MR_TRUE)
#line 150 "grouping.m"
    {
#line 150 "grouping.m"
      /* tailcall optimized into a loop */
#line 150 "grouping.m"
      {
#line 150 "grouping.m"
        MR_bool grouping__succeeded = (grouping__Repeat_7 == (MR_Integer) 0);

#line 150 "grouping.m"
        if (grouping__succeeded)
#line 149 "grouping.m"
          {
#line 149 "grouping.m"
            *grouping__List_9 = grouping__List0_10;
#line 149 "grouping.m"
            grouping__succeeded = MR_TRUE;
#line 149 "grouping.m"
          }
#line 150 "grouping.m"
        else
#line 150 "grouping.m"
          {
#line 150 "grouping.m"
            MR_Word grouping__List1_11;
#line 150 "grouping.m"
            MR_Word grouping__Grouped1_12;
#line 150 "grouping.m"
            MR_Integer grouping__V_13_13;
#line 150 "grouping.m"
            MR_Integer grouping__V_14_14;

#line 150 "grouping.m"
            {
#line 150 "grouping.m"
              grouping__succeeded = grouping__ungroup_single_5_p_0(grouping__TypeInfo_for_E_15, grouping__Width_6, &grouping__List1_11, grouping__List0_10, &grouping__Grouped1_12, grouping__Grouped_8);
            }
#line 150 "grouping.m"
            if (grouping__succeeded)
#line 150 "grouping.m"
              {
#line 151 "grouping.m"
                grouping__V_14_14 = (MR_Integer) 1;
#line 151 "grouping.m"
                grouping__V_13_13 = (grouping__Repeat_7 - grouping__V_14_14);
#line 151 "grouping.m"
                /* direct tailcall eliminated */
#line 151 "grouping.m"
                {
#line 151 "grouping.m"
                  MR_Integer grouping__Repeat__tmp_copy_7 = grouping__V_13_13;
#line 151 "grouping.m"
                  MR_Word grouping__Grouped__tmp_copy_8 = grouping__Grouped1_12;
#line 151 "grouping.m"
                  MR_Word grouping__List0__tmp_copy_10 = grouping__List1_11;

#line 151 "grouping.m"
                  grouping__List0_10 = grouping__List0__tmp_copy_10;
#line 151 "grouping.m"
                  grouping__Grouped_8 = grouping__Grouped__tmp_copy_8;
#line 151 "grouping.m"
                  grouping__Repeat_7 = grouping__Repeat__tmp_copy_7;
#line 151 "grouping.m"
                }
#line 151 "grouping.m"
                continue;
#line 150 "grouping.m"
              }
#line 150 "grouping.m"
          }
#line 150 "grouping.m"
        return grouping__succeeded;
#line 150 "grouping.m"
      }
#line 150 "grouping.m"
      break;
#line 150 "grouping.m"
    }
#line 142 "grouping.m"
}

#line 125 "grouping.m"
static MR_bool MR_CALL 
grouping__ungroup_list1_5_p_0(
#line 125 "grouping.m"
  MR_Word grouping__TypeInfo_for_E_15,
#line 125 "grouping.m"
  MR_Integer grouping__Width_6,
#line 125 "grouping.m"
  MR_Integer grouping__Period_7,
#line 125 "grouping.m"
  MR_Integer grouping__Repeat_8,
#line 125 "grouping.m"
  MR_Word * grouping__List_9,
#line 125 "grouping.m"
  MR_Word grouping__Grouped_10)
#line 125 "grouping.m"
{
#line 135 "grouping.m"
  {
#line 135 "grouping.m"
    MR_bool grouping__succeeded = (grouping__Grouped_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 135 "grouping.m"
    if (grouping__succeeded)
#line 134 "grouping.m"
      {
#line 134 "grouping.m"
        *grouping__List_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 134 "grouping.m"
        grouping__succeeded = MR_TRUE;
#line 134 "grouping.m"
      }
#line 135 "grouping.m"
    else
#line 135 "grouping.m"
      {
#line 135 "grouping.m"
        MR_Word grouping__TypeCtorInfo_16_16 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 135 "grouping.m"
        MR_Word grouping__TypeInfo_17_17;
#line 135 "grouping.m"
        MR_Word grouping__Chunk_11;
#line 135 "grouping.m"
        MR_Word grouping__Grouped1_12;
#line 135 "grouping.m"
        MR_Word grouping__List1_13;
#line 135 "grouping.m"
        MR_Word grouping__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 135 "grouping.m"
        MR_Word grouping__conv1_Chunk_11;
#line 135 "grouping.m"
        MR_Word grouping__conv0_Grouped1_12;

#line 518 "grouping.c"
        {
#line 520 "grouping.c"
          grouping__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 522 "grouping.c"
          MR_hl_field(MR_mktag(0), grouping__TypeInfo_17_17, 0) = ((MR_Box) (grouping__TypeCtorInfo_16_16));
#line 524 "grouping.c"
          MR_hl_field(MR_mktag(0), grouping__TypeInfo_17_17, 1) = ((MR_Box) (grouping__TypeInfo_for_E_15));
#line 526 "grouping.c"
        }
#line 135 "grouping.m"
        {
#line 135 "grouping.m"
          grouping__succeeded = grouping__extract_prefix_5_p_1(grouping__TypeInfo_17_17, grouping__Period_7, &grouping__conv1_Chunk_11, (MR_Word) grouping__V_14_14, &grouping__conv0_Grouped1_12, (MR_Word) grouping__Grouped_10);
        }
#line 135 "grouping.m"
        if (grouping__succeeded)
#line 135 "grouping.m"
          {
#line 135 "grouping.m"
            grouping__Chunk_11 = (MR_Word) grouping__conv1_Chunk_11;
#line 135 "grouping.m"
            grouping__Grouped1_12 = (MR_Word) grouping__conv0_Grouped1_12;
#line 135 "grouping.m"
            grouping__succeeded = MR_TRUE;
#line 135 "grouping.m"
          }
#line 135 "grouping.m"
        if (grouping__succeeded)
#line 135 "grouping.m"
          {
#line 136 "grouping.m"
            {
#line 136 "grouping.m"
              grouping__succeeded = grouping__ungroup_list1_5_p_0(grouping__TypeInfo_for_E_15, grouping__Width_6, grouping__Period_7, grouping__Repeat_8, &grouping__List1_13, grouping__Grouped1_12);
            }
#line 135 "grouping.m"
            if (grouping__succeeded)
#line 137 "grouping.m"
              {
#line 137 "grouping.m"
                return grouping__succeeded = grouping__unchunk_list_5_p_0(grouping__TypeInfo_for_E_15, grouping__Width_6, grouping__Repeat_8, grouping__Chunk_11, grouping__List_9, grouping__List1_13);
              }
#line 135 "grouping.m"
          }
#line 135 "grouping.m"
      }
#line 135 "grouping.m"
    return grouping__succeeded;
#line 135 "grouping.m"
  }
#line 125 "grouping.m"
}

#line 94 "grouping.m"
static MR_bool MR_CALL 
grouping__extract_prefix_5_p_1(
#line 94 "grouping.m"
  MR_Word grouping__TypeInfo_for_E_19,
#line 94 "grouping.m"
  MR_Integer grouping__Count_6,
#line 94 "grouping.m"
  MR_Word * grouping__STATE_VARIABLE_List_0_11,
#line 94 "grouping.m"
  MR_Word grouping__STATE_VARIABLE_List_12,
#line 94 "grouping.m"
  MR_Word * grouping__F0_8,
#line 94 "grouping.m"
  MR_Word grouping__F_9)
#line 94 "grouping.m"
{
#line 103 "grouping.m"
  {
#line 103 "grouping.m"
    MR_bool grouping__succeeded;
#line 101 "grouping.m"
    MR_Integer grouping__V_13_13 = (MR_Integer) 0;

#line 101 "grouping.m"
    grouping__succeeded = (grouping__Count_6 <= grouping__V_13_13);
#line 103 "grouping.m"
    if (grouping__succeeded)
#line 102 "grouping.m"
      {
#line 102 "grouping.m"
        *grouping__F0_8 = grouping__F_9;
#line 102 "grouping.m"
        *grouping__STATE_VARIABLE_List_0_11 = grouping__STATE_VARIABLE_List_12;
#line 102 "grouping.m"
        grouping__succeeded = MR_TRUE;
#line 102 "grouping.m"
      }
#line 103 "grouping.m"
    else
#line 103 "grouping.m"
      {
#line 103 "grouping.m"
        MR_Box grouping__E_10;
#line 103 "grouping.m"
        MR_Word grouping__STATE_VARIABLE_List_14_14;
#line 103 "grouping.m"
        MR_Integer grouping__V_15_15;
#line 103 "grouping.m"
        MR_Word grouping__V_17_17;
#line 103 "grouping.m"
        MR_Integer grouping__V_18_18 = (MR_Integer) 1;

#line 104 "grouping.m"
        grouping__V_15_15 = (grouping__Count_6 - grouping__V_18_18);
#line 104 "grouping.m"
        {
#line 104 "grouping.m"
          grouping__succeeded = grouping__extract_prefix_5_p_1(grouping__TypeInfo_for_E_19, grouping__V_15_15, &grouping__STATE_VARIABLE_List_14_14, grouping__STATE_VARIABLE_List_12, &grouping__V_17_17, grouping__F_9);
        }
#line 103 "grouping.m"
        if (grouping__succeeded)
#line 103 "grouping.m"
          {
#line 104 "grouping.m"
            grouping__succeeded = ((MR_tag((MR_Word) grouping__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 104 "grouping.m"
            if (grouping__succeeded)
#line 104 "grouping.m"
              {
#line 104 "grouping.m"
                grouping__E_10 = (MR_hl_field(MR_mktag(1), grouping__V_17_17, (MR_Integer) 0));
#line 104 "grouping.m"
                *grouping__F0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), grouping__V_17_17, (MR_Integer) 1)));
#line 103 "grouping.m"
                {
#line 103 "grouping.m"
                  MR_Word base;
#line 103 "grouping.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 103 "grouping.m"
                  *grouping__STATE_VARIABLE_List_0_11 = base;
#line 103 "grouping.m"
                  MR_hl_field(MR_mktag(1), base, 0) = grouping__E_10;
#line 103 "grouping.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (grouping__STATE_VARIABLE_List_14_14));
#line 103 "grouping.m"
                }
#line 103 "grouping.m"
                grouping__succeeded = MR_TRUE;
#line 104 "grouping.m"
              }
#line 103 "grouping.m"
          }
#line 103 "grouping.m"
      }
#line 103 "grouping.m"
    return grouping__succeeded;
#line 103 "grouping.m"
  }
#line 94 "grouping.m"
}

#line 93 "grouping.m"
static MR_bool MR_CALL 
grouping__extract_prefix_5_p_0(
#line 93 "grouping.m"
  MR_Word grouping__TypeInfo_for_E_19,
#line 93 "grouping.m"
  MR_Integer grouping__Count_6,
#line 93 "grouping.m"
  MR_Word grouping__STATE_VARIABLE_List_0_11,
#line 93 "grouping.m"
  MR_Word * grouping__STATE_VARIABLE_List_12,
#line 93 "grouping.m"
  MR_Word grouping__F0_8,
#line 93 "grouping.m"
  MR_Word * grouping__F_9)
#line 93 "grouping.m"
{
#line 103 "grouping.m"
  while (MR_TRUE)
#line 103 "grouping.m"
    {
#line 103 "grouping.m"
      /* tailcall optimized into a loop */
#line 103 "grouping.m"
      {
#line 103 "grouping.m"
        MR_bool grouping__succeeded;
#line 101 "grouping.m"
        MR_Integer grouping__V_13_13 = (MR_Integer) 0;

#line 101 "grouping.m"
        grouping__succeeded = (grouping__Count_6 <= grouping__V_13_13);
#line 103 "grouping.m"
        if (grouping__succeeded)
#line 102 "grouping.m"
          {
#line 102 "grouping.m"
            *grouping__F_9 = grouping__F0_8;
#line 102 "grouping.m"
            *grouping__STATE_VARIABLE_List_12 = grouping__STATE_VARIABLE_List_0_11;
#line 102 "grouping.m"
            grouping__succeeded = MR_TRUE;
#line 102 "grouping.m"
          }
#line 103 "grouping.m"
        else
#line 103 "grouping.m"
          {
#line 103 "grouping.m"
            MR_Box grouping__E_10;
#line 103 "grouping.m"
            MR_Word grouping__STATE_VARIABLE_List_14_14;
#line 103 "grouping.m"
            MR_Integer grouping__V_15_15;
#line 103 "grouping.m"
            MR_Word grouping__V_17_17;
#line 103 "grouping.m"
            MR_Integer grouping__V_18_18;

#line 103 "grouping.m"
            grouping__succeeded = ((MR_tag((MR_Word) grouping__STATE_VARIABLE_List_0_11)) == (MR_mktag((MR_Integer) 1)));
#line 103 "grouping.m"
            if (grouping__succeeded)
#line 103 "grouping.m"
              {
#line 103 "grouping.m"
                grouping__E_10 = (MR_hl_field(MR_mktag(1), grouping__STATE_VARIABLE_List_0_11, (MR_Integer) 0));
#line 103 "grouping.m"
                grouping__STATE_VARIABLE_List_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), grouping__STATE_VARIABLE_List_0_11, (MR_Integer) 1)));
#line 104 "grouping.m"
                grouping__V_18_18 = (MR_Integer) 1;
#line 104 "grouping.m"
                grouping__V_15_15 = (grouping__Count_6 - grouping__V_18_18);
#line 104 "grouping.m"
                {
#line 104 "grouping.m"
                  grouping__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 104 "grouping.m"
                  MR_hl_field(MR_mktag(1), grouping__V_17_17, 0) = grouping__E_10;
#line 104 "grouping.m"
                  MR_hl_field(MR_mktag(1), grouping__V_17_17, 1) = ((MR_Box) (grouping__F0_8));
#line 104 "grouping.m"
                }
#line 104 "grouping.m"
                {
#line 104 "grouping.m"
                  /* direct tailcall eliminated */
#line 104 "grouping.m"
                  {
#line 104 "grouping.m"
                    MR_Integer grouping__Count__tmp_copy_6 = grouping__V_15_15;
#line 104 "grouping.m"
                    MR_Word grouping__STATE_VARIABLE_List_0__tmp_copy_11 = grouping__STATE_VARIABLE_List_14_14;
#line 104 "grouping.m"
                    MR_Word grouping__F0__tmp_copy_8 = grouping__V_17_17;

#line 104 "grouping.m"
                    grouping__F0_8 = grouping__F0__tmp_copy_8;
#line 104 "grouping.m"
                    grouping__STATE_VARIABLE_List_0_11 = grouping__STATE_VARIABLE_List_0__tmp_copy_11;
#line 104 "grouping.m"
                    grouping__Count_6 = grouping__Count__tmp_copy_6;
#line 104 "grouping.m"
                  }
#line 104 "grouping.m"
                  continue;
#line 104 "grouping.m"
                }
#line 103 "grouping.m"
              }
#line 103 "grouping.m"
          }
#line 103 "grouping.m"
        return grouping__succeeded;
#line 103 "grouping.m"
      }
#line 103 "grouping.m"
      break;
#line 103 "grouping.m"
    }
#line 93 "grouping.m"
}

#line 76 "grouping.m"
static MR_bool MR_CALL 
grouping__group_single_repeat_5_p_0(
#line 76 "grouping.m"
  MR_Word grouping__TypeInfo_for_E_18,
#line 76 "grouping.m"
  MR_Integer grouping__Width_6,
#line 76 "grouping.m"
  MR_Word grouping__STATE_VARIABLE_List_0_14,
#line 76 "grouping.m"
  MR_Word * grouping__STATE_VARIABLE_List_15,
#line 76 "grouping.m"
  MR_Word grouping__Grouped0_8,
#line 76 "grouping.m"
  MR_Word * grouping__Grouped_9)
#line 76 "grouping.m"
{
#line 85 "grouping.m"
  {
#line 85 "grouping.m"
    MR_bool grouping__succeeded;

#line 85 "grouping.m"
    if ((grouping__Grouped0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 83 "grouping.m"
      {
#line 84 "grouping.m"
        *grouping__Grouped_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 84 "grouping.m"
        *grouping__STATE_VARIABLE_List_15 = grouping__STATE_VARIABLE_List_0_14;
#line 83 "grouping.m"
        grouping__succeeded = MR_TRUE;
#line 83 "grouping.m"
      }
#line 85 "grouping.m"
    else
#line 85 "grouping.m"
      {
#line 85 "grouping.m"
        MR_Word grouping__G0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), grouping__Grouped0_8, (MR_Integer) 0)));
#line 85 "grouping.m"
        MR_Word grouping__Grouped0tail_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), grouping__Grouped0_8, (MR_Integer) 1)));
#line 85 "grouping.m"
        MR_Word grouping__G_12;
#line 85 "grouping.m"
        MR_Word grouping__Groupedtail_13;
#line 85 "grouping.m"
        MR_Word grouping__STATE_VARIABLE_List_16_16;

#line 87 "grouping.m"
        {
#line 87 "grouping.m"
          grouping__succeeded = grouping__extract_prefix_5_p_0(grouping__TypeInfo_for_E_18, grouping__Width_6, grouping__STATE_VARIABLE_List_0_14, &grouping__STATE_VARIABLE_List_16_16, grouping__G0_10, &grouping__G_12);
        }
#line 85 "grouping.m"
        if (grouping__succeeded)
#line 85 "grouping.m"
          {
#line 88 "grouping.m"
            {
#line 88 "grouping.m"
              grouping__succeeded = grouping__group_single_repeat_5_p_0(grouping__TypeInfo_for_E_18, grouping__Width_6, grouping__STATE_VARIABLE_List_16_16, grouping__STATE_VARIABLE_List_15, grouping__Grouped0tail_11, &grouping__Groupedtail_13);
            }
#line 85 "grouping.m"
            if (grouping__succeeded)
#line 85 "grouping.m"
              {
#line 86 "grouping.m"
                {
#line 86 "grouping.m"
                  MR_Word base;
#line 86 "grouping.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 86 "grouping.m"
                  *grouping__Grouped_9 = base;
#line 86 "grouping.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (grouping__G_12));
#line 86 "grouping.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (grouping__Groupedtail_13));
#line 86 "grouping.m"
                }
#line 86 "grouping.m"
                grouping__succeeded = MR_TRUE;
#line 85 "grouping.m"
              }
#line 85 "grouping.m"
          }
#line 85 "grouping.m"
      }
#line 85 "grouping.m"
    return grouping__succeeded;
#line 85 "grouping.m"
  }
#line 76 "grouping.m"
}

#line 61 "grouping.m"
static MR_bool MR_CALL 
grouping__chunk_list_6_p_0(
#line 61 "grouping.m"
  MR_Word grouping__TypeInfo_for_E_21,
#line 61 "grouping.m"
  MR_Integer grouping__Width_7,
#line 61 "grouping.m"
  MR_Integer grouping__Repeat_8,
#line 61 "grouping.m"
  MR_Word grouping__STATE_VARIABLE_List_0_11,
#line 61 "grouping.m"
  MR_Word * grouping__STATE_VARIABLE_List_12,
#line 61 "grouping.m"
  MR_Word grouping__STATE_VARIABLE_Grouped_0_13,
#line 61 "grouping.m"
  MR_Word * grouping__STATE_VARIABLE_Grouped_14)
#line 61 "grouping.m"
{
#line 69 "grouping.m"
  while (MR_TRUE)
#line 69 "grouping.m"
    {
#line 69 "grouping.m"
      /* tailcall optimized into a loop */
#line 69 "grouping.m"
      {
#line 69 "grouping.m"
        MR_bool grouping__succeeded = (grouping__Repeat_8 == (MR_Integer) 0);

#line 69 "grouping.m"
        if (grouping__succeeded)
#line 68 "grouping.m"
          {
#line 68 "grouping.m"
            *grouping__STATE_VARIABLE_Grouped_14 = grouping__STATE_VARIABLE_Grouped_0_13;
#line 68 "grouping.m"
            *grouping__STATE_VARIABLE_List_12 = grouping__STATE_VARIABLE_List_0_11;
#line 68 "grouping.m"
            grouping__succeeded = MR_TRUE;
#line 68 "grouping.m"
          }
#line 69 "grouping.m"
        else
#line 69 "grouping.m"
          {
#line 69 "grouping.m"
            MR_Word grouping__STATE_VARIABLE_List_15_15;
#line 69 "grouping.m"
            MR_Word grouping__STATE_VARIABLE_Grouped_16_16;
#line 69 "grouping.m"
            MR_Integer grouping__V_17_17;
#line 69 "grouping.m"
            MR_Integer grouping__V_20_20;

#line 69 "grouping.m"
            {
#line 69 "grouping.m"
              grouping__succeeded = grouping__group_single_repeat_5_p_0(grouping__TypeInfo_for_E_21, grouping__Width_7, grouping__STATE_VARIABLE_List_0_11, &grouping__STATE_VARIABLE_List_15_15, grouping__STATE_VARIABLE_Grouped_0_13, &grouping__STATE_VARIABLE_Grouped_16_16);
            }
#line 69 "grouping.m"
            if (grouping__succeeded)
#line 69 "grouping.m"
              {
#line 70 "grouping.m"
                grouping__V_20_20 = (MR_Integer) 1;
#line 70 "grouping.m"
                grouping__V_17_17 = (grouping__Repeat_8 - grouping__V_20_20);
#line 70 "grouping.m"
                /* direct tailcall eliminated */
#line 70 "grouping.m"
                {
#line 70 "grouping.m"
                  MR_Integer grouping__Repeat__tmp_copy_8 = grouping__V_17_17;
#line 70 "grouping.m"
                  MR_Word grouping__STATE_VARIABLE_List_0__tmp_copy_11 = grouping__STATE_VARIABLE_List_15_15;
#line 70 "grouping.m"
                  MR_Word grouping__STATE_VARIABLE_Grouped_0__tmp_copy_13 = grouping__STATE_VARIABLE_Grouped_16_16;

#line 70 "grouping.m"
                  grouping__STATE_VARIABLE_Grouped_0_13 = grouping__STATE_VARIABLE_Grouped_0__tmp_copy_13;
#line 70 "grouping.m"
                  grouping__STATE_VARIABLE_List_0_11 = grouping__STATE_VARIABLE_List_0__tmp_copy_11;
#line 70 "grouping.m"
                  grouping__Repeat_8 = grouping__Repeat__tmp_copy_8;
#line 70 "grouping.m"
                }
#line 70 "grouping.m"
                continue;
#line 69 "grouping.m"
              }
#line 69 "grouping.m"
          }
#line 69 "grouping.m"
        return grouping__succeeded;
#line 69 "grouping.m"
      }
#line 69 "grouping.m"
      break;
#line 69 "grouping.m"
    }
#line 61 "grouping.m"
}

#line 41 "grouping.m"
static MR_bool MR_CALL 
grouping__group_list1_5_p_0(
#line 41 "grouping.m"
  MR_Word grouping__TypeInfo_for_E_18,
#line 41 "grouping.m"
  MR_Integer grouping__Width_6,
#line 41 "grouping.m"
  MR_Integer grouping__Period_7,
#line 41 "grouping.m"
  MR_Integer grouping__Repeat_8,
#line 41 "grouping.m"
  MR_Word grouping__List_9,
#line 41 "grouping.m"
  MR_Word * grouping__Grouped_10)
#line 41 "grouping.m"
{
#line 51 "grouping.m"
  {
#line 51 "grouping.m"
    MR_bool grouping__succeeded;

#line 51 "grouping.m"
    if ((grouping__List_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 50 "grouping.m"
      {
#line 50 "grouping.m"
        *grouping__Grouped_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 50 "grouping.m"
        grouping__succeeded = MR_TRUE;
#line 50 "grouping.m"
      }
#line 51 "grouping.m"
    else
#line 51 "grouping.m"
      {
#line 51 "grouping.m"
        MR_Word grouping__TypeCtorInfo_19_19 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 51 "grouping.m"
        MR_Word grouping__TypeInfo_20_20;
#line 51 "grouping.m"
        MR_Word grouping__Grouped0_13;
#line 51 "grouping.m"
        MR_Word grouping__List1_14;
#line 51 "grouping.m"
        MR_Word grouping__Grouped1_15;
#line 51 "grouping.m"
        MR_Word grouping__Grouped2_16;
#line 51 "grouping.m"
        MR_Word grouping__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 52 "grouping.m"
        MR_Word grouping__conv0_Grouped0_13;
#line 56 "grouping.m"
        MR_Word grouping__conv1_Grouped_10;

#line 1053 "grouping.c"
        {
#line 1055 "grouping.c"
          grouping__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1057 "grouping.c"
          MR_hl_field(MR_mktag(0), grouping__TypeInfo_20_20, 0) = ((MR_Box) (grouping__TypeCtorInfo_19_19));
#line 1059 "grouping.c"
          MR_hl_field(MR_mktag(0), grouping__TypeInfo_20_20, 1) = ((MR_Box) (grouping__TypeInfo_for_E_18));
#line 1061 "grouping.c"
        }
#line 52 "grouping.m"
        {
#line 52 "grouping.m"
          mercury__list__duplicate_3_p_0(grouping__TypeInfo_20_20, grouping__Period_7, ((MR_Box) (grouping__V_17_17)), &grouping__conv0_Grouped0_13);
        }
#line 52 "grouping.m"
        grouping__Grouped0_13 = (MR_Word) grouping__conv0_Grouped0_13;
#line 53 "grouping.m"
        {
#line 53 "grouping.m"
          grouping__succeeded = grouping__chunk_list_6_p_0(grouping__TypeInfo_for_E_18, grouping__Width_6, grouping__Repeat_8, grouping__List_9, &grouping__List1_14, grouping__Grouped0_13, &grouping__Grouped1_15);
        }
#line 51 "grouping.m"
        if (grouping__succeeded)
#line 51 "grouping.m"
          {
#line 54 "grouping.m"
            {
#line 54 "grouping.m"
              grouping__succeeded = grouping__group_list1_5_p_0(grouping__TypeInfo_for_E_18, grouping__Width_6, grouping__Period_7, grouping__Repeat_8, grouping__List1_14, &grouping__Grouped2_16);
            }
#line 51 "grouping.m"
            if (grouping__succeeded)
#line 51 "grouping.m"
              {
#line 56 "grouping.m"
                {
#line 56 "grouping.m"
                  mercury__list__append_3_p_1(grouping__TypeInfo_20_20, (MR_Word) grouping__Grouped1_15, (MR_Word) grouping__Grouped2_16, &grouping__conv1_Grouped_10);
                }
#line 56 "grouping.m"
                *grouping__Grouped_10 = (MR_Word) grouping__conv1_Grouped_10;
#line 56 "grouping.m"
                grouping__succeeded = MR_TRUE;
#line 51 "grouping.m"
              }
#line 51 "grouping.m"
          }
#line 51 "grouping.m"
      }
#line 51 "grouping.m"
    return grouping__succeeded;
#line 51 "grouping.m"
  }
#line 41 "grouping.m"
}

#line 116 "grouping.m"
static void MR_CALL 
grouping__ungroup_list_5_p_0_1(
#line 116 "grouping.m"
  MR_Box grouping__closure_arg,
#line 116 "grouping.m"
  MR_Box grouping__wrapper_arg_1,
#line 116 "grouping.m"
  MR_Box * grouping__wrapper_arg_2)
#line 116 "grouping.m"
{
#line 116 "grouping.m"
  {
#line 116 "grouping.m"
    MR_Box grouping__closure = grouping__closure_arg;
#line 116 "grouping.m"
    MR_Word grouping__conv0_HeadVar__2_2;

#line 116 "grouping.m"
    {
#line 116 "grouping.m"
      mercury__list__reverse_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), grouping__closure, (MR_Integer) 3))), ((MR_Word) grouping__wrapper_arg_1), &grouping__conv0_HeadVar__2_2);
    }
#line 116 "grouping.m"
    *grouping__wrapper_arg_2 = ((MR_Box) (grouping__conv0_HeadVar__2_2));
#line 116 "grouping.m"
  }
#line 116 "grouping.m"
}

#line 14 "grouping.m"
void MR_CALL 
grouping__ungroup_list_5_p_0(
#line 14 "grouping.m"
  MR_Word grouping__TypeInfo_for_E_21,
#line 14 "grouping.m"
  MR_Integer grouping__Width_6,
#line 14 "grouping.m"
  MR_Integer grouping__Period_7,
#line 14 "grouping.m"
  MR_Integer grouping__Repeat_8,
#line 14 "grouping.m"
  MR_Word * grouping__List_9,
#line 14 "grouping.m"
  MR_Word grouping__Grouped_10)
#line 14 "grouping.m"
{
#line 115 "grouping.m"
  {
#line 115 "grouping.m"
    MR_bool grouping__succeeded;
#line 115 "grouping.m"
    MR_Word grouping__TypeCtorInfo_22_22;
#line 115 "grouping.m"
    MR_Word grouping__TypeInfo_23_23;
#line 115 "grouping.m"
    MR_Word grouping__Grouped_rev_13;
#line 115 "grouping.m"
    MR_Word grouping__V_15_15;
#line 120 "grouping.m"
    MR_Word grouping__List1_14;

#line 116 "grouping.m"
    {
#line 116 "grouping.m"
      grouping__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 116 "grouping.m"
      MR_hl_field(MR_mktag(0), grouping__V_15_15, 0) = ((MR_Box) (&grouping_scalar_common_2[0]));
#line 116 "grouping.m"
      MR_hl_field(MR_mktag(0), grouping__V_15_15, 1) = ((MR_Box) (grouping__ungroup_list_5_p_0_1));
#line 116 "grouping.m"
      MR_hl_field(MR_mktag(0), grouping__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 116 "grouping.m"
      MR_hl_field(MR_mktag(0), grouping__V_15_15, 3) = ((MR_Box) (grouping__TypeInfo_for_E_21));
#line 116 "grouping.m"
    }
#line 1186 "grouping.c"
    grouping__TypeCtorInfo_22_22 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 1188 "grouping.c"
    {
#line 1190 "grouping.c"
      grouping__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1192 "grouping.c"
      MR_hl_field(MR_mktag(0), grouping__TypeInfo_23_23, 0) = ((MR_Box) (grouping__TypeCtorInfo_22_22));
#line 1194 "grouping.c"
      MR_hl_field(MR_mktag(0), grouping__TypeInfo_23_23, 1) = ((MR_Box) (grouping__TypeInfo_for_E_21));
#line 1196 "grouping.c"
    }
#line 116 "grouping.m"
    {
#line 116 "grouping.m"
      mercury__list__map_3_p_0(grouping__TypeInfo_23_23, grouping__TypeInfo_23_23, (MR_Word) grouping__V_15_15, (MR_Word) grouping__Grouped_10, &grouping__Grouped_rev_13);
    }
#line 118 "grouping.m"
    {
#line 118 "grouping.m"
      grouping__succeeded = grouping__ungroup_list1_5_p_0(grouping__TypeInfo_for_E_21, grouping__Width_6, grouping__Period_7, grouping__Repeat_8, &grouping__List1_14, grouping__Grouped_rev_13);
    }
#line 120 "grouping.m"
    if (grouping__succeeded)
#line 119 "grouping.m"
      *grouping__List_9 = grouping__List1_14;
#line 120 "grouping.m"
    else
#line 120 "grouping.m"
      {
#line 120 "grouping.m"
        MR_String grouping__V_18_18 = (MR_String) "internal error:  wrong list lengths";

#line 120 "grouping.m"
        {
#line 120 "grouping.m"
          mercury__require__error_1_p_0(grouping__V_18_18);
#line 120 "grouping.m"
          return;
        }
#line 120 "grouping.m"
      }
#line 115 "grouping.m"
  }
#line 14 "grouping.m"
}

#line 33 "grouping.m"
static void MR_CALL 
grouping__group_list_5_p_0_1(
#line 33 "grouping.m"
  MR_Box grouping__closure_arg,
#line 33 "grouping.m"
  MR_Box grouping__wrapper_arg_1,
#line 33 "grouping.m"
  MR_Box * grouping__wrapper_arg_2)
#line 33 "grouping.m"
{
#line 33 "grouping.m"
  {
#line 33 "grouping.m"
    MR_Box grouping__closure = grouping__closure_arg;
#line 33 "grouping.m"
    MR_Word grouping__conv0_HeadVar__2_2;

#line 33 "grouping.m"
    {
#line 33 "grouping.m"
      mercury__list__reverse_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), grouping__closure, (MR_Integer) 3))), ((MR_Word) grouping__wrapper_arg_1), &grouping__conv0_HeadVar__2_2);
    }
#line 33 "grouping.m"
    *grouping__wrapper_arg_2 = ((MR_Box) (grouping__conv0_HeadVar__2_2));
#line 33 "grouping.m"
  }
#line 33 "grouping.m"
}

#line 11 "grouping.m"
void MR_CALL 
grouping__group_list_5_p_0(
#line 11 "grouping.m"
  MR_Word grouping__TypeInfo_for_E_20,
#line 11 "grouping.m"
  MR_Integer grouping__Width_6,
#line 11 "grouping.m"
  MR_Integer grouping__Period_7,
#line 11 "grouping.m"
  MR_Integer grouping__Repeat_8,
#line 11 "grouping.m"
  MR_Word grouping__List_9,
#line 11 "grouping.m"
  MR_Word * grouping__Grouped_10)
#line 11 "grouping.m"
{
#line 35 "grouping.m"
  {
#line 35 "grouping.m"
    MR_bool grouping__succeeded;
#line 35 "grouping.m"
    MR_Word grouping__Grouped_rev_11;

#line 32 "grouping.m"
    {
#line 32 "grouping.m"
      grouping__succeeded = grouping__group_list1_5_p_0(grouping__TypeInfo_for_E_20, grouping__Width_6, grouping__Period_7, grouping__Repeat_8, grouping__List_9, &grouping__Grouped_rev_11);
    }
#line 35 "grouping.m"
    if (grouping__succeeded)
#line 33 "grouping.m"
      {
#line 33 "grouping.m"
        MR_Word grouping__TypeCtorInfo_21_21;
#line 33 "grouping.m"
        MR_Word grouping__TypeInfo_22_22;
#line 33 "grouping.m"
        MR_Word grouping__V_14_14;

#line 33 "grouping.m"
        {
#line 33 "grouping.m"
          grouping__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 33 "grouping.m"
          MR_hl_field(MR_mktag(0), grouping__V_14_14, 0) = ((MR_Box) (&grouping_scalar_common_2[0]));
#line 33 "grouping.m"
          MR_hl_field(MR_mktag(0), grouping__V_14_14, 1) = ((MR_Box) (grouping__group_list_5_p_0_1));
#line 33 "grouping.m"
          MR_hl_field(MR_mktag(0), grouping__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 33 "grouping.m"
          MR_hl_field(MR_mktag(0), grouping__V_14_14, 3) = ((MR_Box) (grouping__TypeInfo_for_E_20));
#line 33 "grouping.m"
        }
#line 1317 "grouping.c"
        grouping__TypeCtorInfo_21_21 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 1319 "grouping.c"
        {
#line 1321 "grouping.c"
          grouping__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1323 "grouping.c"
          MR_hl_field(MR_mktag(0), grouping__TypeInfo_22_22, 0) = ((MR_Box) (grouping__TypeCtorInfo_21_21));
#line 1325 "grouping.c"
          MR_hl_field(MR_mktag(0), grouping__TypeInfo_22_22, 1) = ((MR_Box) (grouping__TypeInfo_for_E_20));
#line 1327 "grouping.c"
        }
#line 33 "grouping.m"
        {
#line 33 "grouping.m"
          mercury__list__map_3_p_0(grouping__TypeInfo_22_22, grouping__TypeInfo_22_22, (MR_Word) grouping__V_14_14, (MR_Word) grouping__Grouped_rev_11, grouping__Grouped_10);
#line 33 "grouping.m"
          return;
        }
#line 33 "grouping.m"
      }
#line 35 "grouping.m"
    else
#line 35 "grouping.m"
      {
#line 35 "grouping.m"
        MR_String grouping__V_17_17 = (MR_String) "internal error:  wrong list lengths";

#line 35 "grouping.m"
        {
#line 35 "grouping.m"
          mercury__require__error_1_p_0(grouping__V_17_17);
#line 35 "grouping.m"
          return;
        }
#line 35 "grouping.m"
      }
#line 35 "grouping.m"
  }
#line 11 "grouping.m"
}

void mercury__grouping__init(void)
{
}

void mercury__grouping__init_type_tables(void)
{
}

void mercury__grouping__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module grouping. */

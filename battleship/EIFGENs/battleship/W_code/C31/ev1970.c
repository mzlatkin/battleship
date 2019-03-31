/*
 * Code for class EV_RADIO_BUTTON_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1970_25010(EIF_REFERENCE);
extern void F1970_25011(EIF_REFERENCE);
extern void F1970_25012(EIF_REFERENCE);
extern void F1970_25013(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1970_25014(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1970_25015(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1970_25016(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1970_25017(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1970_25018(EIF_REFERENCE);
extern void F1970_25019(EIF_REFERENCE);
extern void F1970_25020(EIF_REFERENCE);
extern void F1970_25021(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1970_25022(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE F1970_25023_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1970_25023(EIF_REFERENCE);
extern void EIF_Minit1970(void);

#ifdef __cplusplus
}
#endif

#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_RADIO_BUTTON_IMP}.make */
void F1970_25010 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_TYPED_VALUE ui1_1x = {{0}, SK_INT8};
#define ui1_1 ui1_1x.it_i1
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_8 ti1_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1969, Current, 0, 0, 30987);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1969, Current, 30987);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(15729, 1968))(Current);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(19171, dtype))(Current);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 16338, 0x10000000, 1); /* text_alignment */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16329, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(16338, dtype)) = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("is_initialized", EX_POST);
		ti1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15737, dtype))(Current)).it_i1);
		ui1_1 = ti1_1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(15743, dtype))(Current, ui1_1x)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui1_1
}

/* {EV_RADIO_BUTTON_IMP}.set_default_minimum_size */
void F1970_25011 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_default_minimum_size";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1969, Current, 2, 0, 30988);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1969, Current, 30988);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18885, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb2) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16323, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(1,1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4639, "is_empty", tr1))(tr1)).it_b);
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		RTHOOK(2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16318, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = RTCCL(tr1);
		if (EIF_TEST(loc1)) {
			RTHOOK(3);
			RTDBGAA(Current, dtype, 19918, 0x10000000, 1); /* extra_width */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14846, "implementation", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(3,1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15866, "height", tr1))(tr1)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(19918, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 20L) + (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L)));
		} else {
			RTHOOK(4);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16319, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc2 = RTCCL(tr1);
			if (EIF_TEST(loc2)) {
				RTHOOK(5);
				RTDBGAA(Current, dtype, 19918, 0x10000000, 1); /* extra_width */
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17850, "height", loc2))(loc2)).it_i4);
				*(EIF_INTEGER_32 *)(Current + RTWA(19918, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 20L) + (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L)));
			} else {
				if (RTAL & CK_CHECK) {
					RTHOOK(6);
					RTCT("False", EX_CHECK);
						RTCF;
				}
			}
		}
	}
	RTHOOK(7);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(19533, 1968))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
}

/* {EV_RADIO_BUTTON_IMP}.enable_select */
void F1970_25012 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enable_select";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1969, Current, 2, 0, 30989);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1969, Current, 30989);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 2, 0xF80003A1, 0, 0); /* loc2 */
	loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16291, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTHOOK(3);
		RTDBGAL(Current, 1, 0xF800008E, 0, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2264, "cursor", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2292, "start", loc2))(loc2);
		for (;;) {
			RTHOOK(5);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2291, "off", loc2))(loc2)).it_b);
			if (tb1) break;
			RTHOOK(6);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2258, "item", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(6,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(19172, "set_unchecked", tr1))(tr1);
			RTHOOK(7);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2308, "forth", loc2))(loc2);
		}
		RTHOOK(8);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2266, "go_to", loc2))(loc2, ur1x);
	}
	RTHOOK(9);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(19171, dtype))(Current);
	RTHOOK(10);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8805, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTHOOK(11);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8804, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(11,1);
		ur1 = NULL;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3111, "call", tr1))(tr1, ur1x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("selected", EX_POST);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16301, dtype))(Current)).it_b);
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
}

/* {EV_RADIO_BUTTON_IMP}.on_bn_clicked */
void F1970_25013 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "on_bn_clicked";
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1969, Current, 0, 0, 30990);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1969, Current, 30990);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11897, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(16290, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_RADIO_BUTTON_IMP}.default_style */
RTOID (F1970_25014)
EIF_TYPED_VALUE F1970_25014 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_style";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOTDB(EIF_INTEGER_32, F1970_25014);
	dtype = Dtype(Current);

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1969, Current, 0, 0, 30991);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1969, Current, 30991);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10315, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10312, dtype))(Current)).it_i4);
	ui4_1 = ti4_2;
	ti4_2 = eif_bit_or(ti4_1,ui4_1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10331, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_1 = eif_bit_or(ti4_2,ui4_1);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10807, dtype))(Current)).it_i4);
	ui4_1 = ti4_2;
	ti4_2 = eif_bit_or(ti4_1,ui4_1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10314, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_1 = eif_bit_or(ti4_2,ui4_1);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10313, dtype))(Current)).it_i4);
	ui4_1 = ti4_2;
	ti4_2 = eif_bit_or(ti4_1,ui4_1);
	Result = (EIF_INTEGER_32) ti4_2;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ui4_1
#undef Result
}

/* {EV_RADIO_BUTTON_IMP}.next_dlggroupitem */
EIF_TYPED_VALUE F1970_25015 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "next_dlggroupitem";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_b
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_b = * (EIF_BOOLEAN *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_BOOL,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1969, Current, 2, 3, 30992);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1969, Current, 30992);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16291, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = RTCCL(tr1);
	if (EIF_TEST(loc2)) {
		RTHOOK(2);
		RTDBGAL(Current, 1, 0xF800008E, 0, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2264, "cursor", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2292, "start", loc2))(loc2);
		RTHOOK(4);
		ur1 = RTCCL(Current);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2301, "search", loc2))(loc2, ur1x);
		if (RTAL & CK_CHECK) {
			RTHOOK(5);
			RTCT("radio_group_not_off", EX_CHECK);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2291, "off", loc2))(loc2)).it_b);
			if ((EIF_BOOLEAN) !tb1) {
				RTCK;
			} else {
				RTCF;
			}
		}
		RTHOOK(6);
		if (arg3) {
			RTHOOK(7);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2308, "forth", loc2))(loc2);
			RTHOOK(8);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2291, "off", loc2))(loc2)).it_b);
			if (tb1) {
				RTHOOK(9);
				RTDBGAL(Current, 0, 0x40000000, 1,0); /* Result */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2677, "first", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(9,1);
				tp1 = *(EIF_POINTER *)(tr1 + RTVA(12360, "wel_item", tr1));
				Result = (EIF_POINTER) tp1;
			} else {
				RTHOOK(10);
				RTDBGAL(Current, 0, 0x40000000, 1,0); /* Result */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2258, "item", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(10,1);
				tp1 = *(EIF_POINTER *)(tr1 + RTVA(12360, "wel_item", tr1));
				Result = (EIF_POINTER) tp1;
			}
		} else {
			RTHOOK(11);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2360, "back", loc2))(loc2);
			RTHOOK(12);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2291, "off", loc2))(loc2)).it_b);
			if (tb1) {
				RTHOOK(13);
				RTDBGAL(Current, 0, 0x40000000, 1,0); /* Result */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2678, "last", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(13,1);
				tp1 = *(EIF_POINTER *)(tr1 + RTVA(12360, "wel_item", tr1));
				Result = (EIF_POINTER) tp1;
			} else {
				RTHOOK(14);
				RTDBGAL(Current, 0, 0x40000000, 1,0); /* Result */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2258, "item", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(14,1);
				tp1 = *(EIF_POINTER *)(tr1 + RTVA(12360, "wel_item", tr1));
				Result = (EIF_POINTER) tp1;
			}
		}
		RTHOOK(15);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2266, "go_to", loc2))(loc2, ur1x);
	} else {
		RTHOOK(16);
		RTDBGAL(Current, 0, 0x40000000, 1,0); /* Result */
		up1 = arg1;
		up2 = arg2;
		ub1 = arg3;
		Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18892, dtype))(Current, up1x, up2x, ub1x)).it_p);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ub1
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_RADIO_BUTTON_IMP}.process_navigation_key */
void F1970_25016 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "process_navigation_key";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1969, Current, 0, 1, 30993);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1969, Current, 30993);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case 39L:
		case 40L:
			RTHOOK(2);
			ub1 = (EIF_BOOLEAN) 1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(19932, dtype))(Current, ub1x);
			break;
		case 37L:
		case 38L:
			RTHOOK(3);
			ub1 = (EIF_BOOLEAN) 0;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(19932, dtype))(Current, ub1x);
			break;
		default:
			RTHOOK(4);
			ui4_1 = arg1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(19566, 1968))(Current, ui4_1x);
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ui4_1
#undef ub1
#undef arg1
}

/* {EV_RADIO_BUTTON_IMP}.arrow_action */
void F1970_25017 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "arrow_action";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_b
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,loc4);
	RTLR(1,Current);
	RTLR(2,loc3);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 1969, Current, 4, 1, 30980);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1969, Current, 30980);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 4, 0xF800079B, 0, 0); /* loc4 */
	loc4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19792, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc4 != NULL)) {
		RTHOOK(3);
		RTDBGAL(Current, 1, 0x40000000, 1, 0); /* loc1 */
		tp1 = *(EIF_POINTER *)(loc4 + RTVA(12360, "wel_item", loc4));
		up1 = tp1;
		tp2 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		up2 = tp2;
		ub1 = arg1;
		loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(19931, dtype))(Current, up1x, up2x, ub1x)).it_p);
	}
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc1 != loc2)) {
		RTHOOK(5);
		RTDBGAL(Current, 3, 0xF8000755, 0, 0); /* loc3 */
		up1 = loc1;
		loc3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(18203, dtype))(Current, up1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTHOOK(7);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(18544, "set_focus", loc3))(loc3);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef up2
#undef ub1
#undef arg1
}

/* {EV_RADIO_BUTTON_IMP}.internal_default_height */
EIF_TYPED_VALUE F1970_25018 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "internal_default_height";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1969, Current, 0, 0, 30981);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1969, Current, 30981);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {EV_RADIO_BUTTON_IMP}.update_current_push_button */
void F1970_25019 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "update_current_push_button";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1969, Current, 1, 0, 30982);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1969, Current, 30982);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF80006C8, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16234, Dtype(Current)))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18433, "window_with_focus", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	loc1 = RTCCL(tr2);
	loc1 = RTRV(eif_new_type(1736, 0x00), loc1);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16561, "internal_default_push_button", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(16564, "set_current_push_button", loc1))(loc1, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef ur1
}

/* {EV_RADIO_BUTTON_IMP}.fire_select_actions_on_enter */
void F1970_25020 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "fire_select_actions_on_enter";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1969, Current, 0, 0, 30983);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1969, Current, 30983);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_RADIO_BUTTON_IMP}.set_background_color */
void F1970_25021 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_background_color";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1969, Current, 0, 1, 30984);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1969, Current, 30984);
	RTCC(arg1, 1969, l_feature_name, 1, eif_new_type(1575, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_color_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 19535, 0xF8000704, 0); /* background_color_imp */
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14846, "implementation", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTCCL(tr2);
	*(EIF_REFERENCE *)(Current + RTWA(19535, dtype)) = RTRV(RTWCT(19535, dtype, Dftype(Current)), tr1);
	RTAR(Current, tr1);
	RTHOOK(3);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16405, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(19601, dtype))(Current);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("background_color_assigned", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15745, dtype))(Current)).it_b);
		if (tb2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16059, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(5,1);
			ur1 = RTCCL(arg1);
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11, "is_equal", tr1))(tr1, ur1x)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {EV_RADIO_BUTTON_IMP}.on_erase_background */
void F1970_25022 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "on_erase_background";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1969, Current, 0, 2, 30985);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1969, Current, 30985);
	RTCC(arg1, 1969, l_feature_name, 1, eif_new_type(1431, 0x01), 0x01);
	RTCC(arg2, 1969, l_feature_name, 2, eif_new_type(1526, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("paint_dc_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("invalid_rect_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("invalid_rect_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12362, "exists", arg2))(arg2)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(19603, dtype))(Current);
	RTHOOK(5);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11289, dtype))(Current, ui4_1x)).it_p);
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(19604, dtype))(Current, up1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {EV_RADIO_BUTTON_IMP}.interface */
static EIF_TYPED_VALUE F1970_25023_body (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "interface";
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1969, Current, 0, 0, 30986);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1969, Current, 30986);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

EIF_TYPED_VALUE F1970_25023 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(15734,Dtype(Current)));
	if (!r.it_r) {
		if (RTAT(RTWCT(15734, Dtype(Current), Dftype(Current)))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r.it_r = (F1970_25023_body (Current)).it_r;
			*(EIF_REFERENCE *)(Current + RTWA(15734,Dtype(Current))) = r.it_r;
			RTAR(Current, r.it_r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit1970 (void)
{
	GTCX
	RTOTS (25014,F1970_25014)
}


#ifdef __cplusplus
}
#endif

/*
 * Code for class EV_PIXEL_BUFFER_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1677_18912(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1677_18913(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1677_18914(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1677_18915(EIF_REFERENCE);
extern void F1677_18916(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1677_18917(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1677_18918(EIF_REFERENCE);
extern void F1677_18919(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1677_18920(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1677_18921(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1677_18922(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1677_18923(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1677_18924(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1677_18925(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1677_18926(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1677_18927(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1677_18928(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1677_18929(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1677_18930(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1677_18931(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1677_18932(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1677_18933(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1677_18934(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1677_18935(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1677_18936(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1677_18937(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1677_18938(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1677_18939(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1677_18940(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1677_18941(EIF_REFERENCE);
extern void F1677_18942(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1677_18943(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1677_18944(EIF_REFERENCE);
extern void F1677_18945(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1677_18946(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit1677(void);

#ifdef __cplusplus
}
#endif

#include <string.h>
#include <wel.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PIXEL_BUFFER_IMP}.make_with_size */
void F1677_18912 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "make_with_size";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1676, Current, 2, 2, 25634);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1676, Current, 25634);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("width_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("height_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15823, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(4);
		RTDBGAA(Current, dtype, 15816, 0x10000000, 1); /* initial_width */
		*(EIF_INTEGER_32 *)(Current + RTWA(15816, dtype)) = (EIF_INTEGER_32) arg1;
		RTHOOK(5);
		RTDBGAA(Current, dtype, 15817, 0x10000000, 1); /* initial_height */
		*(EIF_INTEGER_32 *)(Current + RTWA(15817, dtype)) = (EIF_INTEGER_32) arg2;
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15825, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = RTCCL(tr1);
		if (EIF_TEST(loc1)) {
			RTHOOK(7);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12367, "destroy_item", loc1))(loc1);
		}
		RTHOOK(8);
		RTDBGAA(Current, dtype, 15825, 0xF80005AC, 0); /* gdip_bitmap */
		tr1 = RTLNSMART(RTWCT(15825, dtype, Dftype(Current)).id);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(15816, dtype));
		ui4_1 = ti4_1;
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(15817, dtype));
		ui4_2 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(13009, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
		RTNHOOK(8,1);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(15825, dtype)) = (EIF_REFERENCE) tr1;
		if (RTAL & CK_CHECK) {
			RTHOOK(9);
			RTCT("created", EX_CHECK);
			tb1 = '\0';
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15825, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc2 = RTCCL(tr1);
			if (EIF_TEST(loc2)) {
				tp1 = *(EIF_POINTER *)(loc2 + RTVA(12360, "item", loc2));
				tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
				tb1 = (EIF_BOOLEAN)(tp1 != tp2);
			}
			if (tb1) {
				RTCK;
			} else {
				RTCF;
			}
		}
	} else {
		RTHOOK(10);
		RTDBGAA(Current, dtype, 15824, 0xF800065E, 0); /* pixmap */
		tr1 = RTLNSMART(RTWCT(15824, dtype, Dftype(Current)).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(10,1);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(15824, dtype)) = (EIF_REFERENCE) tr1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("set", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15823, dtype))(Current)).it_b);
		if (tb2) {
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(15816, dtype));
			tb1 = (EIF_BOOLEAN)(ti4_1 == arg1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("set", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15823, dtype))(Current)).it_b);
		if (tb2) {
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(15817, dtype));
			tb1 = (EIF_BOOLEAN)(ti4_1 == arg2);
		}
		if (tb1) {
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
	RTLO(6);
	RTEE;
#undef up1
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {EV_PIXEL_BUFFER_IMP}.old_make */
void F1677_18913 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "old_make";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1676, Current, 0, 1, 25635);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1676, Current, 25635);
	RTCC(arg1, 1676, l_feature_name, 1, eif_new_type(1574, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("an_interface_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(15727, dtype))(Current, ur1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("interface_assigned", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15734, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("base_make_called", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15744, dtype))(Current)).it_b);
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
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {EV_PIXEL_BUFFER_IMP}.make_with_pixmap */
void F1677_18914 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_with_pixmap";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc4);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,ur1);
	RTLR(6,loc2);
	RTLR(7,loc3);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 1676, Current, 4, 1, 25636);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1676, Current, 25636);
	RTCC(arg1, 1676, l_feature_name, 1, eif_new_type(1630, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15146, "width", arg1))(arg1)).it_i4);
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15147, "height", arg1))(arg1)).it_i4);
	ui4_2 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(15794, dtype))(Current, ui4_1x, ui4_2x);
	RTHOOK(3);
	RTDBGAL(Current, 4, 0xF80005AC, 0, 0); /* loc4 */
	loc4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15825, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(4);
	RTCT0("l_gdip_bitmap /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc4 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(5);
	RTDBGAL(Current, 1, 0xF80005AA, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1450, 0x01).id);
	ur1 = RTCCL(loc4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12912, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(5,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	RTDBGAL(Current, 2, 0xF8000591, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12937, "dc", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11648, "enable_reference_tracking", loc2))(loc2);
	RTHOOK(8);
	RTDBGAL(Current, 3, 0xF800078B, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(1934, 0x01).id);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(19511, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(8,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(9);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10838, "drawing_mode_copy", loc3))(loc3)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(16788, "set_drawing_mode", loc3))(loc3, ui4_1x);
	RTHOOK(10);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(16808, "draw_pixmap", loc3))(loc3, ui4_1x, ui4_2x, ur1x);
	RTHOOK(11);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12938, "release_dc", loc1))(loc1, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {EV_PIXEL_BUFFER_IMP}.make */
void F1677_18915 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui1_1x = {{0}, SK_INT8};
#define ui1_1 ui1_1x.it_i1
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_8 ti1_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1676, Current, 0, 0, 25637);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1676, Current, 25637);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15823, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAA(Current, dtype, 15825, 0xF80005AC, 0); /* gdip_bitmap */
		tr1 = RTLNSMART(RTWCT(15825, dtype, Dftype(Current)).id);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(13009, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
		RTNHOOK(2,1);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(15825, dtype)) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(3);
		RTDBGAA(Current, dtype, 15824, 0xF800065E, 0); /* pixmap */
		tr1 = RTLNSMART(RTWCT(15824, dtype, Dftype(Current)).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(3,1);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(15824, dtype)) = (EIF_REFERENCE) tr1;
	}
	RTHOOK(4);
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(15747, dtype))(Current, ub1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
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
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui4_1
#undef ui4_2
#undef ui1_1
#undef ub1
}

/* {EV_PIXEL_BUFFER_IMP}.destroy */
void F1677_18916 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "destroy";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1676, Current, 1, 0, 25638);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1676, Current, 25638);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(15749, dtype))(Current, ub1x);
	RTHOOK(2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15823, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15825, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = RTCCL(tr1);
		if (EIF_TEST(loc1)) {
			RTHOOK(4);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12367, "destroy_item", loc1))(loc1);
		}
	}
	RTHOOK(5);
	ub1 = (EIF_BOOLEAN) 1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(15748, dtype))(Current, ub1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("is_in_destroy_set", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15746, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("is_destroyed_set", EX_POST);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15732, dtype))(Current)).it_b);
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ub1
}

/* {EV_PIXEL_BUFFER_IMP}.initial_width */
EIF_TYPED_VALUE F1677_18917 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(15816,Dtype(Current)));
	return r;
}


/* {EV_PIXEL_BUFFER_IMP}.initial_height */
EIF_TYPED_VALUE F1677_18918 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(15817,Dtype(Current)));
	return r;
}


/* {EV_PIXEL_BUFFER_IMP}.set_with_named_path */
void F1677_18919 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_with_named_path";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,ur1);
	RTLR(4,loc2);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1676, Current, 2, 1, 25641);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1676, Current, 25641);
	RTCC(arg1, 1676, l_feature_name, 1, eif_new_type(185, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_file_name_valid", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3822, "is_empty", arg1))(arg1)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15823, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(Current, 1, 0xF80005AC, 0, 0); /* loc1 */
		loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15825, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(4);
		RTCT0("l_gdip_bitmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(5);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12967, "load_image_from_path", loc1))(loc1, ur1x);
	} else {
		RTHOOK(6);
		RTDBGAL(Current, 2, 0xF800065E, 0, 0); /* loc2 */
		loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15824, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(7);
		RTCT0("l_pixmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(8);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15522, "set_with_named_path", loc2))(loc2, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {EV_PIXEL_BUFFER_IMP}.set_with_pointer */
void F1677_18920 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "set_with_pointer";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1676, Current, 1, 2, 25642);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1676, Current, 25642);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15823, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 1, 0xF80005AC, 0, 0); /* loc1 */
		loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15825, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(3);
		RTCT0("l_gdip_bitmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(4);
		up1 = arg1;
		tu4_1 = (EIF_NATURAL_32) arg2;
		uu4_1 = tu4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(12970, "load_image_from_memory", loc1))(loc1, up1x, uu4_1x);
	} else {
		if (RTAL & CK_CHECK) {
			RTHOOK(5);
			RTCT("not_supported", EX_CHECK);
				RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {EV_PIXEL_BUFFER_IMP}.set_gdip_image */
void F1677_18921 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_gdip_image";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1676, Current, 1, 1, 25643);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1676, Current, 25643);
	RTCC(arg1, 1676, l_feature_name, 1, eif_new_type(1452, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15823, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15825, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3245, "dispose", loc1))(loc1);
	}
	RTHOOK(5);
	RTDBGAA(Current, dtype, 15825, 0xF80005AC, 0); /* gdip_bitmap */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(15825, dtype)) = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15825, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef arg1
}

/* {EV_PIXEL_BUFFER_IMP}.set_from_icon */
void F1677_18922 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_from_icon";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE up4x = {{0}, SK_POINTER};
#define up4 up4x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_POINTER tp4;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(14);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc3);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLR(5,loc4);
	RTLR(6,loc5);
	RTLR(7,ur1);
	RTLR(8,loc6);
	RTLR(9,loc7);
	RTLR(10,loc9);
	RTLR(11,loc8);
	RTLR(12,loc10);
	RTLR(13,loc1);
	RTLIU(14);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	
	RTEAA(l_feature_name, 1676, Current, 10, 1, 25644);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1676, Current, 25644);
	RTCC(arg1, 1676, l_feature_name, 1, eif_new_type(1442, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15823, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 3, 0xF80005E8, 0, 0); /* loc3 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12862, "get_icon_info", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(3);
		RTCT0("l_icon_info /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(4);
		RTDBGAL(Current, 2, 0xF800059E, 0, 0); /* loc2 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14161, "color_bitmap", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14167, "width", loc3))(loc3)).it_i4);
		ui4_1 = ti4_1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14168, "height", loc3))(loc3)).it_i4);
		ui4_2 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(15794, dtype))(Current, ui4_1x, ui4_2x);
		RTHOOK(6);
		RTDBGAL(Current, 4, 0xF80005E0, 0, 0); /* loc4 */
		tr1 = RTLN(eif_new_type(1504, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(13876, Dtype(tr1)))(tr1);
		RTNHOOK(6,1);
		loc4 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(7);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14167, "width", loc3))(loc3)).it_i4);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(13888, "set_width", loc4))(loc4, ui4_1x);
		RTHOOK(8);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14168, "height", loc3))(loc3)).it_i4);
		ui4_1 = (EIF_INTEGER_32) -ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(13889, "set_height", loc4))(loc4, ui4_1x);
		RTHOOK(9);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(13890, "set_planes", loc4))(loc4, ui4_1x);
		RTHOOK(10);
		ui4_1 = ((EIF_INTEGER_32) 32L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(13891, "set_bit_count", loc4))(loc4, ui4_1x);
		RTHOOK(11);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6968, 1003))(Current)).it_i4);
		ui4_1 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(13892, "set_compression", loc4))(loc4, ui4_1x);
		RTHOOK(12);
		RTDBGAL(Current, 5, 0xF800059E, 0, 0); /* loc5 */
		tr1 = RTLN(eif_new_type(1438, 0x01).id);
		ur1 = RTCCL(loc4);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12802, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(12,1);
		loc5 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(13);
		RTDBGAL(Current, 6, 0xF8000591, 0, 0); /* loc6 */
		tr1 = RTLN(eif_new_type(1425, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(12669, Dtype(tr1)))(tr1);
		RTNHOOK(13,1);
		loc6 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(14);
		tp1 = *(EIF_POINTER *)(loc6 + RTVA(12360, "item", loc6));
		up1 = tp1;
		tp2 = *(EIF_POINTER *)(loc2 + RTVA(12360, "item", loc2));
		up2 = tp2;
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14168, "height", loc3))(loc3)).it_i4);
		ui4_2 = ti4_1;
		tp3 = *(EIF_POINTER *)(loc5 + RTVA(12806, "ppv_bits", loc5));
		up3 = tp3;
		tp4 = *(EIF_POINTER *)(loc4 + RTVA(12360, "item", loc4));
		up4 = tp4;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11505, 1305))(Current)).it_i4);
		ui4_3 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(15830, dtype))(Current, up1x, up2x, ui4_1x, ui4_2x, up3x, up4x, ui4_3x);
		RTHOOK(15);
		RTDBGAL(Current, 7, 0xF80003E2, 0, 0); /* loc7 */
		tr1 = RTLN(eif_new_type(994, 0x01).id);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ui4_2 = ((EIF_INTEGER_32) 0L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14167, "width", loc3))(loc3)).it_i4);
		ui4_3 = ti4_1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14168, "height", loc3))(loc3)).it_i4);
		ui4_4 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6817, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		RTNHOOK(15,1);
		loc7 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(16);
		RTDBGAL(Current, 9, 0xF80005AC, 0, 0); /* loc9 */
		loc9 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15825, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(17);
		RTCT0("l_gdip_bitmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc9 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(18);
		RTDBGAL(Current, 8, 0xF80003E3, 0, 0); /* loc8 */
		ur1 = RTCCL(loc7);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6888, 997))(Current)).it_n4);
		uu4_1 = tu4_1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6902, 998))(Current)).it_i4);
		ui4_1 = ti4_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(13018, "lock_bits", loc9))(loc9, ur1x, uu4_1x, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc8 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(19);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6851, "scan_0", loc8))(loc8)).it_p);
		RTNHOOK(19,1);
		tp2 = *(EIF_POINTER *)(loc5 + RTVA(12806, "ppv_bits", loc5));
		up1 = tp2;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14167, "width", loc3))(loc3)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14168, "height", loc3))(loc3)).it_i4);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1632, 123))(Current)).it_i4);
		ui4_1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 * ti4_2) * ti4_3);
		memcpy((void *)tp1, (const void *) up1, (size_t) ui4_1);
		RTHOOK(20);
		ur1 = RTCCL(loc8);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(13019, "unlock_bits", loc9))(loc9, ur1x);
		RTHOOK(21);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3245, "dispose", loc4))(loc4);
		RTHOOK(22);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11652, "delete", loc5))(loc5);
		RTHOOK(23);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12463, "release", loc6))(loc6);
	} else {
		RTHOOK(24);
		RTDBGAL(Current, 10, 0xF800065E, 0, 0); /* loc10 */
		loc10 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15824, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(25);
		RTCT0("l_pixmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc10 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(26);
		RTDBGAL(Current, 1, 0xF800072D, 0, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14846, "implementation", loc10))(loc10)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = RTCCL(tr1);
		loc1 = RTRV(eif_new_type(1837, 0x00), loc1);
		RTHOOK(27);
		RTCT0("l_pixmap_imp /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(28);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17568, "set_with_resource", loc1))(loc1, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(29);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(13);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef up4
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef uu4_1
#undef arg1
}

/* {EV_PIXEL_BUFFER_IMP}.save_to_named_path */
void F1677_18923 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "save_to_named_path";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,ur1);
	RTLR(4,loc2);
	RTLR(5,tr1);
	RTLR(6,ur2);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1676, Current, 2, 1, 25645);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1676, Current, 25645);
	RTCC(arg1, 1676, l_feature_name, 1, eif_new_type(185, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_file_name_valid", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3822, "is_empty", arg1))(arg1)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15823, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(Current, 1, 0xF80005AC, 0, 0); /* loc1 */
		loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15825, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(4);
		RTCT0("l_gdip_bitmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(5);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12975, "save_image_to_path", loc1))(loc1, ur1x);
	} else {
		RTHOOK(6);
		RTDBGAL(Current, 2, 0xF800065E, 0, 0); /* loc2 */
		loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15824, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(7);
		RTCT0("l_pixmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(8);
		tr1 = RTLN(eif_new_type(1210, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(8,1);
		ur1 = RTCCL(tr1);
		ur2 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15528, "save_to_named_path", loc2))(loc2, ur1x, ur2x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef arg1
}

/* {EV_PIXEL_BUFFER_IMP}.save_to_pointer */
EIF_TYPED_VALUE F1677_18924 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "save_to_pointer";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1676, Current, 1, 0, 25646);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1676, Current, 25646);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15823, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 1, 0xF80005AC, 0, 0); /* loc1 */
		loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15825, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(3);
		RTCT0("l_gdip_bitmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(4);
		RTDBGAL(Current, 0, 0xF80000AB, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12983, "save_image_to_memory", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		if (RTAL & CK_CHECK) {
			RTHOOK(5);
			RTCT("not_supported", EX_CHECK);
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
}

/* {EV_PIXEL_BUFFER_IMP}.sub_pixmap */
EIF_TYPED_VALUE F1677_18925 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "sub_pixmap";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,loc2);
	RTLR(5,tr1);
	RTLR(6,Result);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1676, Current, 2, 1, 25647);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1676, Current, 25647);
	RTCC(arg1, 1676, l_feature_name, 1, eif_new_type(1381, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000626, 0, 0); /* loc1 */
	ur1 = RTCCL(arg1);
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(15802, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0xF800068C, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14846, "implementation", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = RTCCL(tr1);
	loc2 = RTRV(eif_new_type(1676, 0x00), loc2);
	RTHOOK(3);
	RTCT0("not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(4);
	RTDBGAL(Current, 0, 0xF800065E, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1630, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(4,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	ur1 = RTCCL(Result);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15820, "draw_to_drawable", loc2))(loc2, ur1x);
	RTHOOK(6);
	RTDBGAL(Current, 0, 0xF800065E, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {EV_PIXEL_BUFFER_IMP}.draw_to_drawable */
void F1677_18926 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "draw_to_drawable";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1676, Current, 1, 1, 25648);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1676, Current, 25648);
	RTCC(arg1, 1676, l_feature_name, 1, eif_new_type(1597, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF800065E, 0, 0); /* loc1 */
	loc1 = RTCCL(arg1);
	loc1 = RTRV(eif_new_type(1630, 0x00), loc1);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(3);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15811, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15812, dtype))(Current)).it_i4);
		ui4_2 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15524, "set_size", loc1))(loc1, ui4_1x, ui4_2x);
	}
	RTHOOK(4);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15823, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(5);
		ur1 = RTCCL(arg1);
		ur2 = NULL;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(15827, dtype))(Current, ur1x, ur2x);
	} else {
		RTHOOK(6);
		RTDBGAL(Current, 1, 0xF800065E, 0, 0); /* loc1 */
		loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15824, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(7);
		RTCT0("l_pixmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(8);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ui4_2 = ((EIF_INTEGER_32) 0L);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15169, "draw_pixmap", arg1))(arg1, ui4_1x, ui4_2x, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {EV_PIXEL_BUFFER_IMP}.draw_to_drawable_with_dest_rect_src_rect */
void F1677_18927 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "draw_to_drawable_with_dest_rect_src_rect";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_TYPED_VALUE ui4_6x = {{0}, SK_INT32};
#define ui4_6 ui4_6x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(13);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,loc2);
	RTLR(4,tr1);
	RTLR(5,Current);
	RTLR(6,loc3);
	RTLR(7,loc1);
	RTLR(8,tr2);
	RTLR(9,ur1);
	RTLR(10,ur2);
	RTLR(11,ur3);
	RTLR(12,loc4);
	RTLIU(13);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 1676, Current, 4, 3, 25649);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1676, Current, 25649);
	RTCC(arg1, 1676, l_feature_name, 1, eif_new_type(1597, 0x01), 0x01);
	RTCC(arg2, 1676, l_feature_name, 2, eif_new_type(1526, 0x01), 0x01);
	RTCC(arg3, 1676, l_feature_name, 3, eif_new_type(1526, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 2, 0xF800078B, 0, 0); /* loc2 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14846, "implementation", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = RTCCL(tr1);
	loc2 = RTRV(eif_new_type(1931, 0x00), loc2);
	RTHOOK(2);
	RTCT0("l_drawable_imp /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(3);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15823, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(4);
		RTDBGAL(Current, 3, 0xF80005AC, 0, 0); /* loc3 */
		loc3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15825, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(5);
		RTCT0("l_gdip_bitmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(6);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(19458, "get_dc", loc2))(loc2);
		RTHOOK(7);
		RTDBGAL(Current, 1, 0xF80005AA, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(1450, 0x01).id);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(19457, "dc", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12913, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(7,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(8);
		ur1 = RTCCL(loc3);
		ur2 = RTCCL(arg2);
		ur3 = RTCCL(arg3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(12918, "draw_image_with_dest_rect_src_rect", loc1))(loc1, ur1x, ur2x, ur3x);
		RTHOOK(9);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12367, "destroy_item", loc1))(loc1);
		RTHOOK(10);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(19459, "release_dc", loc2))(loc2);
	} else {
		RTHOOK(11);
		RTDBGAL(Current, 4, 0xF800065E, 0, 0); /* loc4 */
		loc4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15824, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(12);
		RTCT0("l_pixmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc4 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(13);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14473, "x", arg2))(arg2)).it_i4);
		ui4_1 = ti4_1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14475, "y", arg2))(arg2)).it_i4);
		ui4_2 = ti4_2;
		ur1 = RTCCL(loc4);
		tr1 = RTLN(eif_new_type(1381, 0x01).id);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14473, "x", arg3))(arg3)).it_i4);
		ui4_3 = ti4_3;
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14475, "y", arg3))(arg3)).it_i4);
		ui4_4 = ti4_4;
		ti4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14478, "width", arg3))(arg3)).it_i4);
		ui4_5 = ti4_5;
		ti4_6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14479, "height", arg3))(arg3)).it_i4);
		ui4_6 = ti4_6;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(12125, Dtype(tr1)))(tr1, ui4_3x, ui4_4x, ui4_5x, ui4_6x);
		RTNHOOK(13,1);
		ur2 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15170, "draw_sub_pixmap", arg1))(arg1, ui4_1x, ui4_2x, ur1x, ur2x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef ui4_6
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_PIXEL_BUFFER_IMP}.sub_pixel_buffer */
EIF_TYPED_VALUE F1677_18928 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "sub_pixel_buffer";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(13);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,Current);
	RTLR(5,loc5);
	RTLR(6,loc6);
	RTLR(7,loc2);
	RTLR(8,ur1);
	RTLR(9,loc3);
	RTLR(10,loc4);
	RTLR(11,ur2);
	RTLR(12,ur3);
	RTLIU(13);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	
	RTEAA(l_feature_name, 1676, Current, 6, 1, 25650);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1676, Current, 25650);
	RTCC(arg1, 1676, l_feature_name, 1, eif_new_type(1381, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000626, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1574, 0x01).id);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(12129, "width", arg1));
	ui4_1 = ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(12130, "height", arg1));
	ui4_2 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(14899, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF800068C, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14846, "implementation", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_new_type(1676, 0x00), loc1);
	RTHOOK(3);
	RTCT0("not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(4);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15823, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(5);
		RTDBGAL(Current, 5, 0xF80005AC, 0, 0); /* loc5 */
		loc5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15825, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(6);
		RTCT0("l_gdip_bitmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc5 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(7);
		RTDBGAL(Current, 6, 0xF80005AC, 0, 0); /* loc6 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15825, "gdip_bitmap", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc6 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(8);
		RTCT0("l_imp_gdip_bitmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc6 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(9);
		RTDBGAL(Current, 2, 0xF80005AA, 0, 0); /* loc2 */
		tr1 = RTLN(eif_new_type(1450, 0x01).id);
		ur1 = RTCCL(loc6);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12912, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(9,1);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(10);
		RTDBGAL(Current, 3, 0xF80005F6, 0, 0); /* loc3 */
		tr1 = RTLN(eif_new_type(1526, 0x01).id);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ui4_2 = ((EIF_INTEGER_32) 0L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14916, "width", Result))(Result)).it_i4);
		ui4_3 = ti4_1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14917, "height", Result))(Result)).it_i4);
		ui4_4 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(14467, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		RTNHOOK(10,1);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(11);
		RTDBGAL(Current, 4, 0xF80005F6, 0, 0); /* loc4 */
		tr1 = RTLN(eif_new_type(1526, 0x01).id);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(12127, "x", arg1));
		ui4_1 = ti4_1;
		ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(12128, "y", arg1));
		ui4_2 = ti4_2;
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12133, "right", arg1))(arg1)).it_i4);
		ui4_3 = ti4_3;
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12134, "bottom", arg1))(arg1)).it_i4);
		ui4_4 = ti4_4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(14467, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		RTNHOOK(11,1);
		loc4 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(12);
		ur1 = RTCCL(loc5);
		ur2 = RTCCL(loc3);
		ur3 = RTCCL(loc4);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(12918, "draw_image_with_dest_rect_src_rect", loc2))(loc2, ur1x, ur2x, ur3x);
		RTHOOK(13);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3245, "dispose", loc3))(loc3);
		RTHOOK(14);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3245, "dispose", loc4))(loc4);
		RTHOOK(15);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12367, "destroy_item", loc2))(loc2);
	} else {
		if (RTAL & CK_CHECK) {
			RTHOOK(16);
			RTCT("not_implemented", EX_CHECK);
				RTCF;
		}
		RTHOOK(17);
		RTDBGAL(Current, 0, 0xF8000626, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(1574, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
		RTNHOOK(17,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg1
}

/* {EV_PIXEL_BUFFER_IMP}.stretched */
EIF_TYPED_VALUE F1677_18929 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "stretched";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(13);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,loc5);
	RTLR(5,loc6);
	RTLR(6,loc2);
	RTLR(7,ur1);
	RTLR(8,loc4);
	RTLR(9,loc3);
	RTLR(10,ur2);
	RTLR(11,ur3);
	RTLR(12,loc7);
	RTLIU(13);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	
	RTEAA(l_feature_name, 1676, Current, 7, 2, 25651);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1676, Current, 25651);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_width_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_height_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("not_locked", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(15809, dtype));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAL(Current, 0, 0xF8000626, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1574, 0x01).id);
	ui4_1 = arg1;
	ui4_2 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(14899, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	RTNHOOK(4,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAL(Current, 1, 0xF800068C, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14846, "implementation", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_new_type(1676, 0x00), loc1);
	RTHOOK(6);
	RTCT0("not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(7);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15823, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(8);
		RTDBGAL(Current, 5, 0xF80005AC, 0, 0); /* loc5 */
		loc5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15825, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(9);
		RTCT0("l_gdip_bitmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc5 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(10);
		RTDBGAL(Current, 6, 0xF80005AC, 0, 0); /* loc6 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15825, "gdip_bitmap", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc6 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(11);
		RTCT0("l_imp_gdip_bitmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc6 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(12);
		RTDBGAL(Current, 2, 0xF80005AA, 0, 0); /* loc2 */
		tr1 = RTLN(eif_new_type(1450, 0x01).id);
		ur1 = RTCCL(loc6);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12912, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(12,1);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(13);
		RTDBGAL(Current, 4, 0xF80005F6, 0, 0); /* loc4 */
		tr1 = RTLN(eif_new_type(1526, 0x01).id);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ui4_2 = ((EIF_INTEGER_32) 0L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15811, dtype))(Current)).it_i4);
		ui4_3 = ti4_1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15812, dtype))(Current)).it_i4);
		ui4_4 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(14467, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		RTNHOOK(13,1);
		loc4 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(14);
		RTDBGAL(Current, 3, 0xF80005F6, 0, 0); /* loc3 */
		tr1 = RTLN(eif_new_type(1526, 0x01).id);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ui4_2 = ((EIF_INTEGER_32) 0L);
		ui4_3 = arg1;
		ui4_4 = arg2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(14467, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		RTNHOOK(14,1);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(15);
		ur1 = RTCCL(loc5);
		ur2 = RTCCL(loc3);
		ur3 = RTCCL(loc4);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(12918, "draw_image_with_dest_rect_src_rect", loc2))(loc2, ur1x, ur2x, ur3x);
		RTHOOK(16);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3245, "dispose", loc3))(loc3);
		RTHOOK(17);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3245, "dispose", loc4))(loc4);
		RTHOOK(18);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12367, "destroy_item", loc2))(loc2);
	} else {
		RTHOOK(19);
		RTDBGAL(Current, 7, 0xF800065E, 0, 0); /* loc7 */
		loc7 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15824, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(20);
		RTCT0("l_pixmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc7 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(21);
		ui4_1 = arg1;
		ui4_2 = arg2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15526, "stretch", loc7))(loc7, ui4_1x, ui4_2x);
		RTHOOK(22);
		RTDBGAL(Current, 0, 0xF8000626, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(1574, 0x01).id);
		ur1 = RTCCL(loc7);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(14900, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(22,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(23);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(24);
		RTCT("result_width_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14916, "width", Result))(Result)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(25);
		RTCT("result_height_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14917, "height", Result))(Result)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg2
#undef arg1
}

/* {EV_PIXEL_BUFFER_IMP}.draw_pixel_buffer_with_x_y */
void F1677_18930 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "draw_pixel_buffer_with_x_y";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(13);
	RTLR(0,arg3);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,loc5);
	RTLR(5,loc2);
	RTLR(6,ur1);
	RTLR(7,loc4);
	RTLR(8,loc3);
	RTLR(9,ur2);
	RTLR(10,ur3);
	RTLR(11,loc6);
	RTLR(12,loc7);
	RTLIU(13);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	
	RTEAA(l_feature_name, 1676, Current, 7, 3, 25652);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1676, Current, 25652);
	RTCC(arg3, 1676, l_feature_name, 3, eif_new_type(1574, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF800068C, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14846, "implementation", arg3))(arg3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_new_type(1676, 0x00), loc1);
	RTHOOK(2);
	RTCT0("not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(3);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15823, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(4);
		RTDBGAL(Current, 5, 0xF80005AC, 0, 0); /* loc5 */
		loc5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15825, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(5);
		RTCT0("l_gdip_bitmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc5 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(6);
		RTDBGAL(Current, 2, 0xF80005AA, 0, 0); /* loc2 */
		tr1 = RTLN(eif_new_type(1450, 0x01).id);
		ur1 = RTCCL(loc5);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12912, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(6,1);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(7);
		RTDBGAL(Current, 4, 0xF80005F6, 0, 0); /* loc4 */
		tr1 = RTLN(eif_new_type(1526, 0x01).id);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ui4_2 = ((EIF_INTEGER_32) 0L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14916, "width", arg3))(arg3)).it_i4);
		ui4_3 = ti4_1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14917, "height", arg3))(arg3)).it_i4);
		ui4_4 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(14467, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		RTNHOOK(7,1);
		loc4 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(8);
		RTDBGAL(Current, 3, 0xF80005F6, 0, 0); /* loc3 */
		tr1 = RTLN(eif_new_type(1526, 0x01).id);
		ui4_1 = arg1;
		ui4_2 = arg2;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14916, "width", arg3))(arg3)).it_i4);
		ui4_3 = (EIF_INTEGER_32) (arg1 + ti4_1);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14917, "height", arg3))(arg3)).it_i4);
		ui4_4 = (EIF_INTEGER_32) (arg2 + ti4_2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(14467, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		RTNHOOK(8,1);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		if (RTAL & CK_CHECK) {
			RTHOOK(9);
			RTCT("same_size", EX_CHECK);
			tb1 = '\0';
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14478, "width", loc4))(loc4)).it_i4);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14478, "width", loc3))(loc3)).it_i4);
			if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14479, "height", loc4))(loc4)).it_i4);
				ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14479, "height", loc3))(loc3)).it_i4);
				tb1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
			}
			if (tb1) {
				RTCK;
			} else {
				RTCF;
			}
		}
		RTHOOK(10);
		RTDBGAL(Current, 5, 0xF80005AC, 0, 0); /* loc5 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15825, "gdip_bitmap", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc5 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(11);
		RTCT0("l_gdip_bitmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc5 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(12);
		ur1 = RTCCL(loc5);
		ur2 = RTCCL(loc3);
		ur3 = RTCCL(loc4);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(12918, "draw_image_with_dest_rect_src_rect", loc2))(loc2, ur1x, ur2x, ur3x);
		RTHOOK(13);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3245, "dispose", loc3))(loc3);
		RTHOOK(14);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3245, "dispose", loc4))(loc4);
		RTHOOK(15);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12367, "destroy_item", loc2))(loc2);
	} else {
		RTHOOK(16);
		RTDBGAL(Current, 6, 0xF800065E, 0, 0); /* loc6 */
		loc6 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15824, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(17);
		RTCT0("l_pixmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc6 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(18);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15824, "pixmap", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc7 = RTCCL(tr1);
		if (EIF_TEST(loc7)) {
			RTHOOK(19);
			ui4_1 = arg1;
			ui4_2 = arg2;
			ur1 = RTCCL(loc7);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15169, "draw_pixmap", loc6))(loc6, ui4_1x, ui4_2x, ur1x);
		} else {
			if (RTAL & CK_CHECK) {
				RTHOOK(20);
				RTCT("False", EX_CHECK);
					RTCF;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_PIXEL_BUFFER_IMP}.draw_text */
void F1677_18931 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "draw_text";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur4_1x = {{0}, SK_REAL32};
#define ur4_1 ur4_1x.it_r4
	EIF_TYPED_VALUE ur4_2x = {{0}, SK_REAL32};
#define ur4_2 ur4_2x.it_r4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_REAL_32 tr4_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(13);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,Current);
	RTLR(4,loc4);
	RTLR(5,loc1);
	RTLR(6,tr1);
	RTLR(7,ur1);
	RTLR(8,loc3);
	RTLR(9,tr2);
	RTLR(10,loc2);
	RTLR(11,ur2);
	RTLR(12,loc5);
	RTLIU(13);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	
	RTEAA(l_feature_name, 1676, Current, 5, 3, 25653);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1676, Current, 25653);
	RTCC(arg1, 1676, l_feature_name, 1, eif_new_type(229, 0x01), 0x01);
	RTCC(arg2, 1676, l_feature_name, 2, eif_new_type(1576, 0x01), 0x01);
	RTCC(arg3, 1676, l_feature_name, 3, eif_new_type(1382, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15823, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 4, 0xF80005AC, 0, 0); /* loc4 */
		loc4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15825, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(3);
		RTCT0("l_gdip_bitmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc4 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(4);
		RTDBGAL(Current, 1, 0xF80005AA, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(1450, 0x01).id);
		ur1 = RTCCL(loc4);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12912, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(4,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		if (RTAL & CK_CHECK) {
			RTHOOK(5);
			RTCT("only_roman_supported_currently", EX_CHECK);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14955, "family", arg2))(arg2)).it_i4);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11630, 1316))(Current)).it_i4);
			if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
				RTCK;
			} else {
				RTCF;
			}
		}
		RTHOOK(6);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14968, "name", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(6,1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4639, "is_empty", tr1))(tr1)).it_b);
		if (tb1) {
			RTHOOK(7);
			RTDBGAL(Current, 3, 0xF80005A8, 0, 0); /* loc3 */
			tr1 = RTLN(eif_new_type(1448, 0x01).id);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(12896, Dtype(tr1)))(tr1);
			RTNHOOK(7,1);
			loc3 = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(8);
			RTDBGAL(Current, 3, 0xF80005A8, 0, 0); /* loc3 */
			tr1 = RTLN(eif_new_type(1448, 0x01).id);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14968, "name", arg2))(arg2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12897, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(8,1);
			loc3 = (EIF_REFERENCE) RTCCL(tr1);
		}
		RTHOOK(9);
		RTDBGAL(Current, 2, 0xF80005A7, 0, 0); /* loc2 */
		tr1 = RTLN(eif_new_type(1447, 0x01).id);
		ur1 = RTCCL(loc3);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14960, "height_in_points", arg2))(arg2)).it_i4);
		tr4_1 = (EIF_REAL_32) (ti4_1);
		ur4_1 = tr4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(12892, Dtype(tr1)))(tr1, ur1x, ur4_1x);
		RTNHOOK(9,1);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(10);
		ur1 = RTCCL(arg1);
		ur2 = RTCCL(loc2);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12169, "x", arg3))(arg3)).it_i4);
		tr4_1 = (EIF_REAL_32) (ti4_1);
		ur4_1 = tr4_1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12171, "y", arg3))(arg3)).it_i4);
		tr4_2 = (EIF_REAL_32) (ti4_1);
		ur4_2 = tr4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(12923, "draw_string", loc1))(loc1, ur1x, ur2x, ur4_1x, ur4_2x);
		RTHOOK(11);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3245, "dispose", loc2))(loc2);
		RTHOOK(12);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3245, "dispose", loc3))(loc3);
	} else {
		RTHOOK(13);
		RTDBGAL(Current, 5, 0xF800065E, 0, 0); /* loc5 */
		loc5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15824, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(14);
		RTCT0("l_pixmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc5 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(15);
		ur1 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15140, "set_font", loc5))(loc5, ur1x);
		RTHOOK(16);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12169, "x", arg3))(arg3)).it_i4);
		ui4_1 = ti4_1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12171, "y", arg3))(arg3)).it_i4);
		ui4_2 = ti4_2;
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15164, "draw_text_top_left", loc5))(loc5, ui4_1x, ui4_2x, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(10);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur4_1
#undef ur4_2
#undef ui4_1
#undef ui4_2
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_PIXEL_BUFFER_IMP}.get_pixel */
EIF_TYPED_VALUE F1677_18932 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "get_pixel";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n4 = * (EIF_NATURAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_UINT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1676, Current, 1, 2, 25654);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1676, Current, 25654);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_x_valid", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15811, dtype))(Current)).it_i4);
		RTNHOOK(1,1);
		tu4_1 = (EIF_NATURAL_32) ti4_1;
		RTTE((EIF_BOOLEAN) (arg1 < tu4_1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_y_valid", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15812, dtype))(Current)).it_i4);
		RTNHOOK(2,1);
		tu4_1 = (EIF_NATURAL_32) ti4_1;
		RTTE((EIF_BOOLEAN) (arg2 <= tu4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15823, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(4);
		RTDBGAL(Current, 1, 0xF80005AC, 0, 0); /* loc1 */
		loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15825, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(5);
		RTCT0("l_gdip_bitmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(6);
		RTDBGAL(Current, 0, 0x38000000, 1,0); /* Result */
		uu4_1 = arg1;
		uu4_2 = arg2;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(13021, "get_pixel", loc1))(loc1, uu4_1x, uu4_2x)).it_n4);
		Result = (EIF_NATURAL_32) tu4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef up1
#undef uu4_1
#undef uu4_2
#undef arg2
#undef arg1
}

/* {EV_PIXEL_BUFFER_IMP}.set_pixel */
void F1677_18933 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "set_pixel";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_n4
#define arg3 arg3x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu4_2x = {{0}, SK_UINT32};
#define uu4_2 uu4_2x.it_n4
	EIF_TYPED_VALUE uu4_3x = {{0}, SK_UINT32};
#define uu4_3 uu4_3x.it_n4
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_n4 = * (EIF_NATURAL_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_n4 = * (EIF_NATURAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_UINT32,&arg2);
	RTLU(SK_UINT32,&arg3);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1676, Current, 1, 3, 25655);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1676, Current, 25655);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_x_valid", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15811, dtype))(Current)).it_i4);
		RTNHOOK(1,1);
		tu4_1 = (EIF_NATURAL_32) ti4_1;
		RTTE((EIF_BOOLEAN) (arg1 < tu4_1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_y_valid", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15812, dtype))(Current)).it_i4);
		RTNHOOK(2,1);
		tu4_1 = (EIF_NATURAL_32) ti4_1;
		RTTE((EIF_BOOLEAN) (arg2 <= tu4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15823, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(4);
		RTDBGAL(Current, 1, 0xF80005AC, 0, 0); /* loc1 */
		loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15825, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(5);
		RTCT0("l_gdip_bitmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(6);
		uu4_1 = arg1;
		uu4_2 = arg2;
		uu4_3 = arg3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(13020, "set_pixel", loc1))(loc1, uu4_1x, uu4_2x, uu4_3x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("pixel_set", EX_POST);
		uu4_1 = arg1;
		uu4_2 = arg2;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(15807, dtype))(Current, uu4_1x, uu4_2x)).it_n4);
		if ((EIF_BOOLEAN)(tu4_1 == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef uu4_1
#undef uu4_2
#undef uu4_3
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_PIXEL_BUFFER_IMP}.unlock */
void F1677_18934 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "unlock";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1676, Current, 2, 0, 25656);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1676, Current, 25656);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(15806, 1675))(Current);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15829, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = RTCCL(tr1);
	if (EIF_TEST(loc2)) {
		RTHOOK(3);
		RTDBGAL(Current, 1, 0xF80005AC, 0, 0); /* loc1 */
		loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15825, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(4);
		RTCT0("l_gdip_bitmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(5);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(13019, "unlock_bits", loc1))(loc1, ur1x);
		RTHOOK(6);
		RTDBGAA(Current, dtype, 15829, 0xF80003E3, 0); /* data */
		*(EIF_REFERENCE *)(Current + RTWA(15829, dtype)) = (EIF_REFERENCE) NULL;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("cleared", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15829, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 == NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
}

/* {EV_PIXEL_BUFFER_IMP}.width */
EIF_TYPED_VALUE F1677_18935 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "width";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc2);
	RTLIU(3);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1676, Current, 2, 0, 25657);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1676, Current, 25657);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15823, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 1, 0xF80005AC, 0, 0); /* loc1 */
		loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15825, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(3);
		RTCT0("l_gdip_bitmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(4);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12986, "width", loc1))(loc1)).it_i4);
		Result = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(5);
		RTDBGAL(Current, 2, 0xF800065E, 0, 0); /* loc2 */
		loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15824, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(6);
		RTCT0("l_pixmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(7);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15146, "width", loc2))(loc2)).it_i4);
		Result = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {EV_PIXEL_BUFFER_IMP}.height */
EIF_TYPED_VALUE F1677_18936 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "height";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,loc2);
	RTLIU(3);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1676, Current, 2, 0, 25658);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1676, Current, 25658);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15823, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 1, 0xF80005AC, 0, 0); /* loc1 */
		loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15825, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(3);
		RTCT0("l_gdip_bitmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(4);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12987, "height", loc1))(loc1)).it_i4);
		Result = (EIF_INTEGER_32) ti4_1;
	} else {
		RTHOOK(5);
		RTDBGAL(Current, 2, 0xF800065E, 0, 0); /* loc2 */
		loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15824, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(6);
		RTCT0("l_pixmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(7);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15147, "height", loc2))(loc2)).it_i4);
		Result = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {EV_PIXEL_BUFFER_IMP}.mask_bitmap */
EIF_TYPED_VALUE F1677_18937 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "mask_bitmap";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ur4x = {{0}, SK_REF};
#define ur4 ur4x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_TYPED_VALUE ui4_6x = {{0}, SK_INT32};
#define ui4_6 ui4_6x.it_i4
	EIF_TYPED_VALUE ui4_7x = {{0}, SK_INT32};
#define ui4_7 ui4_7x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(15);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLR(4,loc1);
	RTLR(5,loc2);
	RTLR(6,tr2);
	RTLR(7,ur1);
	RTLR(8,loc3);
	RTLR(9,loc4);
	RTLR(10,loc5);
	RTLR(11,loc6);
	RTLR(12,ur2);
	RTLR(13,ur3);
	RTLR(14,ur4);
	RTLIU(15);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	
	RTEAA(l_feature_name, 1676, Current, 6, 1, 25659);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1676, Current, 25659);
	RTCC(arg1, 1676, l_feature_name, 1, eif_new_type(1381, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("not_too_big", EX_PRE);
		tb1 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(12129, "width", arg1));
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15811, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN) (ti4_1 <= ti4_2)) {
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(12130, "height", arg1));
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15812, dtype))(Current)).it_i4);
			tb1 = (EIF_BOOLEAN) (ti4_1 <= ti4_2);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("support", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15823, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAL(Current, 0, 0xF800063E, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1598, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(4,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(12129, "width", arg1));
	ui4_1 = ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(12130, "height", arg1));
	ui4_2 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15188, "set_size", Result))(Result, ui4_1x, ui4_2x);
	RTHOOK(6);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15811, dtype))(Current)).it_i4);
	ui4_3 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15812, dtype))(Current)).it_i4);
	ui4_4 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15177, "fill_rectangle", Result))(Result, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	RTHOOK(7);
	RTDBGAL(Current, 1, 0xF800078C, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14846, "implementation", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_new_type(1932, 0x00), loc1);
	RTHOOK(8);
	RTCT0("not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(9);
	RTDBGAL(Current, 2, 0xF80005AA, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(1450, 0x01).id);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(19499, "dc", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12913, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(9,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(10);
	RTDBGAL(Current, 3, 0xF80005A9, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(1449, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(12903, Dtype(tr1)))(tr1);
	RTNHOOK(10,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(11);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12904, "clear_color_key", loc3))(loc3);
	RTHOOK(12);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15828, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12906, "set_color_matrix", loc3))(loc3, ur1x);
	RTHOOK(13);
	RTDBGAL(Current, 4, 0xF80005F6, 0, 0); /* loc4 */
	tr1 = RTLN(eif_new_type(1526, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(12129, "width", arg1));
	ui4_3 = ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(12130, "height", arg1));
	ui4_4 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(14467, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	RTNHOOK(13,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(14);
	RTDBGAL(Current, 5, 0xF80005F6, 0, 0); /* loc5 */
	tr1 = RTLN(eif_new_type(1526, 0x01).id);
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(12127, "x", arg1));
	ui4_1 = ti4_1;
	ti4_2 = *(EIF_INTEGER_32 *)(arg1 + RTVA(12128, "y", arg1));
	ui4_2 = ti4_2;
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12133, "right", arg1))(arg1)).it_i4);
	ui4_3 = ti4_3;
	ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12134, "bottom", arg1))(arg1)).it_i4);
	ui4_4 = ti4_4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(14467, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	RTNHOOK(14,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(15);
	RTDBGAL(Current, 6, 0xF80005AC, 0, 0); /* loc6 */
	loc6 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15825, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(16);
	RTCT0("l_gdip_bitmap /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc6 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(17);
	ur1 = RTCCL(loc6);
	ur2 = RTCCL(loc4);
	ur3 = RTCCL(loc5);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6775, 989))(Current)).it_i4);
	ui4_1 = ti4_1;
	ur4 = RTCCL(loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(12919, "draw_image_with_src_rect_dest_rect_unit_attributes", loc2))(loc2, ur1x, ur2x, ur3x, ui4_1x, ur4x);
	RTHOOK(18);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3245, "dispose", loc4))(loc4);
	RTHOOK(19);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3245, "dispose", loc5))(loc5);
	RTHOOK(20);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12367, "destroy_item", loc3))(loc3);
	RTHOOK(21);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12367, "destroy_item", loc2))(loc2);
	RTHOOK(22);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(19499, "dc", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(22,1);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15811, dtype))(Current)).it_i4);
	ui4_3 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15812, dtype))(Current)).it_i4);
	ui4_4 = ti4_2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(19499, "dc", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	ui4_5 = ((EIF_INTEGER_32) 0L);
	ui4_6 = ((EIF_INTEGER_32) 0L);
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8818, 1129))(Current)).it_i4);
	ui4_7 = ti4_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(12568, "bit_blt", tr1))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ur1x, ui4_5x, ui4_6x, ui4_7x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(23);
		RTCT("not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef ui4_6
#undef ui4_7
#undef arg1
}

/* {EV_PIXEL_BUFFER_IMP}.is_gdi_plus_installed */
RTOID (F1677_18938)
EIF_TYPED_VALUE F1677_18938 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_gdi_plus_installed";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_BOOLEAN)
	RTOTDB(EIF_BOOLEAN, F1677_18938);

	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1676, Current, 1, 0, 25660);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1676, Current, 25660);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF80003F6, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1014, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7059, "is_gdi_plus_installed", loc1))(loc1)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef Result
}

/* {EV_PIXEL_BUFFER_IMP}.pixmap */
EIF_TYPED_VALUE F1677_18939 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(15824,Dtype(Current)));
	return r;
}


/* {EV_PIXEL_BUFFER_IMP}.gdip_bitmap */
EIF_TYPED_VALUE F1677_18940 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(15825,Dtype(Current)));
	return r;
}


/* {EV_PIXEL_BUFFER_IMP}.data_ptr */
EIF_TYPED_VALUE F1677_18941 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "data_ptr";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc3);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_POINTER, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1676, Current, 3, 0, 25663);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1676, Current, 25663);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15823, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 2, 0xF80005AC, 0, 0); /* loc2 */
		loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15825, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(3);
		RTCT0("not_void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(4);
		RTDBGAL(Current, 1, 0xF80003E2, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(994, 0x01).id);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ui4_2 = ((EIF_INTEGER_32) 0L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15811, dtype))(Current)).it_i4);
		ui4_3 = ti4_1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15812, dtype))(Current)).it_i4);
		ui4_4 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6817, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		RTNHOOK(4,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(5);
		RTDBGAL(Current, 3, 0xF80003E3, 0, 0); /* loc3 */
		ur1 = RTCCL(loc1);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6888, 997))(Current)).it_n4);
		uu4_1 = tu4_1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6902, 998))(Current)).it_i4);
		ui4_1 = ti4_1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(13018, "lock_bits", loc2))(loc2, ur1x, uu4_1x, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(6);
		RTCT0("l_data /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(7);
		RTDBGAL(Current, 0, 0x40000000, 1,0); /* Result */
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6851, "scan_0", loc3))(loc3)).it_p);
		Result = (EIF_POINTER) tp1;
		RTHOOK(8);
		RTDBGAA(Current, dtype, 15829, 0xF80003E3, 0); /* data */
		tr1 = RTCCL(loc3);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(15829, dtype)) = (EIF_REFERENCE) tr1;
	} else {
		if (RTAL & CK_CHECK) {
			RTHOOK(9);
			RTCT("not_implemented", EX_CHECK);
				RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef uu4_1
}

/* {EV_PIXEL_BUFFER_IMP}.draw_to_drawable_with_matrix */
void F1677_18942 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "draw_to_drawable_with_matrix";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ur4x = {{0}, SK_REF};
#define ur4 ur4x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(16);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,loc2);
	RTLR(6,loc4);
	RTLR(7,tr2);
	RTLR(8,ur1);
	RTLR(9,loc7);
	RTLR(10,loc6);
	RTLR(11,loc5);
	RTLR(12,ur2);
	RTLR(13,ur3);
	RTLR(14,ur4);
	RTLR(15,loc3);
	RTLIU(16);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	
	RTEAA(l_feature_name, 1676, Current, 7, 2, 25664);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1676, Current, 25664);
	RTCC(arg1, 1676, l_feature_name, 1, eif_new_type(1597, 0x01), 0x01);
	if (arg2) {
		RTCC(arg2, 1676, l_feature_name, 2, eif_new_type(988, 0x00), 0x00);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("support", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15823, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF800078B, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14846, "implementation", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_new_type(1931, 0x00), loc1);
	RTHOOK(4);
	RTCT0("not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(5);
	RTDBGAL(Current, 2, 0xF80007A3, 0, 0); /* loc2 */
	loc2 = RTCCL(loc1);
	loc2 = RTRV(eif_new_type(1955, 0x00), loc2);
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(19458, "get_dc", loc1))(loc1);
	RTHOOK(7);
	RTDBGAL(Current, 4, 0xF80005AA, 0, 0); /* loc4 */
	tr1 = RTLN(eif_new_type(1450, 0x01).id);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(19457, "dc", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12913, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(7,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(8);
	RTDBGAL(Current, 7, 0xF80005AC, 0, 0); /* loc7 */
	loc7 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15825, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(9);
	RTCT0("l_gdip_bitmap /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc7 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(10);
	if ((EIF_BOOLEAN)(arg2 == NULL)) {
		RTHOOK(11);
		ur1 = RTCCL(loc7);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ui4_2 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(12917, "draw_image", loc4))(loc4, ur1x, ui4_1x, ui4_2x);
	} else {
		RTHOOK(12);
		RTDBGAL(Current, 6, 0xF80005A9, 0, 0); /* loc6 */
		tr1 = RTLN(eif_new_type(1449, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(12903, Dtype(tr1)))(tr1);
		RTNHOOK(12,1);
		loc6 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(13);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12904, "clear_color_key", loc6))(loc6);
		RTHOOK(14);
		ur1 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12906, "set_color_matrix", loc6))(loc6, ur1x);
		RTHOOK(15);
		RTDBGAL(Current, 5, 0xF80005F6, 0, 0); /* loc5 */
		tr1 = RTLN(eif_new_type(1526, 0x01).id);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ui4_2 = ((EIF_INTEGER_32) 0L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15811, dtype))(Current)).it_i4);
		ui4_3 = ti4_1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15812, dtype))(Current)).it_i4);
		ui4_4 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(14467, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		RTNHOOK(15,1);
		loc5 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(16);
		ur1 = RTCCL(loc7);
		ur2 = RTCCL(loc5);
		ur3 = RTCCL(loc5);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6775, 989))(Current)).it_i4);
		ui4_1 = ti4_1;
		ur4 = RTCCL(loc6);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(12919, "draw_image_with_src_rect_dest_rect_unit_attributes", loc4))(loc4, ur1x, ur2x, ur3x, ui4_1x, ur4x);
		RTHOOK(17);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12367, "destroy_item", loc6))(loc6);
	}
	RTHOOK(18);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12367, "destroy_item", loc4))(loc4);
	RTHOOK(19);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(19459, "release_dc", loc1))(loc1);
	RTHOOK(20);
	RTDBGAL(Current, 3, 0xF800065E, 0, 0); /* loc3 */
	loc3 = RTCCL(arg1);
	loc3 = RTRV(eif_new_type(1630, 0x00), loc3);
	RTHOOK(21);
	if ((EIF_BOOLEAN)(loc3 != NULL)) {
		RTHOOK(22);
		tr1 = RTLN(eif_new_type(1381, 0x01).id);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ui4_2 = ((EIF_INTEGER_32) 0L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15811, dtype))(Current)).it_i4);
		ui4_3 = ti4_1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15812, dtype))(Current)).it_i4);
		ui4_4 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(12125, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		RTNHOOK(22,1);
		ur1 = RTCCL(tr1);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(15822, dtype))(Current, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15527, "set_mask", loc3))(loc3, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(23);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg2
#undef arg1
}

/* {EV_PIXEL_BUFFER_IMP}.mask_color_matrix */
EIF_TYPED_VALUE F1677_18943 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "mask_color_matrix";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_32 tr4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1676, Current, 0, 0, 25665);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1676, Current, 25665);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("support", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15823, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0xF80003DC, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(988, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(6762, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ui4_1 = ((EIF_INTEGER_32) 5L);
	{
		static EIF_TYPE_INDEX typarr0[] = {437,191,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_REAL_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 5L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 1L));
	*((EIF_REAL_32 *)tr2+0) = (EIF_REAL_32) tr4_1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+1) = (EIF_REAL_32) tr4_1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+2) = (EIF_REAL_32) tr4_1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+3) = (EIF_REAL_32) tr4_1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+4) = (EIF_REAL_32) tr4_1;
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2570, Dtype(tr2)))(tr2).it_r;
	ur1 = RTCCL(tr1);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6764, "set_m_row", Result))(Result, ur1x, ui4_2x);
	RTHOOK(4);
	ui4_1 = ((EIF_INTEGER_32) 5L);
	{
		static EIF_TYPE_INDEX typarr0[] = {437,191,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_REAL_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 5L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+0) = (EIF_REAL_32) tr4_1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 1L));
	*((EIF_REAL_32 *)tr2+1) = (EIF_REAL_32) tr4_1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+2) = (EIF_REAL_32) tr4_1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+3) = (EIF_REAL_32) tr4_1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+4) = (EIF_REAL_32) tr4_1;
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2570, Dtype(tr2)))(tr2).it_r;
	ur1 = RTCCL(tr1);
	ui4_2 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6764, "set_m_row", Result))(Result, ur1x, ui4_2x);
	RTHOOK(5);
	ui4_1 = ((EIF_INTEGER_32) 5L);
	{
		static EIF_TYPE_INDEX typarr0[] = {437,191,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_REAL_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 5L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+0) = (EIF_REAL_32) tr4_1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+1) = (EIF_REAL_32) tr4_1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 1L));
	*((EIF_REAL_32 *)tr2+2) = (EIF_REAL_32) tr4_1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+3) = (EIF_REAL_32) tr4_1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+4) = (EIF_REAL_32) tr4_1;
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2570, Dtype(tr2)))(tr2).it_r;
	ur1 = RTCCL(tr1);
	ui4_2 = ((EIF_INTEGER_32) 2L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6764, "set_m_row", Result))(Result, ur1x, ui4_2x);
	RTHOOK(6);
	ui4_1 = ((EIF_INTEGER_32) 5L);
	{
		static EIF_TYPE_INDEX typarr0[] = {437,191,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_REAL_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 5L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+0) = (EIF_REAL_32) tr4_1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+1) = (EIF_REAL_32) tr4_1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+2) = (EIF_REAL_32) tr4_1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 1L));
	*((EIF_REAL_32 *)tr2+3) = (EIF_REAL_32) tr4_1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+4) = (EIF_REAL_32) tr4_1;
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2570, Dtype(tr2)))(tr2).it_r;
	ur1 = RTCCL(tr1);
	ui4_2 = ((EIF_INTEGER_32) 3L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6764, "set_m_row", Result))(Result, ur1x, ui4_2x);
	RTHOOK(7);
	ui4_1 = ((EIF_INTEGER_32) 5L);
	{
		static EIF_TYPE_INDEX typarr0[] = {437,191,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_REAL_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 5L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) -1L));
	*((EIF_REAL_32 *)tr2+0) = (EIF_REAL_32) tr4_1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) -1L));
	*((EIF_REAL_32 *)tr2+1) = (EIF_REAL_32) tr4_1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) -1L));
	*((EIF_REAL_32 *)tr2+2) = (EIF_REAL_32) tr4_1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+3) = (EIF_REAL_32) tr4_1;
	tr4_1 = (EIF_REAL_32) (((EIF_INTEGER_32) 0L));
	*((EIF_REAL_32 *)tr2+4) = (EIF_REAL_32) tr4_1;
	tr1 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2570, Dtype(tr2)))(tr2).it_r;
	ur1 = RTCCL(tr1);
	ui4_2 = ((EIF_INTEGER_32) 4L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(6764, "set_m_row", Result))(Result, ur1x, ui4_2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef ui4_2
}

/* {EV_PIXEL_BUFFER_IMP}.data */
EIF_TYPED_VALUE F1677_18944 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(15829,Dtype(Current)));
	return r;
}


/* {EV_PIXEL_BUFFER_IMP}.draw_pixel_buffer */
void F1677_18945 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "draw_pixel_buffer";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(14);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,Current);
	RTLR(5,loc5);
	RTLR(6,loc2);
	RTLR(7,ur1);
	RTLR(8,loc4);
	RTLR(9,loc3);
	RTLR(10,ur2);
	RTLR(11,ur3);
	RTLR(12,loc6);
	RTLR(13,loc7);
	RTLIU(14);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	
	RTEAA(l_feature_name, 1676, Current, 7, 2, 25667);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1676, Current, 25667);
	RTCC(arg1, 1676, l_feature_name, 1, eif_new_type(1574, 0x01), 0x01);
	RTCC(arg2, 1676, l_feature_name, 2, eif_new_type(1381, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF800068C, 0, 0); /* loc1 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14846, "implementation", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_new_type(1676, 0x00), loc1);
	RTHOOK(2);
	RTCT0("not_void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(3);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15823, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(4);
		RTDBGAL(Current, 5, 0xF80005AC, 0, 0); /* loc5 */
		loc5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15825, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(5);
		RTCT0("l_gdip_bitmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc5 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(6);
		RTDBGAL(Current, 2, 0xF80005AA, 0, 0); /* loc2 */
		tr1 = RTLN(eif_new_type(1450, 0x01).id);
		ur1 = RTCCL(loc5);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12912, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(6,1);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(7);
		RTDBGAL(Current, 4, 0xF80005F6, 0, 0); /* loc4 */
		tr1 = RTLN(eif_new_type(1526, 0x01).id);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ui4_2 = ((EIF_INTEGER_32) 0L);
		ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(12129, "width", arg2));
		ui4_3 = ti4_1;
		ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVA(12130, "height", arg2));
		ui4_4 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(14467, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		RTNHOOK(7,1);
		loc4 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(8);
		RTDBGAL(Current, 3, 0xF80005F6, 0, 0); /* loc3 */
		tr1 = RTLN(eif_new_type(1526, 0x01).id);
		ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(12127, "x", arg2));
		ui4_1 = ti4_1;
		ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVA(12128, "y", arg2));
		ui4_2 = ti4_2;
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12133, "right", arg2))(arg2)).it_i4);
		ui4_3 = ti4_3;
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12134, "bottom", arg2))(arg2)).it_i4);
		ui4_4 = ti4_4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(14467, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		RTNHOOK(8,1);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(9);
		RTDBGAL(Current, 5, 0xF80005AC, 0, 0); /* loc5 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15825, "gdip_bitmap", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc5 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(10);
		RTCT0("l_gdip_bitmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc5 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(11);
		ur1 = RTCCL(loc5);
		ur2 = RTCCL(loc4);
		ur3 = RTCCL(loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(12918, "draw_image_with_dest_rect_src_rect", loc2))(loc2, ur1x, ur2x, ur3x);
		RTHOOK(12);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3245, "dispose", loc3))(loc3);
		RTHOOK(13);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3245, "dispose", loc4))(loc4);
		RTHOOK(14);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12367, "destroy_item", loc2))(loc2);
	} else {
		RTHOOK(15);
		RTDBGAL(Current, 6, 0xF800065E, 0, 0); /* loc6 */
		loc6 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15824, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(16);
		RTCT0("l_pixmap /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc6 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(17);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(15824, "pixmap", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc7 = RTCCL(tr1);
		if (EIF_TEST(loc7)) {
			RTHOOK(18);
			ti4_1 = *(EIF_INTEGER_32 *)(arg2 + RTVA(12127, "x", arg2));
			ui4_1 = ti4_1;
			ti4_2 = *(EIF_INTEGER_32 *)(arg2 + RTVA(12128, "y", arg2));
			ui4_2 = ti4_2;
			ur1 = RTCCL(loc7);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(15169, "draw_pixmap", loc6))(loc6, ui4_1x, ui4_2x, ur1x);
		} else {
			if (RTAL & CK_CHECK) {
				RTHOOK(19);
				RTCT("False", EX_CHECK);
					RTCF;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
#undef up1
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg2
#undef arg1
}

/* {EV_PIXEL_BUFFER_IMP}.cwin_get_di_bits */
void F1677_18946 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
{
	GTCX
	char *l_feature_name = "cwin_get_di_bits";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_p
#define arg6 arg6x.it_p
#define arg7 arg7x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_i4 = * (EIF_INTEGER_32 *) arg7x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_p = * (EIF_POINTER *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_p = * (EIF_POINTER *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_POINTER,&arg5);
	RTLU(SK_POINTER,&arg6);
	RTLU(SK_INT32,&arg7);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1676, Current, 0, 7, 25668);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1676, Current, 25668);
	RTIV(Current, RTAL);
	GetDIBits(((HDC) arg1), ((HBITMAP) arg2), ((UINT) arg3), ((UINT) arg4), ((void *) arg5), ((BITMAPINFO *) arg6), ((UINT) arg7));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(9);
	RTEE;
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit1677 (void)
{
	GTCX
	RTOTS (18938,F1677_18938)
}


#ifdef __cplusplus
}
#endif

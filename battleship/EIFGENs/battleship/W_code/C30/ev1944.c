/*
 * Code for class EV_FRAME_IMP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1944_24193(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1944_24194(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1944_24195(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1944_24196(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1944_24197(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1944_24198(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1944_24199(EIF_REFERENCE);
extern void F1944_24200(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1944_24201(EIF_REFERENCE);
extern void F1944_24202(EIF_REFERENCE);
extern void F1944_24203(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1944_24204(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1944_24205(EIF_REFERENCE);
extern void F1944_24206(EIF_REFERENCE);
extern void F1944_24207(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1944_24208(EIF_REFERENCE);
extern void F1944_24209(EIF_REFERENCE);
extern void F1944_24210(EIF_REFERENCE);
extern void F1944_24211(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1944_24212(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1944_24213(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1944_24214(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1944_24215(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1944_24216(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1944_24217(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1944_24218(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1944_24219(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1944_24220(EIF_REFERENCE);
extern void F1944_24221(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1944_24222(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1944_24223(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1944_24224(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1944_24225(EIF_REFERENCE);
static EIF_TYPED_VALUE F1944_24226_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1944_24226(EIF_REFERENCE);
extern void EIF_Minit1944(void);

#ifdef __cplusplus
}
#endif

#include "eif_helpers.h"
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

/* {EV_FRAME_IMP}.old_make */
void F1944_24193 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
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
	
	RTEAA(l_feature_name, 1943, Current, 0, 1, 30191);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1943, Current, 30191);
	RTCC(arg1, 1943, l_feature_name, 1, RTWCT(15734, dtype, Dftype(Current)), 0x01);
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

/* {EV_FRAME_IMP}.make */
void F1944_24194 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui1_1x = {{0}, SK_INT8};
#define ui1_1 ui1_1x.it_i1
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_8 ti1_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1943, Current, 0, 0, 30192);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1943, Current, 30192);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(18858, dtype))(Current);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 19703, 0x40000000, 1); /* open_theme */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18861, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18438, "theme_drawer", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(2,2);
	tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
	up1 = tp1;
	tr1 = RTMS_EX_H("Button",6,2084447598);
	ur1 = tr1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10084, "open_theme_data", tr2))(tr2, up1x, ur1x)).it_p);
	*(EIF_POINTER *)(Current + RTWA(19703, dtype)) = (EIF_POINTER) tp1;
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(16317, dtype))(Current);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 19704, 0x10000000, 1); /* frame_style */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10426, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(19704, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 16338, 0x10000000, 1); /* text_alignment */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16329, dtype))(Current)).it_i4);
	*(EIF_INTEGER_32 *)(Current + RTWA(16338, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(15729, 1942))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
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
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui1_1
}

/* {EV_FRAME_IMP}.frame_style */
EIF_TYPED_VALUE F1944_24195 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(19704,Dtype(Current)));
	return r;
}


/* {EV_FRAME_IMP}.client_x */
EIF_TYPED_VALUE F1944_24196 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "client_x";
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
	
	RTEAA(l_feature_name, 1943, Current, 0, 0, 30194);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1943, Current, 30194);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19698, Dtype(Current)))(Current)).it_i4);
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

/* {EV_FRAME_IMP}.client_y */
EIF_TYPED_VALUE F1944_24197 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "client_y";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1943, Current, 0, 0, 30195);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1943, Current, 30195);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(19701, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19699, dtype))(Current)).it_i4);
	ui4_1 = ti4_2;
	ti4_2 = eif_max_int32 (ti4_1,ui4_1);
	Result = *(EIF_INTEGER_32 *)(Current + RTWA(16475, dtype));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_2 + Result);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ui4_1
}

/* {EV_FRAME_IMP}.client_width */
EIF_TYPED_VALUE F1944_24198 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "client_width";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1943, Current, 0, 0, 30196);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1943, Current, 30196);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16243, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19622, dtype))(Current)).it_i4);
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19698, dtype))(Current)).it_i4);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ti4_4 = eif_max_int32 ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) - ti4_3),ui4_1);
	Result = (EIF_INTEGER_32) ti4_4;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("positive", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ui4_1
}

/* {EV_FRAME_IMP}.client_height */
EIF_TYPED_VALUE F1944_24199 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "client_height";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1943, Current, 0, 0, 30197);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1943, Current, 30197);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16244, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19623, dtype))(Current)).it_i4);
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19698, dtype))(Current)).it_i4);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ti4_4 = eif_max_int32 ((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - ti4_2) - ti4_3),ui4_1);
	Result = (EIF_INTEGER_32) ti4_4;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("positive", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ui4_1
}

/* {EV_FRAME_IMP}.set_font */
void F1944_24200 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_font";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
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
	
	RTEAA(l_feature_name, 1943, Current, 0, 1, 30198);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1943, Current, 30198);
	RTCC(arg1, 1943, l_feature_name, 1, eif_new_type(1576, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_font_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(16314, 1715))(Current, ur1x);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(19697, dtype))(Current);
	RTHOOK(4);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16175, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ur1 = RTCCL(Current);
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(16184, dtype))(Current, ui4_1x, ur1x, ub1x);
	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(19601, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("assigned", EX_POST);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15753, dtype))(Current)).it_b);
		if (tb2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16313, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(6,1);
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
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ub1
#undef arg1
}

/* {EV_FRAME_IMP}.enable_sensitive */
void F1944_24201 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enable_sensitive";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1943, Current, 0, 0, 30199);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1943, Current, 30199);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(16275, 1942))(Current);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(19601, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_FRAME_IMP}.disable_sensitive */
void F1944_24202 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "disable_sensitive";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1943, Current, 0, 0, 30200);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1943, Current, 30200);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(16276, 1942))(Current);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(19601, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_FRAME_IMP}.set_frame_style */
void F1944_24203 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_frame_style";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 1943, Current, 0, 1, 30201);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1943, Current, 30201);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_style_valid", EX_PRE);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10428, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 19704, 0x10000000, 1); /* frame_style */
	*(EIF_INTEGER_32 *)(Current + RTWA(19704, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(19601, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("style_assigned", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(19704, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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
#undef ui4_1
#undef arg1
}

/* {EV_FRAME_IMP}.set_text */
void F1944_24204 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_text";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,ur1);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1943, Current, 1, 1, 30202);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1943, Current, 30202);
	RTCC(arg1, 1943, l_feature_name, 1, eif_new_type(229, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_text_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("no_carriage_returns", EX_PRE);
		tu4_1 = (EIF_NATURAL_32) (EIF_CHARACTER_8) '\015';
		uu4_1 = tu4_1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4643, "has_code", arg1))(arg1, uu4_1x)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4639, "is_empty", arg1))(arg1)).it_b);
	if (tb1) {
		RTHOOK(4);
		RTDBGAA(Current, dtype, 19702, 0x10000000, 1); /* text_width */
		*(EIF_INTEGER_32 *)(Current + RTWA(19702, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(5);
		RTDBGAA(Current, dtype, 19701, 0x10000000, 1); /* text_height */
		*(EIF_INTEGER_32 *)(Current + RTWA(19701, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
		RTHOOK(6);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(16324, 1720))(Current, ur1x);
	} else {
		RTHOOK(7);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(16324, 1720))(Current, ur1x);
		RTHOOK(8);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(19697, dtype))(Current);
	}
	RTHOOK(9);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16175, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ur1 = RTCCL(Current);
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(16184, dtype))(Current, ui4_1x, ur1x, ub1x);
	RTHOOK(10);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(19601, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("text_cloned", EX_POST);
		tb1 = '\0';
		tb2 = '\0';
		loc1 = RTCCL(arg1);
		if (EIF_TEST(loc1)) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16323, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(11,1);
			ur1 = RTCCL(loc1);
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4667, "same_string_general", tr1))(tr1, ur1x)).it_b);
			tb2 = tb3;
		}
		if (tb2) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16323, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tb1 = !RTCEQ(tr1, loc1);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef uu4_1
#undef ub1
#undef arg1
}

/* {EV_FRAME_IMP}.update_text_size */
void F1944_24205 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "update_text_size";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc3);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,loc2);
	RTLR(6,ur1);
	RTLR(7,loc4);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	
	RTEAA(l_feature_name, 1943, Current, 4, 0, 30203);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1943, Current, 30203);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 3, 0xF80000EE, 0, 0); /* loc3 */
	loc3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16323, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(2);
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ' ';
	uw1 = tw1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4906, "prepend_character", loc3))(loc3, uw1x);
	RTHOOK(3);
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ' ';
	uw1 = tw1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4914, "append_character", loc3))(loc3, uw1x);
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16318, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTHOOK(5);
		RTDBGAL(Current, 1, 0xF800073B, 0, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16318, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(5,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14846, "implementation", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc1 = RTCCL(tr2);
		loc1 = RTRV(eif_new_type(1851, 0x00), loc1);
		RTHOOK(6);
		RTCT0("font_not_void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(7);
		RTDBGAL(Current, 2, 0xF80000BA, 0, 0); /* loc2 */
		ur1 = RTCCL(loc3);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15886, "string_size", loc1))(loc1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc2 = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(8);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16319, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc4 = RTCCL(tr1);
		if (EIF_TEST(loc4)) {
			RTHOOK(9);
			RTDBGAL(Current, 2, 0xF80000BA, 0, 0); /* loc2 */
			ur1 = RTCCL(loc3);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(17855, "string_size", loc4))(loc4, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc2 = (EIF_REFERENCE) RTCCL(tr1);
		}
	}
	RTHOOK(10);
	RTCT0("t /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(11);
	RTDBGAA(Current, dtype, 19702, 0x10000000, 1); /* text_width */
	ti4_1 = eif_integer_32_item(RTCW(loc2),1);
	*(EIF_INTEGER_32 *)(Current + RTWA(19702, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(12);
	RTDBGAA(Current, dtype, 19701, 0x10000000, 1); /* text_height */
	ti4_1 = eif_integer_32_item(RTCW(loc2),2);
	*(EIF_INTEGER_32 *)(Current + RTWA(19701, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef uw1
}

/* {EV_FRAME_IMP}.set_default_minimum_size */
void F1944_24206 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_default_minimum_size";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1943, Current, 0, 0, 30204);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1943, Current, 30204);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19700, dtype))(Current)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ti4_1);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19698, dtype))(Current)).it_i4);
	ui4_2 = (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ti4_2);
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(16146, dtype))(Current, ui4_1x, ui4_2x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ui4_1
#undef ui4_2
#undef ub1
}

/* {EV_FRAME_IMP}.set_border_width */
void F1944_24207 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_border_width";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,ur1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1943, Current, 0, 1, 30205);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1943, Current, 30205);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("positive_value", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 16475, 0x10000000, 1); /* border_width */
	*(EIF_INTEGER_32 *)(Current + RTWA(16475, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(3);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16175, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ur1 = RTCCL(Current);
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(16184, dtype))(Current, ui4_1x, ur1x, ub1x);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(19601, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("border_assigned", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(16475, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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
#undef ur1
#undef ui4_1
#undef ub1
#undef arg1
}

/* {EV_FRAME_IMP}.align_text_center */
void F1944_24208 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "align_text_center";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1943, Current, 0, 0, 30206);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1943, Current, 30206);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(16339, 1720))(Current);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(19601, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_FRAME_IMP}.align_text_left */
void F1944_24209 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "align_text_left";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1943, Current, 0, 0, 30207);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1943, Current, 30207);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(16341, 1720))(Current);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(19601, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_FRAME_IMP}.align_text_right */
void F1944_24210 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "align_text_right";
	RTEX;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1943, Current, 0, 0, 30208);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1943, Current, 30208);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(16340, 1720))(Current);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(19601, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_FRAME_IMP}.set_top_level_window_imp */
void F1944_24211 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_top_level_window_imp";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
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
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1943, Current, 1, 1, 30175);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1943, Current, 30175);
	if (arg1) {
		RTCC(arg1, 1943, l_feature_name, 1, eif_new_type(1947, 0x00), 0x00);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 18860, 0xF800079B, 0); /* top_level_window_imp */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(18860, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19692, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(19588, "set_top_level_window_imp", loc1))(loc1, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {EV_FRAME_IMP}.compute_minimum_width */
void F1944_24212 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "compute_minimum_width";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_b
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1943, Current, 2, 1, 30176);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1943, Current, 30176);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_is_destroyed", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15732, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19692, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = RTCCL(tr1);
	if (EIF_TEST(loc2)) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16404, "is_show_requested", loc2))(loc2)).it_b);
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16245, "minimum_width", loc2))(loc2)).it_i4);
		loc1 = (EIF_INTEGER_32) ti4_1;
	}
	RTHOOK(4);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19622, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19698, dtype))(Current)).it_i4);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + ti4_1) + ti4_2);
	RTHOOK(5);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(19702, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19700, dtype))(Current)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ti4_2));
	ti4_1 = eif_max_int32 (loc1,ui4_1);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	ui4_1 = loc1;
	ub1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(16144, dtype))(Current, ui4_1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ui4_1
#undef ub1
#undef arg1
}

/* {EV_FRAME_IMP}.compute_minimum_height */
void F1944_24213 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "compute_minimum_height";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_b
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1943, Current, 2, 1, 30177);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1943, Current, 30177);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_is_destroyed", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15732, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19692, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc2 = RTCCL(tr1);
	if (EIF_TEST(loc2)) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16404, "is_show_requested", loc2))(loc2)).it_b);
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16246, "minimum_height", loc2))(loc2)).it_i4);
		loc1 = (EIF_INTEGER_32) ti4_1;
	}
	RTHOOK(4);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19623, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19698, dtype))(Current)).it_i4);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + ti4_1) + ti4_2);
	RTHOOK(5);
	ui4_1 = loc1;
	ub1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(16145, dtype))(Current, ui4_1x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ui4_1
#undef ub1
#undef arg1
}

/* {EV_FRAME_IMP}.compute_minimum_size */
void F1944_24214 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "compute_minimum_size";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_b
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc3);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1943, Current, 3, 1, 30178);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1943, Current, 30178);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_is_destroyed", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(15732, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = '\0';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19692, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc3 = RTCCL(tr1);
	if (EIF_TEST(loc3)) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16404, "is_show_requested", loc3))(loc3)).it_b);
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16245, "minimum_width", loc3))(loc3)).it_i4);
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(4);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(16246, "minimum_height", loc3))(loc3)).it_i4);
		loc1 = (EIF_INTEGER_32) ti4_1;
	}
	RTHOOK(5);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19622, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19698, dtype))(Current)).it_i4);
	loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc2 + ti4_1) + ti4_2);
	RTHOOK(6);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19623, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19698, dtype))(Current)).it_i4);
	loc1 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc1 + ti4_1) + ti4_2);
	RTHOOK(7);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(19702, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19700, dtype))(Current)).it_i4);
	ui4_1 = (EIF_INTEGER_32) (ti4_1 + (EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ti4_2));
	ti4_1 = eif_max_int32 (loc2,ui4_1);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(8);
	ui4_1 = loc2;
	ui4_2 = loc1;
	ub1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(16146, dtype))(Current, ui4_1x, ui4_2x, ub1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ui4_1
#undef ui4_2
#undef ub1
#undef arg1
}

/* {EV_FRAME_IMP}.top_level_window_imp */
EIF_TYPED_VALUE F1944_24215 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(18860,Dtype(Current)));
	return r;
}


/* {EV_FRAME_IMP}.total_border_width */
EIF_TYPED_VALUE F1944_24216 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "total_border_width";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1943, Current, 0, 0, 30180);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1943, Current, 30180);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19699, dtype))(Current)).it_i4);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(16475, dtype));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result + ti4_1);
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

/* {EV_FRAME_IMP}.frame_style_border_width */
EIF_TYPED_VALUE F1944_24217 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "frame_style_border_width";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1943, Current, 0, 0, 30181);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1943, Current, 30181);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(19704, Dtype(Current)));
	switch (ti4_1) {
		case 1L:
			RTHOOK(2);
			RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			break;
		case 2L:
			RTHOOK(3);
			RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			break;
		case 3L:
			RTHOOK(4);
			RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			break;
		case 4L:
			RTHOOK(5);
			RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
			Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			break;
		default:
			RTEC(EN_WHEN);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {EV_FRAME_IMP}.text_padding */
EIF_TYPED_VALUE F1944_24218 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
	return r;
}

/* {EV_FRAME_IMP}.text_height */
EIF_TYPED_VALUE F1944_24219 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(19701,Dtype(Current)));
	return r;
}


/* {EV_FRAME_IMP}.text_width */
EIF_TYPED_VALUE F1944_24220 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(19702,Dtype(Current)));
	return r;
}


/* {EV_FRAME_IMP}.on_erase_background */
void F1944_24221 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "on_erase_background";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,ur1);
	RTLR(4,ur2);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1943, Current, 0, 2, 30185);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1943, Current, 30185);
	RTCC(arg1, 1943, l_feature_name, 1, eif_new_type(1431, 0x01), 0x01);
	RTCC(arg2, 1943, l_feature_name, 2, eif_new_type(1526, 0x01), 0x01);
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
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(18873, dtype));
	if (tb1) {
		RTHOOK(5);
		ur1 = RTCCL(arg1);
		ur2 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(18863, dtype))(Current, ur1x, ur2x);
	} else {
		RTHOOK(6);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(19603, dtype))(Current);
		RTHOOK(7);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11289, dtype))(Current, ui4_1x)).it_p);
		up1 = tp1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(19604, dtype))(Current, up1x);
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
#undef ur2
#undef ui4_1
#undef arg2
#undef arg1
}

/* {EV_FRAME_IMP}.on_paint */
void F1944_24222 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "on_paint";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc11 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc15 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
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
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_INTEGER_32 ti4_7;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(20);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc9);
	RTLR(5,tr2);
	RTLR(6,loc12);
	RTLR(7,ur1);
	RTLR(8,loc13);
	RTLR(9,loc5);
	RTLR(10,loc6);
	RTLR(11,ur2);
	RTLR(12,ur3);
	RTLR(13,ur4);
	RTLR(14,loc7);
	RTLR(15,loc16);
	RTLR(16,loc8);
	RTLR(17,loc17);
	RTLR(18,loc10);
	RTLR(19,loc14);
	RTLIU(20);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_INT32, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_REF, &loc13);
	RTLU(SK_REF, &loc14);
	RTLU(SK_BOOL, &loc15);
	RTLU(SK_REF, &loc16);
	RTLU(SK_REF, &loc17);
	
	RTEAA(l_feature_name, 1943, Current, 17, 2, 30186);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1943, Current, 30186);
	RTCC(arg1, 1943, l_feature_name, 1, eif_new_type(1431, 0x01), 0x01);
	RTCC(arg2, 1943, l_feature_name, 2, eif_new_type(1526, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12362, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("paint_dc_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("paint_dc_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11645, "exists", arg1))(arg1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("invalid_rect_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("invalid_rect_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12362, "exists", arg2))(arg2)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(6);
	RTDBGAL(Current, 15, 0x04000000, 1, 0); /* loc15 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11077, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(6,1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17343, "is_remote_session", tr1))(tr1)).it_b);
	loc15 = (EIF_BOOLEAN) tb1;
	RTHOOK(7);
	RTDBGAL(Current, 9, 0xF80004B5, 0, 0); /* loc9 */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18861, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(7,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18438, "theme_drawer", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	loc9 = (EIF_REFERENCE) RTCCL(tr2);
	RTHOOK(8);
	if (loc15) {
		RTHOOK(9);
		RTDBGAL(Current, 12, 0xF8000590, 0, 0); /* loc12 */
		loc12 = (EIF_REFERENCE) RTCCL(arg1);
	} else {
		RTHOOK(10);
		RTDBGAL(Current, 12, 0xF8000590, 0, 0); /* loc12 */
		tr1 = RTLN(eif_new_type(1425, 0x01).id);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12670, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(10,1);
		loc12 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(11);
		RTDBGAL(Current, 13, 0xF800059E, 0, 0); /* loc13 */
		tr1 = RTLN(eif_new_type(1438, 0x01).id);
		ur1 = RTCCL(arg1);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16243, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16244, dtype))(Current)).it_i4);
		ui4_2 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(12797, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x);
		RTNHOOK(11,1);
		loc13 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(12);
		ur1 = RTCCL(loc13);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12522, "select_bitmap", loc12))(loc12, ur1x);
		RTHOOK(13);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3245, "dispose", loc13))(loc13);
	}
	RTHOOK(14);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	loc3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16164, dtype))(Current)).it_i4);
	RTHOOK(15);
	RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
	loc4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16165, dtype))(Current)).it_i4);
	RTHOOK(16);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(19704, dtype));
	switch (ti4_1) {
		case 1L:
			RTHOOK(17);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8358, dtype))(Current)).it_i4);
			loc1 = (EIF_INTEGER_32) loc1;
			break;
		case 2L:
			RTHOOK(18);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8357, dtype))(Current)).it_i4);
			loc1 = (EIF_INTEGER_32) loc1;
			break;
		case 3L:
			RTHOOK(19);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8354, dtype))(Current)).it_i4);
			break;
		case 4L:
			RTHOOK(20);
			RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
			loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8353, dtype))(Current)).it_i4);
			break;
		default:
			if (RTAL & CK_CHECK) {
				RTHOOK(21);
				RTCT("valid_value", EX_CHECK);
					RTCF;
			}
			break;
	}
	RTHOOK(22);
	RTDBGAL(Current, 5, 0xF80005F6, 0, 0); /* loc5 */
	tr1 = RTLN(eif_new_type(1526, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ui4_3 = ((EIF_INTEGER_32) 0L);
	ui4_4 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(14467, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	RTNHOOK(22,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(23);
	RTDBGAL(Current, 6, 0xF800059F, 0, 0); /* loc6 */
	loc6 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18525, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(24);
	RTCT0("bk_brush /= Void", EX_CHECK);
	if ((EIF_BOOLEAN)(loc6 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(25);
	ur1 = RTCCL(Current);
	ur2 = RTCCL(loc12);
	ur3 = RTCCL(arg2);
	ur4 = RTCCL(loc6);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10089, "draw_widget_background", loc9))(loc9, ur1x, ur2x, ur3x, ur4x);
	RTHOOK(26);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16337, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7101, 1019))(Current)).it_i4);
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		RTHOOK(27);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19700, dtype))(Current)).it_i4);
		loc2 = (EIF_INTEGER_32) loc2;
	} else {
		RTHOOK(28);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16337, dtype))(Current)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7102, 1019))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTHOOK(29);
			RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
			loc2 = *(EIF_INTEGER_32 *)(Current + RTWA(19702, dtype));
			loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 - loc2) / ((EIF_INTEGER_32) 2L));
		} else {
			RTHOOK(30);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16337, dtype))(Current)).it_i4);
			ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7103, 1019))(Current)).it_i4);
			if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
				RTHOOK(31);
				RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
				loc2 = *(EIF_INTEGER_32 *)(Current + RTWA(19702, dtype));
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19700, dtype))(Current)).it_i4);
				loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc3 - loc2) - ti4_1);
			}
		}
	}
	RTHOOK(32);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(19701, dtype));
	ui4_2 = (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L));
	ui4_3 = loc3;
	ui4_4 = loc4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14480, "set_rect", loc5))(loc5, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	RTHOOK(33);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16279, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(34);
		RTDBGAL(Current, 11, 0x10000000, 1, 0); /* loc11 */
		loc11 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8797, dtype))(Current)).it_i4);
		loc11 = (EIF_INTEGER_32) loc11;
	} else {
		RTHOOK(35);
		RTDBGAL(Current, 11, 0x10000000, 1, 0); /* loc11 */
		loc11 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8798, dtype))(Current)).it_i4);
		loc11 = (EIF_INTEGER_32) loc11;
	}
	RTHOOK(36);
	tb1 = '\0';
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8354, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18861, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(36,1);
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18441, "themes_active", tr1))(tr1)).it_b);
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(37);
		tp1 = *(EIF_POINTER *)(Current + RTWA(19703, dtype));
		up1 = tp1;
		ur1 = RTCCL(loc12);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10770, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		ui4_2 = loc11;
		ur2 = RTCCL(loc5);
		ur3 = NULL;
		ur4 = RTCCL(loc6);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10087, "draw_theme_background", loc9))(loc9, up1x, ur1x, ui4_1x, ui4_2x, ur2x, ur3x, ur4x);
	} else {
		RTHOOK(38);
		ur1 = RTCCL(loc12);
		ur2 = RTCCL(loc5);
		ui4_1 = loc1;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8361, dtype))(Current)).it_i4);
		ui4_2 = ti4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(11525, dtype))(Current, ur1x, ur2x, ui4_1x, ui4_2x);
		RTHOOK(39);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8357, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		ti4_1 = eif_bit_and(loc1,ui4_1);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8357, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			RTHOOK(40);
			RTDBGAL(Current, 7, 0xF800059D, 0, 0); /* loc7 */
			loc7 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18176, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTHOOK(41);
			ur1 = RTCCL(loc7);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12518, "select_pen", loc12))(loc12, ur1x);
			RTHOOK(42);
			ui4_1 = ((EIF_INTEGER_32) 0L);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(19701, dtype));
			ui4_2 = (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L));
			ui4_3 = loc3;
			ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(19701, dtype));
			ui4_4 = (EIF_INTEGER_32) (ti4_2 / ((EIF_INTEGER_32) 2L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(12550, "line", loc12))(loc12, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
			RTHOOK(43);
			ui4_1 = ((EIF_INTEGER_32) 0L);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(19701, dtype));
			ui4_2 = (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 2L));
			ui4_3 = ((EIF_INTEGER_32) 0L);
			ui4_4 = (EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(12550, "line", loc12))(loc12, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
			RTHOOK(44);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12523, "unselect_pen", loc12))(loc12);
			RTHOOK(45);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11652, "delete", loc7))(loc7);
		}
	}
	RTHOOK(46);
	ui4_1 = loc2;
	ui4_2 = ((EIF_INTEGER_32) 0L);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(19702, dtype));
	ui4_3 = (EIF_INTEGER_32) (loc2 + ti4_1);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(19701, dtype));
	ui4_4 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14480, "set_rect", loc5))(loc5, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
	RTHOOK(47);
	ur1 = RTCCL(Current);
	ur2 = RTCCL(loc12);
	ur3 = RTCCL(loc5);
	ur4 = RTCCL(loc6);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10089, "draw_widget_background", loc9))(loc9, ur1x, ur2x, ur3x, ur4x);
	RTHOOK(48);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11652, "delete", loc6))(loc6);
	RTHOOK(49);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16323, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(49,1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4639, "is_empty", tr1))(tr1)).it_b);
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(50);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16318, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc16 = RTCCL(tr1);
		if (EIF_TEST(loc16)) {
			RTHOOK(51);
			RTDBGAL(Current, 8, 0xF800073B, 0, 0); /* loc8 */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14846, "implementation", loc16))(loc16)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc8 = RTCCL(tr1);
			loc8 = RTRV(eif_new_type(1851, 0x00), loc8);
			RTHOOK(52);
			RTCT0("font_not_void", EX_CHECK);
			if ((EIF_BOOLEAN)(loc8 != NULL)) {
				RTCK0;
			} else {
				RTCF0;
			}
			RTHOOK(53);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17866, "wel_font", loc8))(loc8)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12521, "select_font", loc12))(loc12, ur1x);
		} else {
			RTHOOK(54);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16319, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc17 = RTCCL(tr1);
			if (EIF_TEST(loc17)) {
				RTHOOK(55);
				ur1 = RTCCL(loc17);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12521, "select_font", loc12))(loc12, ur1x);
			}
		}
		RTHOOK(56);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19607, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12510, "set_text_color", loc12))(loc12, ur1x);
		RTHOOK(57);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18862, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(12509, "set_background_color", loc12))(loc12, ur1x);
		RTHOOK(58);
		RTDBGAL(Current, 10, 0xF80005F6, 0, 0); /* loc10 */
		tr1 = RTLN(eif_new_type(1526, 0x01).id);
		ui4_1 = loc2;
		ui4_2 = ((EIF_INTEGER_32) 0L);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(19702, dtype));
		ui4_3 = (EIF_INTEGER_32) (loc2 + ti4_1);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(19701, dtype));
		ui4_4 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(14467, Dtype(tr1)))(tr1, ui4_1x, ui4_2x, ui4_3x, ui4_4x);
		RTNHOOK(58,1);
		loc10 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(59);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19536, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTHOOK(60);
			RTDBGAL(Current, 14, 0xF8000704, 0, 0); /* loc14 */
			loc14 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19536, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		} else {
			RTHOOK(61);
			RTDBGAL(Current, 14, 0xF8000704, 0, 0); /* loc14 */
			tr1 = RTLN(eif_new_type(1031, 0x01).id);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
			RTNHOOK(61,1);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7644, "default_foreground_color", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(61,2);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14846, "implementation", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc14 = RTCCL(tr1);
			loc14 = RTRV(eif_new_type(1796, 0x00), loc14);
		}
		RTHOOK(62);
		RTCT0("color_imp /= Void", EX_CHECK);
		if ((EIF_BOOLEAN)(loc14 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(63);
		tp1 = *(EIF_POINTER *)(Current + RTWA(19703, dtype));
		up1 = tp1;
		ur1 = RTCCL(loc12);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10770, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8798, dtype))(Current)).it_i4);
		ui4_2 = ti4_2;
		tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16323, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur2 = RTCCL(tr1);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11510, dtype))(Current)).it_i4);
		ui4_3 = ti4_3;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(16279, dtype))(Current)).it_b);
		ub1 = tb1;
		ur3 = RTCCL(loc10);
		ur4 = RTCCL(loc14);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10095, "draw_text", loc9))(loc9, up1x, ur1x, ui4_1x, ui4_2x, ur2x, ui4_3x, ub1x, ur3x, ur4x);
	}
	RTHOOK(64);
	if ((EIF_BOOLEAN) !loc15) {
		RTHOOK(65);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14472, "left", arg2))(arg2)).it_i4);
		ui4_1 = ti4_1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14474, "top", arg2))(arg2)).it_i4);
		ui4_2 = ti4_2;
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14478, "width", arg2))(arg2)).it_i4);
		ui4_3 = ti4_3;
		ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14479, "height", arg2))(arg2)).it_i4);
		ui4_4 = ti4_4;
		ur1 = RTCCL(loc12);
		ti4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14472, "left", arg2))(arg2)).it_i4);
		ui4_5 = ti4_5;
		ti4_6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14474, "top", arg2))(arg2)).it_i4);
		ui4_6 = ti4_6;
		ti4_7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8807, 1129))(Current)).it_i4);
		ui4_7 = ti4_7;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(12568, "bit_blt", arg1))(arg1, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ur1x, ui4_5x, ui4_6x, ui4_7x);
	}
	RTHOOK(66);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12529, "unselect_all", loc12))(loc12);
	RTHOOK(67);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11652, "delete", loc12))(loc12);
	RTHOOK(68);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(19603, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(69);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(21);
	RTEE;
#undef up1
#undef up2
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
#undef ub1
#undef arg2
#undef arg1
}

/* {EV_FRAME_IMP}.on_size */
void F1944_24223 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "on_size";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1943, Current, 0, 3, 30187);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1943, Current, 30187);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(19589, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12362, dtype))(Current)).it_b);
		RTTE(tb1, label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(18591, dtype))(Current);
	RTHOOK(4);
	ui4_1 = arg1;
	ui4_2 = arg2;
	ui4_3 = arg3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(19592, 1942))(Current, ui4_1x, ui4_2x, ui4_3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_FRAME_IMP}.on_wm_theme_changed */
void F1944_24224 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "on_wm_theme_changed";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1943, Current, 0, 0, 30188);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1943, Current, 30188);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18861, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18438, "theme_drawer", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(1,2);
	tp1 = *(EIF_POINTER *)(Current + RTWA(19703, dtype));
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(10085, "close_theme_data", tr2))(tr2, up1x);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18861, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(18439, "update_theme_drawer", tr1))(tr1);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 19703, 0x40000000, 1); /* open_theme */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(18861, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(18438, "theme_drawer", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(3,2);
	tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
	up1 = tp1;
	tr1 = RTMS_EX_H("Button",6,2084447598);
	ur1 = tr1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(10084, "open_theme_data", tr2))(tr2, up1x, ur1x)).it_p);
	*(EIF_POINTER *)(Current + RTWA(19703, dtype)) = (EIF_POINTER) tp1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef up2
#undef ur1
}

/* {EV_FRAME_IMP}.open_theme */
EIF_TYPED_VALUE F1944_24225 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_POINTER;
	r.it_p = *(EIF_POINTER *)(Current + RTWA(19703,Dtype(Current)));
	return r;
}


/* {EV_FRAME_IMP}.interface */
static EIF_TYPED_VALUE F1944_24226_body (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 1943, Current, 0, 0, 30190);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1943, Current, 30190);
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

EIF_TYPED_VALUE F1944_24226 (EIF_REFERENCE Current)
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
			r.it_r = (F1944_24226_body (Current)).it_r;
			*(EIF_REFERENCE *)(Current + RTWA(15734,Dtype(Current))) = r.it_r;
			RTAR(Current, r.it_r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit1944 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

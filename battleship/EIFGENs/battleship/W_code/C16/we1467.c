/*
 * Code for class WEL_LIST_VIEW_SEARCH_INFO
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1467_15835(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1467_15836(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1467_15837(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1467_15838(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1467_15839(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1467_15840(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1467_15841(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1467_15842(EIF_REFERENCE);
extern void F1467_15843(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1467_15844(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1467_15845(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1467_15846(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1467_15847(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1467_15848(EIF_REFERENCE);
extern void F1467_15849(EIF_REFERENCE);
extern void F1467_15850(EIF_REFERENCE);
extern void F1467_15851(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1467_15852(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1467_15853(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1467_15854(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1467_15855(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1467_15856(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1467_15857(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1467_15858(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1467_15859(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1467_15860(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1467_15861(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1467_15862(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1467_15863(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1467_15864(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1467_25655(EIF_REFERENCE, int);
extern void EIF_Minit1467(void);

#ifdef __cplusplus
}
#endif

#include "wel_list_view_search_info.h"
#include "wel.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_LIST_VIEW_SEARCH_INFO}.flags */
EIF_TYPED_VALUE F1467_15835 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "flags";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
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
	
	RTEAA(l_feature_name, 1466, Current, 0, 0, 22549);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1466, Current, 22549);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
	up1 = tp1;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13226, dtype))(Current, up1x)).it_i4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {WEL_LIST_VIEW_SEARCH_INFO}.target */
EIF_TYPED_VALUE F1467_15836 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "target";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 1466, Current, 1, 0, 22550);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1466, Current, 22550);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_flags", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(13207, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7897, dtype))(Current)).it_i4);
		ui4_2 = ti4_2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12282, dtype))(Current, ui4_1x, ui4_2x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF8000530, 0, 0); /* loc1 */
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(13224, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(3);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(4);
		RTDBGAL(Current, 0, 0xF80000EE, 0,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2825, "string", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(5);
		RTDBGAL(Current, 0, 0xF80000EE, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(238, 0x01).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4623, Dtype(tr1)))(tr1);
		RTNHOOK(5,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
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
#undef ui4_1
#undef ui4_2
}

/* {WEL_LIST_VIEW_SEARCH_INFO}.lparam */
EIF_TYPED_VALUE F1467_15837 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "lparam";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 1466, Current, 0, 0, 22551);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1466, Current, 22551);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_flags", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(13207, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7895, dtype))(Current)).it_i4);
		ui4_2 = ti4_2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12282, dtype))(Current, ui4_1x, ui4_2x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
	up1 = tp1;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13228, dtype))(Current, up1x)).it_i4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ui4_1
#undef ui4_2
}

/* {WEL_LIST_VIEW_SEARCH_INFO}.starting_position */
EIF_TYPED_VALUE F1467_15838 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "starting_position";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1466, Current, 0, 0, 22552);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1466, Current, 22552);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_flags", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(13207, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7899, dtype))(Current)).it_i4);
		ui4_2 = ti4_2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12282, dtype))(Current, ui4_1x, ui4_2x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0xF800074E, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1870, 0x01).id);
	tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
	up1 = tp1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13229, dtype))(Current, up1x)).it_p);
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12359, Dtype(tr1)))(tr1, up1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12365, "set_unshared", Result))(Result);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui4_1
#undef ui4_2
}

/* {WEL_LIST_VIEW_SEARCH_INFO}.upwards */
EIF_TYPED_VALUE F1467_15839 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "upwards";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1466, Current, 0, 0, 22553);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1466, Current, 22553);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
	up1 = tp1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13230, dtype))(Current, up1x)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11315, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
}

/* {WEL_LIST_VIEW_SEARCH_INFO}.downwards */
EIF_TYPED_VALUE F1467_15840 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "downwards";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1466, Current, 0, 0, 22554);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1466, Current, 22554);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
	up1 = tp1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13230, dtype))(Current, up1x)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11317, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
}

/* {WEL_LIST_VIEW_SEARCH_INFO}.right */
EIF_TYPED_VALUE F1467_15841 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "right";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1466, Current, 0, 0, 22555);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1466, Current, 22555);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
	up1 = tp1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13230, dtype))(Current, up1x)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11316, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
}

/* {WEL_LIST_VIEW_SEARCH_INFO}.left */
EIF_TYPED_VALUE F1467_15842 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "left";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1466, Current, 0, 0, 22556);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1466, Current, 22556);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
	up1 = tp1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13230, dtype))(Current, up1x)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11314, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
}

/* {WEL_LIST_VIEW_SEARCH_INFO}.add_flag */
void F1467_15843 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "add_flag";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_POINTER tp1;
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
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 1466, Current, 1, 1, 22557);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1466, Current, 22557);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_flags", EX_PRE);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7900, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(13207, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ui4_2 = arg1;
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12280, dtype))(Current, ui4_1x, ui4_2x)).it_i4);
	RTHOOK(3);
	tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
	up1 = tp1;
	ui4_1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(13231, dtype))(Current, up1x, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("added", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(13207, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		ui4_2 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12282, dtype))(Current, ui4_1x, ui4_2x)).it_b);
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
	RTLO(4);
	RTEE;
#undef up1
#undef ui4_1
#undef ui4_2
#undef arg1
}

/* {WEL_LIST_VIEW_SEARCH_INFO}.set_target */
void F1467_15844 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_target";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1466, Current, 1, 1, 22558);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1466, Current, 22558);
	RTCC(arg1, 1466, l_feature_name, 1, eif_new_type(229, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_void_target", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_target", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4639, "is_empty", arg1))(arg1)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7897, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13215, dtype))(Current, ui4_1x);
	RTHOOK(4);
	RTDBGAL(Current, 1, 0xF8000530, 0, 0); /* loc1 */
	tr1 = RTLNSMART(RTWCT(13224, dtype, Dftype(Current)).id);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2820, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(4,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 13224, 0xF8000530, 0); /* str_target */
	tr1 = RTCCL(loc1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(13224, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
	up1 = tp1;
	tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2827, "item", loc1))(loc1)).it_p);
	up2 = tp2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(13232, dtype))(Current, up1x, up2x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("target_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(13208, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(7,1);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4667, "same_string_general", tr1))(tr1, ur1x)).it_b);
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
	RTLO(4);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef arg1
}

/* {WEL_LIST_VIEW_SEARCH_INFO}.set_flags */
void F1467_15845 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_flags";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
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
	
	RTEAA(l_feature_name, 1466, Current, 0, 1, 22559);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1466, Current, 22559);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_flags", EX_PRE);
		ui4_1 = arg1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7900, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
	up1 = tp1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(13207, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(13231, dtype))(Current, up1x, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("flags_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(13207, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
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
#undef ui4_1
#undef arg1
}

/* {WEL_LIST_VIEW_SEARCH_INFO}.set_lparam */
void F1467_15846 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_lparam";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA(l_feature_name, 1466, Current, 0, 1, 22560);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1466, Current, 22560);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7895, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13215, dtype))(Current, ui4_1x);
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
	up1 = tp1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(13209, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(13233, dtype))(Current, up1x, ui4_1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("lparam_set", EX_POST);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(13209, dtype))(Current)).it_i4);
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
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
#undef ui4_1
#undef arg1
}

/* {WEL_LIST_VIEW_SEARCH_INFO}.set_starting_position */
void F1467_15847 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_starting_position";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1466, Current, 0, 1, 22561);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1466, Current, 22561);
	RTCC(arg1, 1466, l_feature_name, 1, RTWCT(13210, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_void_starting_position", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_starting_position", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12362, "exists", arg1))(arg1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7899, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13215, dtype))(Current, ui4_1x);
	RTHOOK(4);
	tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
	up1 = tp1;
	tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(13210, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(4,1);
	tp2 = *(EIF_POINTER *)(tr1 + RTVA(12360, "item", tr1));
	up2 = tp2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(13234, dtype))(Current, up1x, up2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef ui4_1
#undef arg1
}

/* {WEL_LIST_VIEW_SEARCH_INFO}.set_upwards */
void F1467_15848 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_upwards";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1466, Current, 0, 0, 22562);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1466, Current, 22562);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7899, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13215, dtype))(Current, ui4_1x);
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
	up1 = tp1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11315, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(13235, dtype))(Current, up1x, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ui4_1
}

/* {WEL_LIST_VIEW_SEARCH_INFO}.set_downwards */
void F1467_15849 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_downwards";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1466, Current, 0, 0, 22563);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1466, Current, 22563);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7899, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13215, dtype))(Current, ui4_1x);
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
	up1 = tp1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11317, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(13235, dtype))(Current, up1x, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ui4_1
}

/* {WEL_LIST_VIEW_SEARCH_INFO}.set_right */
void F1467_15850 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_right";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1466, Current, 0, 0, 22564);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1466, Current, 22564);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7899, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13215, dtype))(Current, ui4_1x);
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
	up1 = tp1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11316, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(13235, dtype))(Current, up1x, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ui4_1
}

/* {WEL_LIST_VIEW_SEARCH_INFO}.set_left */
void F1467_15851 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "set_left";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1466, Current, 0, 0, 22565);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1466, Current, 22565);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7899, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(13215, dtype))(Current, ui4_1x);
	RTHOOK(2);
	tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
	up1 = tp1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11314, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(13235, dtype))(Current, up1x, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ui4_1
}

/* {WEL_LIST_VIEW_SEARCH_INFO}.structure_size */
EIF_TYPED_VALUE F1467_15852 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "structure_size";
	RTEX;
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
	
	RTEAA(l_feature_name, 1466, Current, 0, 0, 22566);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1466, Current, 22566);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(13225, dtype))(Current)).it_i4);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("positive_result", EX_POST);
		if ((EIF_BOOLEAN) (Result > ((EIF_INTEGER_32) 0L))) {
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
}

/* {WEL_LIST_VIEW_SEARCH_INFO}.str_target */
EIF_TYPED_VALUE F1467_15853 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(13224,Dtype(Current)));
	return r;
}


/* {WEL_LIST_VIEW_SEARCH_INFO}.c_structure_size */
EIF_TYPED_VALUE F1467_15854 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_structure_size";
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
	
	RTEAA(l_feature_name, 1466, Current, 0, 0, 22568);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1466, Current, 22568);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) sizeof (LV_FINDINFO);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_LIST_VIEW_SEARCH_INFO}.cwel_list_view_search_info_flags */
EIF_TYPED_VALUE F1467_15855 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "cwel_list_view_search_info_flags";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1466, Current, 0, 1, 22569);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1466, Current, 22569);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) cwel_list_view_search_info_flags(((LV_FINDINFO*) arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {WEL_LIST_VIEW_SEARCH_INFO}.cwel_list_view_search_info_target */
EIF_TYPED_VALUE F1467_15856 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "cwel_list_view_search_info_target";
	RTEX;
#define arg1 arg1x.it_p
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1466, Current, 0, 1, 22570);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1466, Current, 22570);
	RTIV(Current, RTAL);
	Result = (EIF_POINTER) cwel_list_view_search_info_target(((LV_FINDINFO*) arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg1
}

/* {WEL_LIST_VIEW_SEARCH_INFO}.cwel_list_view_search_info_lparam */
EIF_TYPED_VALUE F1467_15857 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "cwel_list_view_search_info_lparam";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1466, Current, 0, 1, 22571);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1466, Current, 22571);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) cwel_list_view_search_info_lparam(((LV_FINDINFO*) arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {WEL_LIST_VIEW_SEARCH_INFO}.cwel_list_view_search_info_starting_position */
EIF_TYPED_VALUE F1467_15858 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "cwel_list_view_search_info_starting_position";
	RTEX;
#define arg1 arg1x.it_p
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1466, Current, 0, 1, 22572);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1466, Current, 22572);
	RTIV(Current, RTAL);
	Result = (EIF_POINTER) cwel_list_view_search_info_starting_position(((LV_FINDINFO*) arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg1
}

/* {WEL_LIST_VIEW_SEARCH_INFO}.cwel_list_view_search_info_direction */
EIF_TYPED_VALUE F1467_15859 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "cwel_list_view_search_info_direction";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1466, Current, 0, 1, 22573);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1466, Current, 22573);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) cwel_list_view_search_info_direction(((LV_FINDINFO*) arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {WEL_LIST_VIEW_SEARCH_INFO}.cwel_list_view_search_info_set_flags */
void F1467_15860 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "cwel_list_view_search_info_set_flags";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1466, Current, 0, 2, 22574);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1466, Current, 22574);
	RTIV(Current, RTAL);
	cwel_list_view_search_info_set_flags(((LV_FINDINFO*) arg1), ((UINT) arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {WEL_LIST_VIEW_SEARCH_INFO}.cwel_list_view_search_info_set_target */
void F1467_15861 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "cwel_list_view_search_info_set_target";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1466, Current, 0, 2, 22575);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1466, Current, 22575);
	RTIV(Current, RTAL);
	cwel_list_view_search_info_set_target(((LV_FINDINFO*) arg1), ((LPCTSTR) arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {WEL_LIST_VIEW_SEARCH_INFO}.cwel_list_view_search_info_set_lparam */
void F1467_15862 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "cwel_list_view_search_info_set_lparam";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1466, Current, 0, 2, 22576);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1466, Current, 22576);
	RTIV(Current, RTAL);
	cwel_list_view_search_info_set_lparam(((LV_FINDINFO*) arg1), ((LPARAM) arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {WEL_LIST_VIEW_SEARCH_INFO}.cwel_list_view_search_info_set_starting_position */
void F1467_15863 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "cwel_list_view_search_info_set_starting_position";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1466, Current, 0, 2, 22577);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1466, Current, 22577);
	RTIV(Current, RTAL);
	cwel_list_view_search_info_set_starting_position(((LV_FINDINFO*) arg1), ((POINT*) arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {WEL_LIST_VIEW_SEARCH_INFO}.cwel_list_view_search_info_set_direction */
void F1467_15864 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "cwel_list_view_search_info_set_direction";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1466, Current, 0, 2, 22578);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1466, Current, 22578);
	RTIV(Current, RTAL);
	cwel_list_view_search_info_set_direction(((LV_FINDINFO*) arg1), ((UINT) arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
#undef arg2
#undef arg1
}

/* {WEL_LIST_VIEW_SEARCH_INFO}._invariant */
void F1467_25655 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN tb7;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 1466, Current, 0, 25654);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("valid_direction", Current);
	tb1 = '\0';
	tb2 = '\0';
	tb3 = '\0';
	tb4 = '\01';
	tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(13211, dtype))(Current)).it_b);
	if (tb5) {
		tb5 = '\0';
		tb6 = '\0';
		tb7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(13212, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb7) {
			tb7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(13213, dtype))(Current)).it_b);
			tb6 = (EIF_BOOLEAN) !tb7;
		}
		if (tb6) {
			tb6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(13214, dtype))(Current)).it_b);
			tb5 = (EIF_BOOLEAN) !tb6;
		}
		tb4 = tb5;
	}
	if (tb4) {
		tb4 = '\01';
		tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(13212, dtype))(Current)).it_b);
		if (tb5) {
			tb5 = '\0';
			tb6 = '\0';
			tb7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(13211, dtype))(Current)).it_b);
			if ((EIF_BOOLEAN) !tb7) {
				tb7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(13213, dtype))(Current)).it_b);
				tb6 = (EIF_BOOLEAN) !tb7;
			}
			if (tb6) {
				tb6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(13214, dtype))(Current)).it_b);
				tb5 = (EIF_BOOLEAN) !tb6;
			}
			tb4 = tb5;
		}
		tb3 = tb4;
	}
	if (tb3) {
		tb3 = '\01';
		tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(13213, dtype))(Current)).it_b);
		if (tb4) {
			tb4 = '\0';
			tb5 = '\0';
			tb6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(13211, dtype))(Current)).it_b);
			if ((EIF_BOOLEAN) !tb6) {
				tb6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(13212, dtype))(Current)).it_b);
				tb5 = (EIF_BOOLEAN) !tb6;
			}
			if (tb5) {
				tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(13214, dtype))(Current)).it_b);
				tb4 = (EIF_BOOLEAN) !tb5;
			}
			tb3 = tb4;
		}
		tb2 = tb3;
	}
	if (tb2) {
		tb2 = '\01';
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(13214, dtype))(Current)).it_b);
		if (tb3) {
			tb3 = '\0';
			tb4 = '\0';
			tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(13211, dtype))(Current)).it_b);
			if ((EIF_BOOLEAN) !tb5) {
				tb5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(13212, dtype))(Current)).it_b);
				tb4 = (EIF_BOOLEAN) !tb5;
			}
			if (tb4) {
				tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(13213, dtype))(Current)).it_b);
				tb3 = (EIF_BOOLEAN) !tb4;
			}
			tb2 = tb3;
		}
		tb1 = tb2;
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
}

void EIF_Minit1467 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

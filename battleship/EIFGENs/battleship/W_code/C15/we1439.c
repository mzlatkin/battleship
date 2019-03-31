/*
 * Code for class WEL_BITMAP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1439_15387(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1439_15388(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1439_15389(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1439_15390(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1439_15391(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1439_15392(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1439_15393(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1439_15394(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1439_15395(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1439_15396(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1439_15397(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1439_15398(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1439_15399(EIF_REFERENCE);
extern void F1439_15400(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1439_15401(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1439_15402(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1439_15403(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1439_15404(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1439_15405(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1439_15406(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1439_15407(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1439_15408(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1439_15409(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1439_15410(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1439_15411(EIF_REFERENCE);
extern void EIF_Minit1439(void);

#ifdef __cplusplus
}
#endif

#include <wel.h>
#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1439_15410
static EIF_POINTER inline_F1439_15410 (EIF_POINTER arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER* arg4, EIF_POINTER arg5, EIF_NATURAL_64 arg6)
{
	return (EIF_POINTER) (CreateDIBSection (
				(HDC) arg1,
				(CONST BITMAPINFO *) arg2,
				(UINT) arg3,
				(VOID **) arg4,
				(HANDLE) arg5,
				(DWORD) arg6
				))
	;
}
#define INLINE_F1439_15410
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_BITMAP}.make_by_id */
void F1439_15387 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_by_id";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1438, Current, 0, 1, 22107);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1438, Current, 22107);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_id", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (
		WDBG(1438,"wel_gdi_count")
	) {
		RTHOOK(2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		tr2 = RTMS_EX_H("Creating WEL_BITMAP",19,132248912);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(149, "put_string", tr1))(tr1, ur1x);
	}
	RTHOOK(3);
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12710, 1432))(Current, ui4_1x);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(12775, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("not_shared", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(12361, dtype));
		if ((EIF_BOOLEAN) !tb1) {
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
#undef ui4_1
#undef arg1
}

/* {WEL_BITMAP}.make_by_name */
void F1439_15388 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_by_name";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1438, Current, 0, 1, 22108);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1438, Current, 22108);
	RTCC(arg1, 1438, l_feature_name, 1, eif_new_type(229, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("name_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("name_not_empty", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4639, "is_empty", arg1))(arg1)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12711, 1432))(Current, ur1x);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(12775, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("not_shared", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(12361, dtype));
		if ((EIF_BOOLEAN) !tb1) {
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
#undef arg1
}

/* {WEL_BITMAP}.make_compatible */
void F1439_15389 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "make_compatible";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1438, Current, 0, 3, 22109);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1438, Current, 22109);
	RTCC(arg1, 1438, l_feature_name, 1, eif_new_type(1424, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_dc_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_dc_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11645, "exists", arg1))(arg1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("positive_width", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("positive_height", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 12360, 0x40000000, 1); /* item */
	tp1 = *(EIF_POINTER *)(arg1 + RTVA(12360, "item", arg1));
	up1 = tp1;
	ui4_1 = arg2;
	ui4_2 = arg3;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12809, dtype))(Current, up1x, ui4_1x, ui4_2x)).it_p);
	*(EIF_POINTER *)(Current + RTWA(12360, dtype)) = (EIF_POINTER) tp1;
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(12775, dtype))(Current);
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
#undef ui4_2
#undef arg3
#undef arg2
#undef arg1
}

/* {WEL_BITMAP}.make_by_dib */
void F1439_15390 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "make_by_dib";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE up4x = {{0}, SK_POINTER};
#define up4 up4x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_POINTER tp4;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1438, Current, 0, 3, 22110);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1438, Current, 22110);
	RTCC(arg1, 1438, l_feature_name, 1, eif_new_type(1424, 0x01), 0x01);
	RTCC(arg2, 1438, l_feature_name, 2, eif_new_type(1503, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_dc_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_dc_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11645, "exists", arg1))(arg1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(3);
		RTCT("dib_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("dib_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12362, "exists", arg2))(arg2)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(5);
		RTCT("valid_mode", EX_PRE);
		ui4_1 = arg3;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11507, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 12360, 0x40000000, 1); /* item */
	tp1 = *(EIF_POINTER *)(arg1 + RTVA(12360, "item", arg1));
	up1 = tp1;
	tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(13874, "info_header", arg2))(arg2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(6,1);
	tp2 = *(EIF_POINTER *)(tr1 + RTVA(12360, "item", tr1));
	up2 = tp2;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12818, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	tp3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(13863, "item_bits", arg2))(arg2)).it_p);
	up3 = tp3;
	tp4 = *(EIF_POINTER *)(arg2 + RTVA(12360, "item", arg2));
	up4 = tp4;
	ui4_2 = arg3;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12810, dtype))(Current, up1x, up2x, ui4_1x, up3x, up4x, ui4_2x)).it_p);
	*(EIF_POINTER *)(Current + RTWA(12360, dtype)) = (EIF_POINTER) tp1;
	RTHOOK(7);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(12775, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("bitmap_created", EX_POST);
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		tp2 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		tp3 = ((EIF_POINTER) 0);
		if ((EIF_BOOLEAN)(tp1 != tp3)) {
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
	RTLO(5);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef up4
#undef ui4_1
#undef ui4_2
#undef arg3
#undef arg2
#undef arg1
}

/* {WEL_BITMAP}.make_by_bitmap */
void F1439_15391 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_by_bitmap";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1438, Current, 0, 1, 22111);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1438, Current, 22111);
	RTCC(arg1, 1438, l_feature_name, 1, eif_new_type(1438, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_bitmap_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_bitmap_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11645, "exists", arg1))(arg1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 12360, 0x40000000, 1); /* item */
	tp1 = *(EIF_POINTER *)(arg1 + RTVA(12360, "item", arg1));
	up1 = tp1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10749, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12803, "width", arg1))(arg1)).it_i4);
	ui4_2 = ti4_2;
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12804, "height", arg1))(arg1)).it_i4);
	ui4_3 = ti4_3;
	ui4_4 = ((EIF_INTEGER_32) 0L);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12814, dtype))(Current, up1x, ui4_1x, ui4_2x, ui4_3x, ui4_4x)).it_p);
	*(EIF_POINTER *)(Current + RTWA(12360, dtype)) = (EIF_POINTER) tp1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 12361, 0x04000000, 1); /* shared */
	*(EIF_BOOLEAN *)(Current + RTWA(12361, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(5);
	tb1 = '\01';
	tb2 = *(EIF_BOOLEAN *)(arg1 + RTVA(12807, "is_made_by_dib", arg1));
	if (!tb2) {
		tp1 = *(EIF_POINTER *)(arg1 + RTVA(12806, "ppv_bits", arg1));
		tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		tb1 = (EIF_BOOLEAN)(tp1 != tp2);
	}
	if (tb1) {
		RTHOOK(6);
		RTDBGAA(Current, dtype, 12807, 0x04000000, 1); /* is_made_by_dib */
		*(EIF_BOOLEAN *)(Current + RTWA(12807, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTHOOK(7);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(12775, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg1
}

/* {WEL_BITMAP}.make_indirect */
void F1439_15392 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_indirect";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1438, Current, 0, 1, 22112);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1438, Current, 22112);
	RTCC(arg1, 1438, l_feature_name, 1, eif_new_type(1490, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_log_bitmap_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_log_bitmap_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12362, "exists", arg1))(arg1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 12360, 0x40000000, 1); /* item */
	tp1 = *(EIF_POINTER *)(arg1 + RTVA(12360, "item", arg1));
	up1 = tp1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(12815, dtype))(Current, up1x)).it_p);
	*(EIF_POINTER *)(Current + RTWA(12360, dtype)) = (EIF_POINTER) tp1;
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(12775, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {WEL_BITMAP}.make_direct */
void F1439_15393 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "make_direct";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_r
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
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,arg5);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_REF,&arg5);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1438, Current, 1, 5, 22113);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1438, Current, 22113);
	RTCC(arg5, 1438, l_feature_name, 5, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("positive_width", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("positive_height", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("positive_planes", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("positive_bits_per_pixel", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg4 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("data_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg5 != NULL), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("data_count_big_enough", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(arg5 + RTVA(4748, "count", arg5));
		RTTE((EIF_BOOLEAN) (ti4_1 >= (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 * arg2) * arg4) * arg3)) / ((EIF_INTEGER_32) 8L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(7);
	RTDBGAL(Current, 1, 0xF800007F, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(127, 0x01).id);
	ur1 = RTCCL(arg5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1684, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(7,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(8);
	RTDBGAA(Current, dtype, 12360, 0x40000000, 1); /* item */
	ui4_1 = arg1;
	ui4_2 = arg2;
	ui4_3 = arg3;
	ui4_4 = arg4;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1703, "item", loc1))(loc1)).it_p);
	up1 = tp1;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12816, dtype))(Current, ui4_1x, ui4_2x, ui4_3x, ui4_4x, up1x)).it_p);
	*(EIF_POINTER *)(Current + RTWA(12360, dtype)) = (EIF_POINTER) tp1;
	RTHOOK(9);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(12775, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {WEL_BITMAP}.make_dib */
void F1439_15394 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_dib";
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE up4x = {{0}, SK_POINTER};
#define up4 up4x.it_p
	EIF_TYPED_VALUE uu8_1x = {{0}, SK_UINT64};
#define uu8_1 uu8_1x.it_n8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_POINTER, &loc1);
	RTLU(SK_POINTER, &loc2);
	
	RTEAA(l_feature_name, 1438, Current, 2, 1, 22114);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1438, Current, 22114);
	RTCC(arg1, 1438, l_feature_name, 1, eif_new_type(1504, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_header_info_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_header_info_exist", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12362, "exists", arg1))(arg1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 12360, 0x40000000, 1); /* item */
	up1 = loc1;
	tp1 = *(EIF_POINTER *)(arg1 + RTVA(12360, "item", arg1));
	up2 = tp1;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11505, 1305))(Current)).it_i4);
	ui4_1 = ti4_1;
	up3 = (EIF_POINTER *) &(loc2);
	up4 = loc1;
	uu8_1 = (EIF_NATURAL_64) ((EIF_INTEGER_32) 0L);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12817, dtype))(Current, up1x, up2x, ui4_1x, up3x, up4x, uu8_1x)).it_p);
	*(EIF_POINTER *)(Current + RTWA(12360, dtype)) = (EIF_POINTER) tp1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 12806, 0x40000000, 1); /* ppv_bits */
	*(EIF_POINTER *)(Current + RTWA(12806, dtype)) = (EIF_POINTER) loc2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("bitmap_created", EX_POST);
		tp1 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
		tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		if ((EIF_BOOLEAN)(tp1 != tp2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("ppv_bits_assigned", EX_POST);
		tp1 = *(EIF_POINTER *)(Current + RTWA(12806, dtype));
		tp2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		if ((EIF_BOOLEAN)(tp1 != tp2)) {
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
	RTLO(5);
	RTEE;
#undef up1
#undef up2
#undef up3
#undef up4
#undef uu8_1
#undef ui4_1
#undef arg1
}

/* {WEL_BITMAP}.width */
EIF_TYPED_VALUE F1439_15395 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "width";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1438, Current, 0, 0, 22115);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1438, Current, 22115);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11645, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12805, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(13575, "width", tr1))(tr1)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("positive_result", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {WEL_BITMAP}.height */
EIF_TYPED_VALUE F1439_15396 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "height";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1438, Current, 0, 0, 22116);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1438, Current, 22116);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11645, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(12805, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(13576, "height", tr1))(tr1)).it_i4);
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("positive_result", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
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
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
}

/* {WEL_BITMAP}.log_bitmap */
EIF_TYPED_VALUE F1439_15397 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "log_bitmap";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1438, Current, 0, 0, 22117);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1438, Current, 22117);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11645, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0xF80005D2, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(1490, 0x01).id);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(13573, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
}

/* {WEL_BITMAP}.ppv_bits */
EIF_TYPED_VALUE F1439_15398 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_POINTER;
	r.it_p = *(EIF_POINTER *)(Current + RTWA(12806,Dtype(Current)));
	return r;
}


/* {WEL_BITMAP}.is_made_by_dib */
EIF_TYPED_VALUE F1439_15399 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(12807,Dtype(Current)));
	return r;
}


/* {WEL_BITMAP}.set_di_bits */
void F1439_15400 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "set_di_bits";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_r
#define arg5 arg5x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE up3x = {{0}, SK_POINTER};
#define up3 up3x.it_p
	EIF_TYPED_VALUE up4x = {{0}, SK_POINTER};
#define up4 up4x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_POINTER tp1;
	EIF_POINTER tp2;
	EIF_POINTER tp3;
	EIF_POINTER tp4;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,arg4);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1438, Current, 0, 5, 22120);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1438, Current, 22120);
	RTCC(arg1, 1438, l_feature_name, 1, eif_new_type(1424, 0x01), 0x01);
	RTCC(arg4, 1438, l_feature_name, 4, eif_new_type(1503, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(11645, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_dc_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("a_dc_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11645, "exists", arg1))(arg1)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(4);
		RTCT("dib_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg4 != NULL), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("dib_exists", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12362, "exists", arg4))(arg4)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(6);
		RTCT("valid_mode", EX_PRE);
		ui4_1 = arg5;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(11507, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(7);
	tp1 = *(EIF_POINTER *)(arg1 + RTVA(12360, "item", arg1));
	up1 = tp1;
	tp2 = *(EIF_POINTER *)(Current + RTWA(12360, dtype));
	up2 = tp2;
	ui4_1 = arg2;
	ui4_2 = arg3;
	tp3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(13863, "item_bits", arg4))(arg4)).it_p);
	up3 = tp3;
	tp4 = *(EIF_POINTER *)(arg4 + RTVA(12360, "item", arg4));
	up4 = tp4;
	ui4_3 = arg5;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12811, dtype))(Current, up1x, up2x, ui4_1x, ui4_2x, up3x, up4x, ui4_3x);
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
#undef up3
#undef up4
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {WEL_BITMAP}.load_item */
void F1439_15401 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "load_item";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_POINTER tp1;
	RTCDT;
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
	
	RTEAA(l_feature_name, 1438, Current, 0, 2, 22121);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1438, Current, 22121);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("id_not_void", EX_PRE);
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		RTTE((EIF_BOOLEAN)(arg2 != tp1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 12360, 0x40000000, 1); /* item */
	up1 = arg1;
	up2 = arg2;
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(12813, dtype))(Current, up1x, up2x)).it_p);
	*(EIF_POINTER *)(Current + RTWA(12360, dtype)) = (EIF_POINTER) tp1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef up2
#undef arg2
#undef arg1
}

/* {WEL_BITMAP}.cwin_create_compatible_bitmap */
EIF_TYPED_VALUE F1439_15402 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "cwin_create_compatible_bitmap";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1438, Current, 0, 3, 22122);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1438, Current, 22122);
	RTIV(Current, RTAL);
	Result = (EIF_POINTER) CreateCompatibleBitmap(((HDC) arg1), ((int) arg2), ((int) arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg3
#undef arg2
#undef arg1
}

/* {WEL_BITMAP}.cwin_create_di_bitmap */
EIF_TYPED_VALUE F1439_15403 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x)
{
	GTCX
	char *l_feature_name = "cwin_create_di_bitmap";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_p
#define arg5 arg5x.it_p
#define arg6 arg6x.it_i4
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_i4 = * (EIF_INTEGER_32 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_p = * (EIF_POINTER *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_p = * (EIF_POINTER *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_POINTER,&arg4);
	RTLU(SK_POINTER,&arg5);
	RTLU(SK_INT32,&arg6);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1438, Current, 0, 6, 22123);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1438, Current, 22123);
	RTIV(Current, RTAL);
	Result = (EIF_POINTER) CreateDIBitmap(((HDC) arg1), ((BITMAPINFOHEADER *) arg2), ((DWORD) arg3), ((void *) arg4), ((BITMAPINFO *) arg5), ((UINT) arg6));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(8);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {WEL_BITMAP}.cwin_set_di_bits */
void F1439_15404 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
{
	GTCX
	char *l_feature_name = "cwin_set_di_bits";
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
	
	RTEAA(l_feature_name, 1438, Current, 0, 7, 22124);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1438, Current, 22124);
	RTIV(Current, RTAL);
	SetDIBits(((HDC) arg1), ((HBITMAP) arg2), ((UINT) arg3), ((UINT) arg4), ((void *) arg5), ((BITMAPINFO *) arg6), ((UINT) arg7));
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

/* {WEL_BITMAP}.cwin_get_di_bits */
void F1439_15405 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
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
	
	RTEAA(l_feature_name, 1438, Current, 0, 7, 22125);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1438, Current, 22125);
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

/* {WEL_BITMAP}.cwin_load_bitmap */
EIF_TYPED_VALUE F1439_15406 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "cwin_load_bitmap";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1438, Current, 0, 2, 22126);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1438, Current, 22126);
	RTIV(Current, RTAL);
	Result = (EIF_POINTER) LoadBitmap(((HINSTANCE) arg1), ((LPCTSTR) arg2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg2
#undef arg1
}

/* {WEL_BITMAP}.cwin_copy_image */
EIF_TYPED_VALUE F1439_15407 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "cwin_copy_image";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1438, Current, 0, 5, 22102);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1438, Current, 22102);
	RTIV(Current, RTAL);
	Result = (EIF_POINTER) CopyImage(((HANDLE) arg1), ((UINT) arg2), ((int) arg3), ((int) arg4), ((UINT) arg5));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {WEL_BITMAP}.cwin_create_bitmap_indirect */
EIF_TYPED_VALUE F1439_15408 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "cwin_create_bitmap_indirect";
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
	
	RTEAA(l_feature_name, 1438, Current, 0, 1, 22103);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1438, Current, 22103);
	RTIV(Current, RTAL);
	Result = (EIF_POINTER) CreateBitmapIndirect(((BITMAP *) arg1));
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

/* {WEL_BITMAP}.cwin_create_bitmap */
EIF_TYPED_VALUE F1439_15409 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x)
{
	GTCX
	char *l_feature_name = "cwin_create_bitmap";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_p
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_p = * (EIF_POINTER *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_POINTER,&arg5);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1438, Current, 0, 5, 22104);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1438, Current, 22104);
	RTIV(Current, RTAL);
	Result = (EIF_POINTER) CreateBitmap(((int) arg1), ((int) arg2), ((UINT) arg3), ((UINT) arg4), ((CONST VOID *) arg5));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {WEL_BITMAP}.cwin_create_dib_section */
EIF_TYPED_VALUE F1439_15410 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x)
{
	GTCX
	char *l_feature_name = "cwin_create_dib_section";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_p
#define arg5 arg5x.it_p
#define arg6 arg6x.it_n8
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_n8 = * (EIF_NATURAL_64 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_p = * (EIF_POINTER *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_p = * (EIF_POINTER* *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_POINTER,&arg4);
	RTLU(SK_POINTER,&arg5);
	RTLU(SK_UINT64,&arg6);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1438, Current, 0, 6, 22105);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1438, Current, 22105);
	RTIV(Current, RTAL);
	Result = inline_F1439_15410 ((EIF_POINTER) arg1, (EIF_POINTER) arg2, (EIF_INTEGER_32) arg3, (EIF_POINTER*) arg4, (EIF_POINTER) arg5, (EIF_NATURAL_64) arg6);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(8);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {WEL_BITMAP}.cbm_init */
EIF_TYPED_VALUE F1439_15411 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "cbm_init";
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
	
	RTEAA(l_feature_name, 1438, Current, 0, 0, 22106);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1438, Current, 22106);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) CBM_INIT;
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

void EIF_Minit1439 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

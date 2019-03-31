/*
 * Code for class WEL_CLIPBOARD
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1150_11517(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1150_11518(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1150_11519(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1150_11520(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1150_11521(EIF_REFERENCE);
extern void F1150_11522(EIF_REFERENCE);
extern void F1150_11523(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1150_11524(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1150_11525(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1150_11526(EIF_REFERENCE);
extern void F1150_11527(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1150_11528(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1150_11529(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1150_11530(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1150_11531(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1150_11532(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1150_11533(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit1150(void);

#ifdef __cplusplus
}
#endif

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

/* {WEL_CLIPBOARD}.default_create */
void F1150_11517 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_create";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1149, Current, 0, 0, 17831);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1149, Current, 17831);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 9294, 0xF80000EE, 0); /* last_string */
	tr1 = RTLNSMART(RTWCT(9294, Dtype(Current), Dftype(Current)).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4623, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(9294, Dtype(Current))) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {WEL_CLIPBOARD}.clipboard_open */
EIF_TYPED_VALUE F1150_11518 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(9293,Dtype(Current)));
	return r;
}


/* {WEL_CLIPBOARD}.last_string */
EIF_TYPED_VALUE F1150_11519 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(9294,Dtype(Current)));
	return r;
}


/* {WEL_CLIPBOARD}.is_clipboard_format_available */
EIF_TYPED_VALUE F1150_11520 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_clipboard_format_available";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1149, Current, 0, 1, 17834);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1149, Current, 17834);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ui4_1 = arg1;
	Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9308, Dtype(Current)))(Current, ui4_1x)).it_b);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {WEL_CLIPBOARD}.retrieve_clipboard_text */
void F1150_11521 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "retrieve_clipboard_text";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1149, Current, 3, 0, 17835);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1149, Current, 17835);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("clipboard_open", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(9293, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("text_available", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7521, 1027))(Current)).it_i4);
		ui4_1 = ti4_1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9295, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7521, 1027))(Current)).it_i4);
	ui4_1 = ti4_1;
	loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9306, dtype))(Current, ui4_1x)).it_p);
	RTHOOK(4);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	if ((EIF_BOOLEAN)(loc2 != tp1)) {
		RTHOOK(5);
		RTDBGAL(Current, 1, 0xF800058C, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(1420, 0x01).id);
		up1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12426, Dtype(tr1)))(tr1, up1x);
		RTNHOOK(5,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(6);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12441, "retrieve_string", loc1))(loc1);
		RTHOOK(7);
		RTDBGAL(Current, 3, 0xF80000EE, 0, 0); /* loc3 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12440, "last_string", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(8);
	if ((EIF_BOOLEAN)(loc3 == NULL)) {
		RTHOOK(9);
		RTDBGAA(Current, dtype, 9294, 0xF80000EE, 0); /* last_string */
		tr1 = RTLNSMART(RTWCT(9294, dtype, Dftype(Current)).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4623, Dtype(tr1)))(tr1);
		RTNHOOK(9,1);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(9294, dtype)) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(10);
		RTDBGAA(Current, dtype, 9294, 0xF80000EE, 0); /* last_string */
		tr1 = RTCCL(loc3);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(9294, dtype)) = (EIF_REFERENCE) tr1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("last_string_not_void", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9294, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
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
	RTLO(5);
	RTEE;
#undef up1
#undef ui4_1
}

/* {WEL_CLIPBOARD}.retrieve_clipboard_text_discarding_carriage_return */
void F1150_11522 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "retrieve_clipboard_text_discarding_carriage_return";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_POINTER, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1149, Current, 3, 0, 17836);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1149, Current, 17836);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("clipboard_open", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(9293, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("text_available", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7521, 1027))(Current)).it_i4);
		ui4_1 = ti4_1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9295, dtype))(Current, ui4_1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(Current, 2, 0x40000000, 1, 0); /* loc2 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7521, 1027))(Current)).it_i4);
	ui4_1 = ti4_1;
	loc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9306, dtype))(Current, ui4_1x)).it_p);
	RTHOOK(4);
	tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
	if ((EIF_BOOLEAN)(loc2 != tp1)) {
		RTHOOK(5);
		RTDBGAL(Current, 1, 0xF800058C, 0, 0); /* loc1 */
		tr1 = RTLN(eif_new_type(1420, 0x01).id);
		up1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12426, Dtype(tr1)))(tr1, up1x);
		RTNHOOK(5,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(6);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12442, "retrieve_string_discarding_carriage_return", loc1))(loc1);
		RTHOOK(7);
		RTDBGAL(Current, 3, 0xF80000EE, 0, 0); /* loc3 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12440, "last_string", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(8);
	if ((EIF_BOOLEAN)(loc3 == NULL)) {
		RTHOOK(9);
		RTDBGAA(Current, dtype, 9294, 0xF80000EE, 0); /* last_string */
		tr1 = RTLNSMART(RTWCT(9294, dtype, Dftype(Current)).id);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4623, Dtype(tr1)))(tr1);
		RTNHOOK(9,1);
		tr1 = RTCCL(tr1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(9294, dtype)) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(10);
		RTDBGAA(Current, dtype, 9294, 0xF80000EE, 0); /* last_string */
		tr1 = RTCCL(loc3);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(9294, dtype)) = (EIF_REFERENCE) tr1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("last_string_not_void", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9294, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
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
	RTLO(5);
	RTEE;
#undef up1
#undef ui4_1
}

/* {WEL_CLIPBOARD}.set_clipboard_text */
void F1150_11523 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_clipboard_text";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
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
	
	RTEAA(l_feature_name, 1149, Current, 1, 1, 17837);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1149, Current, 17837);
	RTCC(arg1, 1149, l_feature_name, 1, eif_new_type(229, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("clipboard_open", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(9293, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_text_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF800058C, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1420, 0x01).id);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12438, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7521, 1027))(Current)).it_i4);
	ui4_1 = ti4_1;
	tp1 = *(EIF_POINTER *)(loc1 + RTVA(12428, "handle", loc1));
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(9307, dtype))(Current, ui4_1x, up1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {WEL_CLIPBOARD}.set_clipboard_text_with_newline_conversion */
void F1150_11524 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_clipboard_text_with_newline_conversion";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_POINTER tp1;
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
	
	RTEAA(l_feature_name, 1149, Current, 1, 1, 17838);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1149, Current, 17838);
	RTCC(arg1, 1149, l_feature_name, 1, eif_new_type(229, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("clipboard_open", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(9293, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_text_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF800058C, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1420, 0x01).id);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12439, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7521, 1027))(Current)).it_i4);
	ui4_1 = ti4_1;
	tp1 = *(EIF_POINTER *)(loc1 + RTVA(12428, "handle", loc1));
	up1 = tp1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(9307, dtype))(Current, ui4_1x, up1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {WEL_CLIPBOARD}.open_clipboard */
void F1150_11525 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "open_clipboard";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_POINTER tp1;
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
	
	RTEAA(l_feature_name, 1149, Current, 0, 1, 17839);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1149, Current, 17839);
	if (arg1) {
		RTCC(arg1, 1149, l_feature_name, 1, eif_new_type(1877, 0x00), 0x00);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("window_exists", EX_PRE);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(arg1 != NULL)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(12362, "exists", arg1))(arg1)).it_b);
			tb1 = tb2;
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(3);
		RTDBGAA(Current, dtype, 9293, 0x04000000, 1); /* clipboard_open */
		tp1 = *(EIF_POINTER *)(arg1 + RTVA(12360, "item", arg1));
		up1 = tp1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9304, dtype))(Current, up1x)).it_b);
		*(EIF_BOOLEAN *)(Current + RTWA(9293, dtype)) = (EIF_BOOLEAN) tb1;
	} else {
		RTHOOK(4);
		RTDBGAA(Current, dtype, 9293, 0x04000000, 1); /* clipboard_open */
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		up1 = tp1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(9304, dtype))(Current, up1x)).it_b);
		*(EIF_BOOLEAN *)(Current + RTWA(9293, dtype)) = (EIF_BOOLEAN) tb1;
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
#undef arg1
}

/* {WEL_CLIPBOARD}.close_clipboard */
void F1150_11526 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "close_clipboard";
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
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
	RTLU(SK_BOOL, &loc1);
	
	RTEAA(l_feature_name, 1149, Current, 1, 0, 17840);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1149, Current, 17840);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("clipboard_open", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(9293, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x04000000, 1, 0); /* loc1 */
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9305, dtype))(Current)).it_b);
	if (RTAL & CK_CHECK) {
		RTHOOK(3);
		RTCT("clipboard_closed", EX_CHECK);
		if (loc1) {
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
}

/* {WEL_CLIPBOARD}.empty_clipboard */
void F1150_11527 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "empty_clipboard";
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
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
	RTLU(SK_BOOL, &loc1);
	
	RTEAA(l_feature_name, 1149, Current, 1, 0, 17841);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1149, Current, 17841);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("clipboard_open", EX_PRE);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(9293, dtype));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x04000000, 1, 0); /* loc1 */
	loc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(9303, dtype))(Current)).it_b);
	if (RTAL & CK_CHECK) {
		RTHOOK(3);
		RTCT("clipboard_emptied", EX_CHECK);
		if (loc1) {
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
}

/* {WEL_CLIPBOARD}.cwel_empty_clipboard */
EIF_TYPED_VALUE F1150_11528 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "cwel_empty_clipboard";
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1149, Current, 0, 0, 17842);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1149, Current, 17842);
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(EmptyClipboard());
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {WEL_CLIPBOARD}.cwel_open_clipboard */
EIF_TYPED_VALUE F1150_11529 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "cwel_open_clipboard";
	RTEX;
#define arg1 arg1x.it_p
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1149, Current, 0, 1, 17843);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1149, Current, 17843);
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(OpenClipboard((HWND) arg1));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {WEL_CLIPBOARD}.cwel_close_clipboard */
EIF_TYPED_VALUE F1150_11530 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "cwel_close_clipboard";
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1149, Current, 0, 0, 17844);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1149, Current, 17844);
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(CloseClipboard());
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {WEL_CLIPBOARD}.cwel_get_clipboard_data */
EIF_TYPED_VALUE F1150_11531 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "cwel_get_clipboard_data";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1149, Current, 0, 1, 17845);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1149, Current, 17845);
	RTIV(Current, RTAL);Result = (EIF_POINTER) GetClipboardData((UINT) arg1);
	
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

/* {WEL_CLIPBOARD}.cwel_set_clipboard_data */
void F1150_11532 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "cwel_set_clipboard_data";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1149, Current, 0, 2, 17829);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1149, Current, 17829);
	RTIV(Current, RTAL);SetClipboardData((UINT) arg1, (HANDLE) arg2);
	
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

/* {WEL_CLIPBOARD}.cwel_is_clipboard_format_available */
EIF_TYPED_VALUE F1150_11533 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "cwel_is_clipboard_format_available";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1149, Current, 0, 1, 17830);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1149, Current, 17830);
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(IsClipboardFormatAvailable((UINT) arg1));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

void EIF_Minit1150 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

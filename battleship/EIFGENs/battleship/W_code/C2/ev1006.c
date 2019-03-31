/*
 * Code for class EV_CHARACTER_FORMAT_EFFECTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1006_9194(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1006_9195(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1006_9196(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1006_9197(EIF_REFERENCE);
extern void F1006_9198(EIF_REFERENCE);
extern void F1006_9199(EIF_REFERENCE);
extern void F1006_9200(EIF_REFERENCE);
extern void F1006_9201(EIF_REFERENCE);
extern void F1006_9202(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit1006(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_CHARACTER_FORMAT_EFFECTS}.is_striked_out */
EIF_TYPED_VALUE F1006_9194 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(6980,Dtype(Current)));
	return r;
}


/* {EV_CHARACTER_FORMAT_EFFECTS}.is_underlined */
EIF_TYPED_VALUE F1006_9195 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(6981,Dtype(Current)));
	return r;
}


/* {EV_CHARACTER_FORMAT_EFFECTS}.vertical_offset */
EIF_TYPED_VALUE F1006_9196 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(6982,Dtype(Current)));
	return r;
}


/* {EV_CHARACTER_FORMAT_EFFECTS}.is_in_default_state */
EIF_TYPED_VALUE F1006_9197 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_in_default_state";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
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
	
	RTEAA(l_feature_name, 1005, Current, 0, 0, 15487);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1005, Current, 15487);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	Result = *(EIF_BOOLEAN *)(Current + RTWA(6980, dtype));
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6981, dtype));
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6982, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) !Result && (EIF_BOOLEAN) !tb1) && (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {EV_CHARACTER_FORMAT_EFFECTS}.enable_striked_out */
void F1006_9198 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enable_striked_out";
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
	
	RTEAA(l_feature_name, 1005, Current, 0, 0, 15488);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1005, Current, 15488);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6980, 0x04000000, 1); /* is_striked_out */
	*(EIF_BOOLEAN *)(Current + RTWA(6980, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_striked_out", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6980, dtype));
		if (tb1) {
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
}

/* {EV_CHARACTER_FORMAT_EFFECTS}.disable_striked_out */
void F1006_9199 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "disable_striked_out";
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
	
	RTEAA(l_feature_name, 1005, Current, 0, 0, 15489);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1005, Current, 15489);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6980, 0x04000000, 1); /* is_striked_out */
	*(EIF_BOOLEAN *)(Current + RTWA(6980, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("not_striked_out", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6980, dtype));
		if ((EIF_BOOLEAN) !tb1) {
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
}

/* {EV_CHARACTER_FORMAT_EFFECTS}.enable_underlined */
void F1006_9200 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enable_underlined";
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
	
	RTEAA(l_feature_name, 1005, Current, 0, 0, 15490);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1005, Current, 15490);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6981, 0x04000000, 1); /* is_underlined */
	*(EIF_BOOLEAN *)(Current + RTWA(6981, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_underlined", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6981, dtype));
		if (tb1) {
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
}

/* {EV_CHARACTER_FORMAT_EFFECTS}.disable_underlined */
void F1006_9201 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "disable_underlined";
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
	
	RTEAA(l_feature_name, 1005, Current, 0, 0, 15491);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1005, Current, 15491);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6981, 0x04000000, 1); /* is_underlined */
	*(EIF_BOOLEAN *)(Current + RTWA(6981, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("not_underlined", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(6981, dtype));
		if ((EIF_BOOLEAN) !tb1) {
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
}

/* {EV_CHARACTER_FORMAT_EFFECTS}.set_vertical_offset */
void F1006_9202 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_vertical_offset";
	RTEX;
#define arg1 arg1x.it_i4
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
	
	RTEAA(l_feature_name, 1005, Current, 0, 1, 15492);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1005, Current, 15492);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6982, 0x10000000, 1); /* vertical_offset */
	*(EIF_INTEGER_32 *)(Current + RTWA(6982, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("vertical_offset_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(6982, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
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
	RTLO(3);
	RTEE;
#undef arg1
}

void EIF_Minit1006 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

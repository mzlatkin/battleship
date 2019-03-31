/*
 * Code for class EV_POPUP_WINDOW_I
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPED_VALUE F1735_19782_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1735_19782(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1735_19783(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1735_19784(EIF_REFERENCE);
extern void F1735_19785(EIF_REFERENCE);
extern void F1735_19786(EIF_REFERENCE);
extern void EIF_Minit1735(void);

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

/* {EV_POPUP_WINDOW_I}.interface */
static EIF_TYPED_VALUE F1735_19782_body (EIF_REFERENCE Current)
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
	
	RTEAA(l_feature_name, 1734, Current, 0, 0, 26232);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1734, Current, 26232);
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

EIF_TYPED_VALUE F1735_19782 (EIF_REFERENCE Current)
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
			r.it_r = (F1735_19782_body (Current)).it_r;
			*(EIF_REFERENCE *)(Current + RTWA(15734,Dtype(Current))) = r.it_r;
			RTAR(Current, r.it_r);
			RTLE;
		}
	}
	return r;
}


/* {EV_POPUP_WINDOW_I}.is_disconnected_from_window_manager */
EIF_TYPED_VALUE F1735_19783 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(16529,Dtype(Current)));
	return r;
}


/* {EV_POPUP_WINDOW_I}.has_shadow */
EIF_TYPED_VALUE F1735_19784 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(16530,Dtype(Current)));
	return r;
}


/* {EV_POPUP_WINDOW_I}.disconnect_from_window_manager */
void F1735_19785 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "disconnect_from_window_manager";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1734, Current, 0, 0, 26235);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1734, Current, 26235);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 16529, 0x04000000, 1); /* is_disconnected_from_window_manager */
	*(EIF_BOOLEAN *)(Current + RTWA(16529, Dtype(Current))) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_POPUP_WINDOW_I}.initialize_with_shadow */
void F1735_19786 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "initialize_with_shadow";
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
	
	RTEAA(l_feature_name, 1734, Current, 0, 0, 26236);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1734, Current, 26236);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 16530, 0x04000000, 1); /* has_shadow */
	*(EIF_BOOLEAN *)(Current + RTWA(16530, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(15729, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

void EIF_Minit1735 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

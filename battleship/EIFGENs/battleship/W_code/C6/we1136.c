/*
 * Code for class WEL_TPM_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1136_11206(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1136_11207(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1136_11208(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1136_11209(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1136_11210(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1136_11211(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1136_11212(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1136_11213(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1136_11214(EIF_REFERENCE);
extern void EIF_Minit1136(void);

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

/* {WEL_TPM_CONSTANTS}.tpm_leftbutton */
EIF_TYPED_VALUE F1136_11206 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tpm_leftbutton";
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
	
	RTEAA(l_feature_name, 1135, Current, 0, 0, 17512);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1135, Current, 17512);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TPM_LEFTBUTTON;
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

/* {WEL_TPM_CONSTANTS}.tpm_rightbutton */
EIF_TYPED_VALUE F1136_11207 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tpm_rightbutton";
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
	
	RTEAA(l_feature_name, 1135, Current, 0, 0, 17513);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1135, Current, 17513);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TPM_RIGHTBUTTON;
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

/* {WEL_TPM_CONSTANTS}.tpm_leftalign */
EIF_TYPED_VALUE F1136_11208 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tpm_leftalign";
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
	
	RTEAA(l_feature_name, 1135, Current, 0, 0, 17514);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1135, Current, 17514);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TPM_LEFTALIGN;
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

/* {WEL_TPM_CONSTANTS}.tpm_centeralign */
EIF_TYPED_VALUE F1136_11209 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tpm_centeralign";
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
	
	RTEAA(l_feature_name, 1135, Current, 0, 0, 17515);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1135, Current, 17515);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TPM_CENTERALIGN;
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

/* {WEL_TPM_CONSTANTS}.tpm_rightalign */
EIF_TYPED_VALUE F1136_11210 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tpm_rightalign";
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
	
	RTEAA(l_feature_name, 1135, Current, 0, 0, 17516);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1135, Current, 17516);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TPM_RIGHTALIGN;
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

/* {WEL_TPM_CONSTANTS}.tpm_bottomalign */
EIF_TYPED_VALUE F1136_11211 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tpm_bottomalign";
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
	
	RTEAA(l_feature_name, 1135, Current, 0, 0, 17517);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1135, Current, 17517);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TPM_BOTTOMALIGN;
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

/* {WEL_TPM_CONSTANTS}.tpm_topalign */
EIF_TYPED_VALUE F1136_11212 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tpm_topalign";
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
	
	RTEAA(l_feature_name, 1135, Current, 0, 0, 17518);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1135, Current, 17518);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TPM_TOPALIGN;
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

/* {WEL_TPM_CONSTANTS}.tpm_vcenteralign */
EIF_TYPED_VALUE F1136_11213 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tpm_vcenteralign";
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
	
	RTEAA(l_feature_name, 1135, Current, 0, 0, 17519);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1135, Current, 17519);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TPM_VCENTERALIGN;
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

/* {WEL_TPM_CONSTANTS}.tpm_returncmd */
EIF_TYPED_VALUE F1136_11214 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tpm_returncmd";
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
	
	RTEAA(l_feature_name, 1135, Current, 0, 0, 17520);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1135, Current, 17520);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TPM_RETURNCMD;
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

void EIF_Minit1136 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

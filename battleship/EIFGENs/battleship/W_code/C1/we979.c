/*
 * Code for class WEL_GDIP_COMBINE_MODE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F979_8875(EIF_REFERENCE);
extern EIF_TYPED_VALUE F979_8876(EIF_REFERENCE);
extern EIF_TYPED_VALUE F979_8877(EIF_REFERENCE);
extern EIF_TYPED_VALUE F979_8878(EIF_REFERENCE);
extern EIF_TYPED_VALUE F979_8879(EIF_REFERENCE);
extern EIF_TYPED_VALUE F979_8880(EIF_REFERENCE);
extern EIF_TYPED_VALUE F979_8881(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit979(void);

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

/* {WEL_GDIP_COMBINE_MODE}.replace */
EIF_TYPED_VALUE F979_8875 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	return r;
}

/* {WEL_GDIP_COMBINE_MODE}.intersect */
EIF_TYPED_VALUE F979_8876 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {WEL_GDIP_COMBINE_MODE}.union */
EIF_TYPED_VALUE F979_8877 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

/* {WEL_GDIP_COMBINE_MODE}.xor_mode */
EIF_TYPED_VALUE F979_8878 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	return r;
}

/* {WEL_GDIP_COMBINE_MODE}.exclude */
EIF_TYPED_VALUE F979_8879 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	return r;
}

/* {WEL_GDIP_COMBINE_MODE}.complement */
EIF_TYPED_VALUE F979_8880 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	return r;
}

/* {WEL_GDIP_COMBINE_MODE}.is_valid */
EIF_TYPED_VALUE F979_8881 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_valid";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	EIF_INTEGER_32 ti4_5;
	EIF_INTEGER_32 ti4_6;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
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
	
	RTEAA(l_feature_name, 978, Current, 0, 1, 15168);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(978, Current, 15168);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6663, dtype))(Current)).it_i4);
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6664, dtype))(Current)).it_i4);
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6665, dtype))(Current)).it_i4);
	ti4_4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6666, dtype))(Current)).it_i4);
	ti4_5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6667, dtype))(Current)).it_i4);
	ti4_6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(6668, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == ti4_1) || (EIF_BOOLEAN)(arg1 == ti4_2)) || (EIF_BOOLEAN)(arg1 == ti4_3)) || (EIF_BOOLEAN)(arg1 == ti4_4)) || (EIF_BOOLEAN)(arg1 == ti4_5)) || (EIF_BOOLEAN)(arg1 == ti4_6));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

void EIF_Minit979 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

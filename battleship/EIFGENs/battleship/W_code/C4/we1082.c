/*
 * Code for class WEL_UDN_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1082_10461(EIF_REFERENCE);
extern void EIF_Minit1082(void);

#ifdef __cplusplus
}
#endif

#include "cctrl.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_UDN_CONSTANTS}.udn_deltapos */
EIF_TYPED_VALUE F1082_10461 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "udn_deltapos";
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
	
	RTEAA(l_feature_name, 1081, Current, 0, 0, 16791);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1081, Current, 16791);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) UDN_DELTAPOS;
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

void EIF_Minit1082 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

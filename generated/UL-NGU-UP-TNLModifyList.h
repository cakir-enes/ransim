/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_UL_NGU_UP_TNLModifyList_H_
#define	_UL_NGU_UP_TNLModifyList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UL_NGU_UP_TNLModifyItem;

/* UL-NGU-UP-TNLModifyList */
typedef struct UL_NGU_UP_TNLModifyList {
	A_SEQUENCE_OF(struct UL_NGU_UP_TNLModifyItem) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_NGU_UP_TNLModifyList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_NGU_UP_TNLModifyList;
extern asn_SET_OF_specifics_t asn_SPC_UL_NGU_UP_TNLModifyList_specs_1;
extern asn_TYPE_member_t asn_MBR_UL_NGU_UP_TNLModifyList_1[1];
extern asn_per_constraints_t asn_PER_type_UL_NGU_UP_TNLModifyList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UL-NGU-UP-TNLModifyItem.h"

#endif	/* _UL_NGU_UP_TNLModifyList_H_ */
#include <asn_internal.h>

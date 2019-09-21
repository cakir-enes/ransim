/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_GNB_ID_H_
#define	_GNB_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include "ProtocolIE-SingleContainer.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum GNB_ID_PR {
	GNB_ID_PR_NOTHING,	/* No components present */
	GNB_ID_PR_gNB_ID,
	GNB_ID_PR_choice_Extensions
} GNB_ID_PR;

/* GNB-ID */
typedef struct GNB_ID {
	GNB_ID_PR present;
	union GNB_ID_u {
		BIT_STRING_t	 gNB_ID;
		ProtocolIE_SingleContainer_128P9_t	 choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GNB_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GNB_ID;
extern asn_CHOICE_specifics_t asn_SPC_GNB_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_GNB_ID_1[2];
extern asn_per_constraints_t asn_PER_type_GNB_ID_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _GNB_ID_H_ */
#include <asn_internal.h>

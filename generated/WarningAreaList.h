/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_WarningAreaList_H_
#define	_WarningAreaList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "EUTRA-CGIListForWarning.h"
#include "NR-CGIListForWarning.h"
#include "TAIListForWarning.h"
#include "EmergencyAreaIDList.h"
#include "ProtocolIE-SingleContainer.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum WarningAreaList_PR {
	WarningAreaList_PR_NOTHING,	/* No components present */
	WarningAreaList_PR_eUTRA_CGIListForWarning,
	WarningAreaList_PR_nR_CGIListForWarning,
	WarningAreaList_PR_tAIListForWarning,
	WarningAreaList_PR_emergencyAreaIDList,
	WarningAreaList_PR_choice_Extensions
} WarningAreaList_PR;

/* WarningAreaList */
typedef struct WarningAreaList {
	WarningAreaList_PR present;
	union WarningAreaList_u {
		EUTRA_CGIListForWarning_t	 eUTRA_CGIListForWarning;
		NR_CGIListForWarning_t	 nR_CGIListForWarning;
		TAIListForWarning_t	 tAIListForWarning;
		EmergencyAreaIDList_t	 emergencyAreaIDList;
		ProtocolIE_SingleContainer_128P25_t	 choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} WarningAreaList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_WarningAreaList;
extern asn_CHOICE_specifics_t asn_SPC_WarningAreaList_specs_1;
extern asn_TYPE_member_t asn_MBR_WarningAreaList_1[5];
extern asn_per_constraints_t asn_PER_type_WarningAreaList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _WarningAreaList_H_ */
#include <asn_internal.h>

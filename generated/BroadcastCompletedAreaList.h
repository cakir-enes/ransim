/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_BroadcastCompletedAreaList_H_
#define	_BroadcastCompletedAreaList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CellIDBroadcastEUTRA.h"
#include "TAIBroadcastEUTRA.h"
#include "EmergencyAreaIDBroadcastEUTRA.h"
#include "CellIDBroadcastNR.h"
#include "TAIBroadcastNR.h"
#include "EmergencyAreaIDBroadcastNR.h"
#include "ProtocolIE-SingleContainer.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum BroadcastCompletedAreaList_PR {
	BroadcastCompletedAreaList_PR_NOTHING,	/* No components present */
	BroadcastCompletedAreaList_PR_cellIDBroadcastEUTRA,
	BroadcastCompletedAreaList_PR_tAIBroadcastEUTRA,
	BroadcastCompletedAreaList_PR_emergencyAreaIDBroadcastEUTRA,
	BroadcastCompletedAreaList_PR_cellIDBroadcastNR,
	BroadcastCompletedAreaList_PR_tAIBroadcastNR,
	BroadcastCompletedAreaList_PR_emergencyAreaIDBroadcastNR,
	BroadcastCompletedAreaList_PR_choice_Extensions
} BroadcastCompletedAreaList_PR;

/* BroadcastCompletedAreaList */
typedef struct BroadcastCompletedAreaList {
	BroadcastCompletedAreaList_PR present;
	union BroadcastCompletedAreaList_u {
		CellIDBroadcastEUTRA_t	 cellIDBroadcastEUTRA;
		TAIBroadcastEUTRA_t	 tAIBroadcastEUTRA;
		EmergencyAreaIDBroadcastEUTRA_t	 emergencyAreaIDBroadcastEUTRA;
		CellIDBroadcastNR_t	 cellIDBroadcastNR;
		TAIBroadcastNR_t	 tAIBroadcastNR;
		EmergencyAreaIDBroadcastNR_t	 emergencyAreaIDBroadcastNR;
		ProtocolIE_SingleContainer_128P2_t	 choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BroadcastCompletedAreaList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BroadcastCompletedAreaList;
extern asn_CHOICE_specifics_t asn_SPC_BroadcastCompletedAreaList_specs_1;
extern asn_TYPE_member_t asn_MBR_BroadcastCompletedAreaList_1[7];
extern asn_per_constraints_t asn_PER_type_BroadcastCompletedAreaList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _BroadcastCompletedAreaList_H_ */
#include <asn_internal.h>

/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_UserLocationInformation_H_
#define	_UserLocationInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UserLocationInformationEUTRA.h"
#include "UserLocationInformationNR.h"
#include "UserLocationInformationN3IWF.h"
#include "ProtocolIE-SingleContainer.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UserLocationInformation_PR {
	UserLocationInformation_PR_NOTHING,	/* No components present */
	UserLocationInformation_PR_userLocationInformationEUTRA,
	UserLocationInformation_PR_userLocationInformationNR,
	UserLocationInformation_PR_userLocationInformationN3IWF,
	UserLocationInformation_PR_choice_Extensions
} UserLocationInformation_PR;

/* UserLocationInformation */
typedef struct UserLocationInformation {
	UserLocationInformation_PR present;
	union UserLocationInformation_u {
		UserLocationInformationEUTRA_t	 userLocationInformationEUTRA;
		UserLocationInformationNR_t	 userLocationInformationNR;
		UserLocationInformationN3IWF_t	 userLocationInformationN3IWF;
		ProtocolIE_SingleContainer_128P24_t	 choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UserLocationInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UserLocationInformation;
extern asn_CHOICE_specifics_t asn_SPC_UserLocationInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_UserLocationInformation_1[4];
extern asn_per_constraints_t asn_PER_type_UserLocationInformation_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _UserLocationInformation_H_ */
#include <asn_internal.h>

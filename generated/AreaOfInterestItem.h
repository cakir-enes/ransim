/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_AreaOfInterestItem_H_
#define	_AreaOfInterestItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AreaOfInterest.h"
#include "LocationReportingReferenceID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* AreaOfInterestItem */
typedef struct AreaOfInterestItem {
	AreaOfInterest_t	 areaOfInterest;
	LocationReportingReferenceID_t	 locationReportingReferenceID;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AreaOfInterestItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AreaOfInterestItem;
extern asn_SEQUENCE_specifics_t asn_SPC_AreaOfInterestItem_specs_1;
extern asn_TYPE_member_t asn_MBR_AreaOfInterestItem_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProtocolExtensionContainer.h"

#endif	/* _AreaOfInterestItem_H_ */
#include <asn_internal.h>
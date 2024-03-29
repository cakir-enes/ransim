/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_ServiceAreaInformation_Item_H_
#define	_ServiceAreaInformation_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PLMNIdentity.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct AllowedTACs;
struct NotAllowedTACs;
struct ProtocolExtensionContainer;

/* ServiceAreaInformation-Item */
typedef struct ServiceAreaInformation_Item {
	PLMNIdentity_t	 pLMNIdentity;
	struct AllowedTACs	*allowedTACs;	/* OPTIONAL */
	struct NotAllowedTACs	*notAllowedTACs;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ServiceAreaInformation_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ServiceAreaInformation_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_ServiceAreaInformation_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_ServiceAreaInformation_Item_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "AllowedTACs.h"
#include "NotAllowedTACs.h"
#include "ProtocolExtensionContainer.h"

#endif	/* _ServiceAreaInformation_Item_H_ */
#include <asn_internal.h>

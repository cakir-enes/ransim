/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_BroadcastPLMNItem_H_
#define	_BroadcastPLMNItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PLMNIdentity.h"
#include "SliceSupportList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* BroadcastPLMNItem */
typedef struct BroadcastPLMNItem {
	PLMNIdentity_t	 pLMNIdentity;
	SliceSupportList_t	 tAISliceSupportList;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BroadcastPLMNItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BroadcastPLMNItem;
extern asn_SEQUENCE_specifics_t asn_SPC_BroadcastPLMNItem_specs_1;
extern asn_TYPE_member_t asn_MBR_BroadcastPLMNItem_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProtocolExtensionContainer.h"

#endif	/* _BroadcastPLMNItem_H_ */
#include <asn_internal.h>

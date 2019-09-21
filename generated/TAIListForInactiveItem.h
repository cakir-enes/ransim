/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_TAIListForInactiveItem_H_
#define	_TAIListForInactiveItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TAI.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* TAIListForInactiveItem */
typedef struct TAIListForInactiveItem {
	TAI_t	 tAI;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TAIListForInactiveItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TAIListForInactiveItem;
extern asn_SEQUENCE_specifics_t asn_SPC_TAIListForInactiveItem_specs_1;
extern asn_TYPE_member_t asn_MBR_TAIListForInactiveItem_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProtocolExtensionContainer.h"

#endif	/* _TAIListForInactiveItem_H_ */
#include <asn_internal.h>

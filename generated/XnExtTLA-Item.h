/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_XnExtTLA_Item_H_
#define	_XnExtTLA_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TransportLayerAddress.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct XnGTP_TLAs;
struct ProtocolExtensionContainer;

/* XnExtTLA-Item */
typedef struct XnExtTLA_Item {
	TransportLayerAddress_t	*iPsecTLA;	/* OPTIONAL */
	struct XnGTP_TLAs	*gTP_TLAs;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} XnExtTLA_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_XnExtTLA_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_XnExtTLA_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_XnExtTLA_Item_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "XnGTP-TLAs.h"
#include "ProtocolExtensionContainer.h"

#endif	/* _XnExtTLA_Item_H_ */
#include <asn_internal.h>

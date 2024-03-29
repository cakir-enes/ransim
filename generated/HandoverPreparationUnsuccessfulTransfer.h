/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_HandoverPreparationUnsuccessfulTransfer_H_
#define	_HandoverPreparationUnsuccessfulTransfer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Cause.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* HandoverPreparationUnsuccessfulTransfer */
typedef struct HandoverPreparationUnsuccessfulTransfer {
	Cause_t	 cause;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HandoverPreparationUnsuccessfulTransfer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HandoverPreparationUnsuccessfulTransfer;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProtocolExtensionContainer.h"

#endif	/* _HandoverPreparationUnsuccessfulTransfer_H_ */
#include <asn_internal.h>

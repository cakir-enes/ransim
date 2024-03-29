/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_SecurityIndication_H_
#define	_SecurityIndication_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IntegrityProtectionIndication.h"
#include "ConfidentialityProtectionIndication.h"
#include "MaximumIntegrityProtectedDataRate.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* SecurityIndication */
typedef struct SecurityIndication {
	IntegrityProtectionIndication_t	 integrityProtectionIndication;
	ConfidentialityProtectionIndication_t	 confidentialityProtectionIndication;
	MaximumIntegrityProtectedDataRate_t	*maximumIntegrityProtectedDataRate_UL;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SecurityIndication_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SecurityIndication;
extern asn_SEQUENCE_specifics_t asn_SPC_SecurityIndication_specs_1;
extern asn_TYPE_member_t asn_MBR_SecurityIndication_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProtocolExtensionContainer.h"

#endif	/* _SecurityIndication_H_ */
#include <asn_internal.h>

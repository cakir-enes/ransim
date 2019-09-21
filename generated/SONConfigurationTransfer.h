/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_SONConfigurationTransfer_H_
#define	_SONConfigurationTransfer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TargetRANNodeID.h"
#include "SourceRANNodeID.h"
#include "SONInformation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct XnTNLConfigurationInfo;
struct ProtocolExtensionContainer;

/* SONConfigurationTransfer */
typedef struct SONConfigurationTransfer {
	TargetRANNodeID_t	 targetRANNodeID;
	SourceRANNodeID_t	 sourceRANNodeID;
	SONInformation_t	 sONInformation;
	struct XnTNLConfigurationInfo	*xnTNLConfigurationInfo;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SONConfigurationTransfer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SONConfigurationTransfer;
extern asn_SEQUENCE_specifics_t asn_SPC_SONConfigurationTransfer_specs_1;
extern asn_TYPE_member_t asn_MBR_SONConfigurationTransfer_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "XnTNLConfigurationInfo.h"
#include "ProtocolExtensionContainer.h"

#endif	/* _SONConfigurationTransfer_H_ */
#include <asn_internal.h>

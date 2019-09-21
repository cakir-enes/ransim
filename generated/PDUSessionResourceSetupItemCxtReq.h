/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_PDUSessionResourceSetupItemCxtReq_H_
#define	_PDUSessionResourceSetupItemCxtReq_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PDUSessionID.h"
#include "NAS-PDU.h"
#include "S-NSSAI.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* PDUSessionResourceSetupItemCxtReq */
typedef struct PDUSessionResourceSetupItemCxtReq {
	PDUSessionID_t	 pDUSessionID;
	NAS_PDU_t	*nAS_PDU;	/* OPTIONAL */
	S_NSSAI_t	 s_NSSAI;
	OCTET_STRING_t	 pDUSessionResourceSetupRequestTransfer;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDUSessionResourceSetupItemCxtReq_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDUSessionResourceSetupItemCxtReq;
extern asn_SEQUENCE_specifics_t asn_SPC_PDUSessionResourceSetupItemCxtReq_specs_1;
extern asn_TYPE_member_t asn_MBR_PDUSessionResourceSetupItemCxtReq_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProtocolExtensionContainer.h"

#endif	/* _PDUSessionResourceSetupItemCxtReq_H_ */
#include <asn_internal.h>

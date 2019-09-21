/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_PDUSessionResourceSetupResponseTransfer_H_
#define	_PDUSessionResourceSetupResponseTransfer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "QosFlowPerTNLInformation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct QosFlowPerTNLInformationList;
struct SecurityResult;
struct QosFlowListWithCause;
struct ProtocolExtensionContainer;

/* PDUSessionResourceSetupResponseTransfer */
typedef struct PDUSessionResourceSetupResponseTransfer {
	QosFlowPerTNLInformation_t	 dLQosFlowPerTNLInformation;
	struct QosFlowPerTNLInformationList	*additionalDLQosFlowPerTNLInformation;	/* OPTIONAL */
	struct SecurityResult	*securityResult;	/* OPTIONAL */
	struct QosFlowListWithCause	*qosFlowFailedToSetupList;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDUSessionResourceSetupResponseTransfer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDUSessionResourceSetupResponseTransfer;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "QosFlowPerTNLInformationList.h"
#include "SecurityResult.h"
#include "QosFlowListWithCause.h"
#include "ProtocolExtensionContainer.h"

#endif	/* _PDUSessionResourceSetupResponseTransfer_H_ */
#include <asn_internal.h>

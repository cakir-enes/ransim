/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-PDU-Contents"
 * 	found in "NGAP-PDU-Contents.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_WriteReplaceWarningResponse_H_
#define	_WriteReplaceWarningResponse_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* WriteReplaceWarningResponse */
typedef struct WriteReplaceWarningResponse {
	ProtocolIE_Container_125P59_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} WriteReplaceWarningResponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_WriteReplaceWarningResponse;

#ifdef __cplusplus
}
#endif

#endif	/* _WriteReplaceWarningResponse_H_ */
#include <asn_internal.h>

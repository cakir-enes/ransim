/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-PDU-Contents"
 * 	found in "NGAP-PDU-Contents.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_RANConfigurationUpdateAcknowledge_H_
#define	_RANConfigurationUpdateAcknowledge_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RANConfigurationUpdateAcknowledge */
typedef struct RANConfigurationUpdateAcknowledge {
	ProtocolIE_Container_125P45_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RANConfigurationUpdateAcknowledge_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RANConfigurationUpdateAcknowledge;

#ifdef __cplusplus
}
#endif

#endif	/* _RANConfigurationUpdateAcknowledge_H_ */
#include <asn_internal.h>
/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_PDUSessionAggregateMaximumBitRate_H_
#define	_PDUSessionAggregateMaximumBitRate_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BitRate.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* PDUSessionAggregateMaximumBitRate */
typedef struct PDUSessionAggregateMaximumBitRate {
	BitRate_t	 pDUSessionAggregateMaximumBitRateDL;
	BitRate_t	 pDUSessionAggregateMaximumBitRateUL;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDUSessionAggregateMaximumBitRate_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDUSessionAggregateMaximumBitRate;
extern asn_SEQUENCE_specifics_t asn_SPC_PDUSessionAggregateMaximumBitRate_specs_1;
extern asn_TYPE_member_t asn_MBR_PDUSessionAggregateMaximumBitRate_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProtocolExtensionContainer.h"

#endif	/* _PDUSessionAggregateMaximumBitRate_H_ */
#include <asn_internal.h>

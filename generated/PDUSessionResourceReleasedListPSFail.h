/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_PDUSessionResourceReleasedListPSFail_H_
#define	_PDUSessionResourceReleasedListPSFail_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PDUSessionResourceReleasedItemPSFail;

/* PDUSessionResourceReleasedListPSFail */
typedef struct PDUSessionResourceReleasedListPSFail {
	A_SEQUENCE_OF(struct PDUSessionResourceReleasedItemPSFail) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDUSessionResourceReleasedListPSFail_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDUSessionResourceReleasedListPSFail;
extern asn_SET_OF_specifics_t asn_SPC_PDUSessionResourceReleasedListPSFail_specs_1;
extern asn_TYPE_member_t asn_MBR_PDUSessionResourceReleasedListPSFail_1[1];
extern asn_per_constraints_t asn_PER_type_PDUSessionResourceReleasedListPSFail_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PDUSessionResourceReleasedItemPSFail.h"

#endif	/* _PDUSessionResourceReleasedListPSFail_H_ */
#include <asn_internal.h>
/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_PDUSessionResourceFailedToSetupListHOAck_H_
#define	_PDUSessionResourceFailedToSetupListHOAck_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PDUSessionResourceFailedToSetupItemHOAck;

/* PDUSessionResourceFailedToSetupListHOAck */
typedef struct PDUSessionResourceFailedToSetupListHOAck {
	A_SEQUENCE_OF(struct PDUSessionResourceFailedToSetupItemHOAck) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDUSessionResourceFailedToSetupListHOAck_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDUSessionResourceFailedToSetupListHOAck;
extern asn_SET_OF_specifics_t asn_SPC_PDUSessionResourceFailedToSetupListHOAck_specs_1;
extern asn_TYPE_member_t asn_MBR_PDUSessionResourceFailedToSetupListHOAck_1[1];
extern asn_per_constraints_t asn_PER_type_PDUSessionResourceFailedToSetupListHOAck_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PDUSessionResourceFailedToSetupItemHOAck.h"

#endif	/* _PDUSessionResourceFailedToSetupListHOAck_H_ */
#include <asn_internal.h>
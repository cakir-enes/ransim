/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_PDUSessionResourceListCxtRelCpl_H_
#define	_PDUSessionResourceListCxtRelCpl_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PDUSessionResourceItemCxtRelCpl;

/* PDUSessionResourceListCxtRelCpl */
typedef struct PDUSessionResourceListCxtRelCpl {
	A_SEQUENCE_OF(struct PDUSessionResourceItemCxtRelCpl) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDUSessionResourceListCxtRelCpl_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDUSessionResourceListCxtRelCpl;
extern asn_SET_OF_specifics_t asn_SPC_PDUSessionResourceListCxtRelCpl_specs_1;
extern asn_TYPE_member_t asn_MBR_PDUSessionResourceListCxtRelCpl_1[1];
extern asn_per_constraints_t asn_PER_type_PDUSessionResourceListCxtRelCpl_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PDUSessionResourceItemCxtRelCpl.h"

#endif	/* _PDUSessionResourceListCxtRelCpl_H_ */
#include <asn_internal.h>

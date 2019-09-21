/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_TAIListForPaging_H_
#define	_TAIListForPaging_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TAIListForPagingItem;

/* TAIListForPaging */
typedef struct TAIListForPaging {
	A_SEQUENCE_OF(struct TAIListForPagingItem) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TAIListForPaging_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TAIListForPaging;
extern asn_SET_OF_specifics_t asn_SPC_TAIListForPaging_specs_1;
extern asn_TYPE_member_t asn_MBR_TAIListForPaging_1[1];
extern asn_per_constraints_t asn_PER_type_TAIListForPaging_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TAIListForPagingItem.h"

#endif	/* _TAIListForPaging_H_ */
#include <asn_internal.h>

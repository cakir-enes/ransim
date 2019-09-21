/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_RecommendedCellItem_H_
#define	_RecommendedCellItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGRAN-CGI.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* RecommendedCellItem */
typedef struct RecommendedCellItem {
	NGRAN_CGI_t	 nGRAN_CGI;
	long	*timeStayedInCell;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RecommendedCellItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RecommendedCellItem;
extern asn_SEQUENCE_specifics_t asn_SPC_RecommendedCellItem_specs_1;
extern asn_TYPE_member_t asn_MBR_RecommendedCellItem_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProtocolExtensionContainer.h"

#endif	/* _RecommendedCellItem_H_ */
#include <asn_internal.h>

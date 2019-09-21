/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_QoSFlowsUsageReport_Item_H_
#define	_QoSFlowsUsageReport_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "QosFlowIdentifier.h"
#include <NativeEnumerated.h>
#include "VolumeTimedReportList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum QoSFlowsUsageReport_Item__rATType {
	QoSFlowsUsageReport_Item__rATType_nr	= 0,
	QoSFlowsUsageReport_Item__rATType_eutra	= 1
	/*
	 * Enumeration is extensible
	 */
} e_QoSFlowsUsageReport_Item__rATType;

/* Forward declarations */
struct ProtocolExtensionContainer;

/* QoSFlowsUsageReport-Item */
typedef struct QoSFlowsUsageReport_Item {
	QosFlowIdentifier_t	 qosFlowIdentifier;
	long	 rATType;
	VolumeTimedReportList_t	 qoSFlowsTimedReportList;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} QoSFlowsUsageReport_Item_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_rATType_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_QoSFlowsUsageReport_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_QoSFlowsUsageReport_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_QoSFlowsUsageReport_Item_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProtocolExtensionContainer.h"

#endif	/* _QoSFlowsUsageReport_Item_H_ */
#include <asn_internal.h>

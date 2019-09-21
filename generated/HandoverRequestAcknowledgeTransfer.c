/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -fcompound-names`
 */

#include "HandoverRequestAcknowledgeTransfer.h"

static asn_TYPE_member_t asn_MBR_HandoverRequestAcknowledgeTransfer_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverRequestAcknowledgeTransfer, dL_NGU_UP_TNLInformation),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_UPTransportLayerInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dL-NGU-UP-TNLInformation"
		},
	{ ATF_POINTER, 2, offsetof(struct HandoverRequestAcknowledgeTransfer, dLForwardingUP_TNLInformation),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_UPTransportLayerInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dLForwardingUP-TNLInformation"
		},
	{ ATF_POINTER, 1, offsetof(struct HandoverRequestAcknowledgeTransfer, securityResult),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SecurityResult,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"securityResult"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverRequestAcknowledgeTransfer, qosFlowSetupResponseList),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QosFlowListWithDataForwarding,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"qosFlowSetupResponseList"
		},
	{ ATF_POINTER, 3, offsetof(struct HandoverRequestAcknowledgeTransfer, qosFlowFailedToSetupList),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_QosFlowListWithCause,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"qosFlowFailedToSetupList"
		},
	{ ATF_POINTER, 2, offsetof(struct HandoverRequestAcknowledgeTransfer, dataForwardingResponseDRBList),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DataForwardingResponseDRBList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dataForwardingResponseDRBList"
		},
	{ ATF_POINTER, 1, offsetof(struct HandoverRequestAcknowledgeTransfer, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_176P65,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_HandoverRequestAcknowledgeTransfer_oms_1[] = { 1, 2, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_HandoverRequestAcknowledgeTransfer_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_HandoverRequestAcknowledgeTransfer_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dL-NGU-UP-TNLInformation */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dLForwardingUP-TNLInformation */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* securityResult */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* qosFlowSetupResponseList */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* qosFlowFailedToSetupList */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* dataForwardingResponseDRBList */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_HandoverRequestAcknowledgeTransfer_specs_1 = {
	sizeof(struct HandoverRequestAcknowledgeTransfer),
	offsetof(struct HandoverRequestAcknowledgeTransfer, _asn_ctx),
	asn_MAP_HandoverRequestAcknowledgeTransfer_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_HandoverRequestAcknowledgeTransfer_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	7,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_HandoverRequestAcknowledgeTransfer = {
	"HandoverRequestAcknowledgeTransfer",
	"HandoverRequestAcknowledgeTransfer",
	&asn_OP_SEQUENCE,
	asn_DEF_HandoverRequestAcknowledgeTransfer_tags_1,
	sizeof(asn_DEF_HandoverRequestAcknowledgeTransfer_tags_1)
		/sizeof(asn_DEF_HandoverRequestAcknowledgeTransfer_tags_1[0]), /* 1 */
	asn_DEF_HandoverRequestAcknowledgeTransfer_tags_1,	/* Same as above */
	sizeof(asn_DEF_HandoverRequestAcknowledgeTransfer_tags_1)
		/sizeof(asn_DEF_HandoverRequestAcknowledgeTransfer_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_HandoverRequestAcknowledgeTransfer_1,
	7,	/* Elements count */
	&asn_SPC_HandoverRequestAcknowledgeTransfer_specs_1	/* Additional specs */
};

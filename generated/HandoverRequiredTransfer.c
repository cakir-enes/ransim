/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -fcompound-names`
 */

#include "HandoverRequiredTransfer.h"

static asn_TYPE_member_t asn_MBR_HandoverRequiredTransfer_1[] = {
	{ ATF_POINTER, 2, offsetof(struct HandoverRequiredTransfer, directForwardingPathAvailability),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DirectForwardingPathAvailability,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"directForwardingPathAvailability"
		},
	{ ATF_POINTER, 1, offsetof(struct HandoverRequiredTransfer, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_176P66,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_HandoverRequiredTransfer_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_HandoverRequiredTransfer_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_HandoverRequiredTransfer_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* directForwardingPathAvailability */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_HandoverRequiredTransfer_specs_1 = {
	sizeof(struct HandoverRequiredTransfer),
	offsetof(struct HandoverRequiredTransfer, _asn_ctx),
	asn_MAP_HandoverRequiredTransfer_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_HandoverRequiredTransfer_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_HandoverRequiredTransfer = {
	"HandoverRequiredTransfer",
	"HandoverRequiredTransfer",
	&asn_OP_SEQUENCE,
	asn_DEF_HandoverRequiredTransfer_tags_1,
	sizeof(asn_DEF_HandoverRequiredTransfer_tags_1)
		/sizeof(asn_DEF_HandoverRequiredTransfer_tags_1[0]), /* 1 */
	asn_DEF_HandoverRequiredTransfer_tags_1,	/* Same as above */
	sizeof(asn_DEF_HandoverRequiredTransfer_tags_1)
		/sizeof(asn_DEF_HandoverRequiredTransfer_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_HandoverRequiredTransfer_1,
	2,	/* Elements count */
	&asn_SPC_HandoverRequiredTransfer_specs_1	/* Additional specs */
};


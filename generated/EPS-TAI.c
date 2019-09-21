/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -fcompound-names`
 */

#include "EPS-TAI.h"

asn_TYPE_member_t asn_MBR_EPS_TAI_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EPS_TAI, pLMNIdentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PLMNIdentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pLMNIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EPS_TAI, ePS_TAC),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EPS_TAC,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ePS-TAC"
		},
	{ ATF_POINTER, 1, offsetof(struct EPS_TAI, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_176P49,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_EPS_TAI_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_EPS_TAI_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_EPS_TAI_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pLMNIdentity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ePS-TAC */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_EPS_TAI_specs_1 = {
	sizeof(struct EPS_TAI),
	offsetof(struct EPS_TAI, _asn_ctx),
	asn_MAP_EPS_TAI_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_EPS_TAI_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_EPS_TAI = {
	"EPS-TAI",
	"EPS-TAI",
	&asn_OP_SEQUENCE,
	asn_DEF_EPS_TAI_tags_1,
	sizeof(asn_DEF_EPS_TAI_tags_1)
		/sizeof(asn_DEF_EPS_TAI_tags_1[0]), /* 1 */
	asn_DEF_EPS_TAI_tags_1,	/* Same as above */
	sizeof(asn_DEF_EPS_TAI_tags_1)
		/sizeof(asn_DEF_EPS_TAI_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_EPS_TAI_1,
	3,	/* Elements count */
	&asn_SPC_EPS_TAI_specs_1	/* Additional specs */
};


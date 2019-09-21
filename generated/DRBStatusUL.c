/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -fcompound-names`
 */

#include "DRBStatusUL.h"

static asn_oer_constraints_t asn_OER_type_DRBStatusUL_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_DRBStatusUL_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_DRBStatusUL_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DRBStatusUL, choice.dRBStatusUL12),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRBStatusUL12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dRBStatusUL12"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRBStatusUL, choice.dRBStatusUL18),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRBStatusUL18,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dRBStatusUL18"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRBStatusUL, choice.choice_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolIE_SingleContainer_128P7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"choice-Extensions"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_DRBStatusUL_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dRBStatusUL12 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dRBStatusUL18 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* choice-Extensions */
};
asn_CHOICE_specifics_t asn_SPC_DRBStatusUL_specs_1 = {
	sizeof(struct DRBStatusUL),
	offsetof(struct DRBStatusUL, _asn_ctx),
	offsetof(struct DRBStatusUL, present),
	sizeof(((struct DRBStatusUL *)0)->present),
	asn_MAP_DRBStatusUL_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_DRBStatusUL = {
	"DRBStatusUL",
	"DRBStatusUL",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_DRBStatusUL_constr_1, &asn_PER_type_DRBStatusUL_constr_1, CHOICE_constraint },
	asn_MBR_DRBStatusUL_1,
	3,	/* Elements count */
	&asn_SPC_DRBStatusUL_specs_1	/* Additional specs */
};


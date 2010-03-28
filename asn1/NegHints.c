/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "SPNEGO"
 * 	found in "spnego.asn1"
 * 	`asn1c -fnative-types -fskeletons-copy`
 */

#include <asn_internal.h>

#include "NegHints.h"

static asn_TYPE_member_t asn_MBR_NegHints_1[] = {
	{ ATF_POINTER, 2, offsetof(struct NegHints, hintName),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_GeneralString,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"hintName"
		},
	{ ATF_POINTER, 1, offsetof(struct NegHints, hintAddress),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"hintAddress"
		},
};
static int asn_MAP_NegHints_oms_1[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_NegHints_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_NegHints_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* hintName at 32 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* hintAddress at 33 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NegHints_specs_1 = {
	sizeof(struct NegHints),
	offsetof(struct NegHints, _asn_ctx),
	asn_MAP_NegHints_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_NegHints_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_NegHints = {
	"NegHints",
	"NegHints",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_NegHints_tags_1,
	sizeof(asn_DEF_NegHints_tags_1)
		/sizeof(asn_DEF_NegHints_tags_1[0]), /* 1 */
	asn_DEF_NegHints_tags_1,	/* Same as above */
	sizeof(asn_DEF_NegHints_tags_1)
		/sizeof(asn_DEF_NegHints_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_NegHints_1,
	2,	/* Elements count */
	&asn_SPC_NegHints_specs_1	/* Additional specs */
};


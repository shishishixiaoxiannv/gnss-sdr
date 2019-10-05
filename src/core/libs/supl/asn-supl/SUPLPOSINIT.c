/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-POS-INIT"
 *     found in "../supl-posinit.asn"
 */

#include "SUPLPOSINIT.h"

static asn_TYPE_member_t asn_MBR_SUPLPOSINIT_1[] = {
    { ATF_NOFLAGS, 0, offsetof(struct SUPLPOSINIT, sETCapabilities),
        (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_SETCapabilities,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "sETCapabilities"
        },
    { ATF_POINTER, 1, offsetof(struct SUPLPOSINIT, requestedAssistData),
        (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_RequestedAssistData,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "requestedAssistData"
        },
    { ATF_NOFLAGS, 0, offsetof(struct SUPLPOSINIT, locationId),
        (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_LocationId,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "locationId"
        },
    { ATF_POINTER, 3, offsetof(struct SUPLPOSINIT, position),
        (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_Position,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "position"
        },
    { ATF_POINTER, 2, offsetof(struct SUPLPOSINIT, sUPLPOS),
        (ASN_TAG_CLASS_CONTEXT | (4 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_SUPLPOS,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "sUPLPOS"
        },
    { ATF_POINTER, 1, offsetof(struct SUPLPOSINIT, ver),
        (ASN_TAG_CLASS_CONTEXT | (5 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_Ver,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "ver"
        },
};
static int asn_MAP_SUPLPOSINIT_oms_1[] = { 1, 3, 4, 5 };
static ber_tlv_tag_t asn_DEF_SUPLPOSINIT_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SUPLPOSINIT_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sETCapabilities at 15 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* requestedAssistData at 16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* locationId at 17 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* position at 18 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sUPLPOS at 19 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* ver at 20 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SUPLPOSINIT_specs_1 = {
    sizeof(struct SUPLPOSINIT),
    offsetof(struct SUPLPOSINIT, _asn_ctx),
    asn_MAP_SUPLPOSINIT_tag2el_1,
    6,    /* Count of tags in the map */
    asn_MAP_SUPLPOSINIT_oms_1,    /* Optional members */
    4, 0,    /* Root/Additions */
    5,    /* Start extensions */
    7    /* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SUPLPOSINIT = {
    "SUPLPOSINIT",
    "SUPLPOSINIT",
    SEQUENCE_free,
    SEQUENCE_print,
    SEQUENCE_constraint,
    SEQUENCE_decode_ber,
    SEQUENCE_encode_der,
    SEQUENCE_decode_xer,
    SEQUENCE_encode_xer,
    SEQUENCE_decode_uper,
    SEQUENCE_encode_uper,
    0,    /* Use generic outmost tag fetcher */
    asn_DEF_SUPLPOSINIT_tags_1,
    sizeof(asn_DEF_SUPLPOSINIT_tags_1)
        /sizeof(asn_DEF_SUPLPOSINIT_tags_1[0]), /* 1 */
    asn_DEF_SUPLPOSINIT_tags_1,    /* Same as above */
    sizeof(asn_DEF_SUPLPOSINIT_tags_1)
        /sizeof(asn_DEF_SUPLPOSINIT_tags_1[0]), /* 1 */
    0,    /* No PER visible constraints */
    asn_MBR_SUPLPOSINIT_1,
    6,    /* Elements count */
    &asn_SPC_SUPLPOSINIT_specs_1    /* Additional specs */
};


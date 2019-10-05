/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 *     found in "../rrlp-components.asn"
 */

#include "Rel-7-MsrPosition-Rsp-Extension.h"

static asn_TYPE_member_t asn_MBR_Rel_7_MsrPosition_Rsp_Extension_1[] = {
    { ATF_POINTER, 3, offsetof(struct Rel_7_MsrPosition_Rsp_Extension, velEstimate),
        (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_VelocityEstimate,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "velEstimate"
        },
    { ATF_POINTER, 2, offsetof(struct Rel_7_MsrPosition_Rsp_Extension, ganssLocationInfo),
        (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_GANSSLocationInfo,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "ganssLocationInfo"
        },
    { ATF_POINTER, 1, offsetof(struct Rel_7_MsrPosition_Rsp_Extension, ganssMeasureInfo),
        (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_GANSSMeasureInfo,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "ganssMeasureInfo"
        },
};
static int asn_MAP_Rel_7_MsrPosition_Rsp_Extension_oms_1[] = { 0, 1, 2 };
static ber_tlv_tag_t asn_DEF_Rel_7_MsrPosition_Rsp_Extension_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_Rel_7_MsrPosition_Rsp_Extension_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* velEstimate at 1397 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ganssLocationInfo at 1402 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ganssMeasureInfo at 1403 */
};
static asn_SEQUENCE_specifics_t asn_SPC_Rel_7_MsrPosition_Rsp_Extension_specs_1 = {
    sizeof(struct Rel_7_MsrPosition_Rsp_Extension),
    offsetof(struct Rel_7_MsrPosition_Rsp_Extension, _asn_ctx),
    asn_MAP_Rel_7_MsrPosition_Rsp_Extension_tag2el_1,
    3,    /* Count of tags in the map */
    asn_MAP_Rel_7_MsrPosition_Rsp_Extension_oms_1,    /* Optional members */
    3, 0,    /* Root/Additions */
    2,    /* Start extensions */
    4    /* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_Rel_7_MsrPosition_Rsp_Extension = {
    "Rel-7-MsrPosition-Rsp-Extension",
    "Rel-7-MsrPosition-Rsp-Extension",
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
    asn_DEF_Rel_7_MsrPosition_Rsp_Extension_tags_1,
    sizeof(asn_DEF_Rel_7_MsrPosition_Rsp_Extension_tags_1)
        /sizeof(asn_DEF_Rel_7_MsrPosition_Rsp_Extension_tags_1[0]), /* 1 */
    asn_DEF_Rel_7_MsrPosition_Rsp_Extension_tags_1,    /* Same as above */
    sizeof(asn_DEF_Rel_7_MsrPosition_Rsp_Extension_tags_1)
        /sizeof(asn_DEF_Rel_7_MsrPosition_Rsp_Extension_tags_1[0]), /* 1 */
    0,    /* No PER visible constraints */
    asn_MBR_Rel_7_MsrPosition_Rsp_Extension_1,
    3,    /* Elements count */
    &asn_SPC_Rel_7_MsrPosition_Rsp_Extension_specs_1    /* Additional specs */
};


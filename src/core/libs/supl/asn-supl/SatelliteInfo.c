/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-POS-INIT"
 *     found in "../supl-posinit.asn"
 */

#include "SatelliteInfo.h"

static asn_per_constraints_t ASN_PER_TYPE_SATELLITE_INFO_CONSTR_1 = {
    { APC_UNCONSTRAINED,    -1, -1,  0,  0 },
    { APC_CONSTRAINED,     5,  5,  1,  31 }    /* (SIZE(1..31)) */,
    0, 0    /* No PER value map */
};
static asn_TYPE_member_t asn_MBR_SatelliteInfo_1[] = {
    { ATF_POINTER, 0, 0,
        (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
        0,
        &asn_DEF_SatelliteInfoElement,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        ""
        },
};
static ber_tlv_tag_t asn_DEF_SatelliteInfo_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_SatelliteInfo_specs_1 = {
    sizeof(struct SatelliteInfo),
    offsetof(struct SatelliteInfo, _asn_ctx),
    0,    /* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_SatelliteInfo = {
    "SatelliteInfo",
    "SatelliteInfo",
    SEQUENCE_OF_free,
    SEQUENCE_OF_print,
    SEQUENCE_OF_constraint,
    SEQUENCE_OF_decode_ber,
    SEQUENCE_OF_encode_der,
    SEQUENCE_OF_decode_xer,
    SEQUENCE_OF_encode_xer,
    SEQUENCE_OF_decode_uper,
    SEQUENCE_OF_encode_uper,
    0,    /* Use generic outmost tag fetcher */
    asn_DEF_SatelliteInfo_tags_1,
    sizeof(asn_DEF_SatelliteInfo_tags_1)
        /sizeof(asn_DEF_SatelliteInfo_tags_1[0]), /* 1 */
    asn_DEF_SatelliteInfo_tags_1,    /* Same as above */
    sizeof(asn_DEF_SatelliteInfo_tags_1)
        /sizeof(asn_DEF_SatelliteInfo_tags_1[0]), /* 1 */
    &ASN_PER_TYPE_SATELLITE_INFO_CONSTR_1,
    asn_MBR_SatelliteInfo_1,
    1,    /* Single element */
    &asn_SPC_SatelliteInfo_specs_1    /* Additional specs */
};


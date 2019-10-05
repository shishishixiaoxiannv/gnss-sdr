/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 *     found in "../rrlp-components.asn"
 */

#include "DGPSCorrections.h"

static int
memb_gpsTOW_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
            asn_app_constraint_failed_f *ctfailcb, void *app_key) {
    long value;
    
    if(!sptr) {
        _ASN_CTFAIL(app_key, td, sptr,
            "%s: value not given (%s:%d)",
            td->name, __FILE__, __LINE__);
        return -1;
    }
    
    value = *(const long *)sptr;
    
    if((value >= 0 && value <= 604799)) {
        /* Constraint check succeeded */
        return 0;
    } else {
        _ASN_CTFAIL(app_key, td, sptr,
            "%s: constraint failed (%s:%d)",
            td->name, __FILE__, __LINE__);
        return -1;
    }
}

static int
memb_status_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
            asn_app_constraint_failed_f *ctfailcb, void *app_key) {
    long value;
    
    if(!sptr) {
        _ASN_CTFAIL(app_key, td, sptr,
            "%s: value not given (%s:%d)",
            td->name, __FILE__, __LINE__);
        return -1;
    }
    
    value = *(const long *)sptr;
    
    if((value >= 0 && value <= 7)) {
        /* Constraint check succeeded */
        return 0;
    } else {
        _ASN_CTFAIL(app_key, td, sptr,
            "%s: constraint failed (%s:%d)",
            td->name, __FILE__, __LINE__);
        return -1;
    }
}

static asn_per_constraints_t ASN_PER_MEMB_GPS_TOW_CONSTR_2 = {
    { APC_CONSTRAINED,     20, -1,  0,  604799 }    /* (0..604799) */,
    { APC_UNCONSTRAINED,    -1, -1,  0,  0 },
    0, 0    /* No PER value map */
};
static asn_per_constraints_t ASN_PER_MEMB_STATUS_CONSTR_3 = {
    { APC_CONSTRAINED,     3,  3,  0,  7 }    /* (0..7) */,
    { APC_UNCONSTRAINED,    -1, -1,  0,  0 },
    0, 0    /* No PER value map */
};
static asn_TYPE_member_t asn_MBR_DGPSCorrections_1[] = {
    { ATF_NOFLAGS, 0, offsetof(struct DGPSCorrections, gpsTOW),
        (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_NativeInteger,
        memb_gpsTOW_constraint_1,
        &ASN_PER_MEMB_GPS_TOW_CONSTR_2,
        0,
        "gpsTOW"
        },
    { ATF_NOFLAGS, 0, offsetof(struct DGPSCorrections, status),
        (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_NativeInteger,
        memb_status_constraint_1,
        &ASN_PER_MEMB_STATUS_CONSTR_3,
        0,
        "status"
        },
    { ATF_NOFLAGS, 0, offsetof(struct DGPSCorrections, satList),
        (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_SeqOfSatElement,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "satList"
        },
};
static ber_tlv_tag_t asn_DEF_DGPSCorrections_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_DGPSCorrections_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gpsTOW at 655 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* status at 656 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* satList at 659 */
};
static asn_SEQUENCE_specifics_t asn_SPC_DGPSCorrections_specs_1 = {
    sizeof(struct DGPSCorrections),
    offsetof(struct DGPSCorrections, _asn_ctx),
    asn_MAP_DGPSCorrections_tag2el_1,
    3,    /* Count of tags in the map */
    0, 0, 0,    /* Optional elements (not needed) */
    -1,    /* Start extensions */
    -1    /* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DGPSCorrections = {
    "DGPSCorrections",
    "DGPSCorrections",
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
    asn_DEF_DGPSCorrections_tags_1,
    sizeof(asn_DEF_DGPSCorrections_tags_1)
        /sizeof(asn_DEF_DGPSCorrections_tags_1[0]), /* 1 */
    asn_DEF_DGPSCorrections_tags_1,    /* Same as above */
    sizeof(asn_DEF_DGPSCorrections_tags_1)
        /sizeof(asn_DEF_DGPSCorrections_tags_1[0]), /* 1 */
    0,    /* No PER visible constraints */
    asn_MBR_DGPSCorrections_1,
    3,    /* Elements count */
    &asn_SPC_DGPSCorrections_specs_1    /* Additional specs */
};


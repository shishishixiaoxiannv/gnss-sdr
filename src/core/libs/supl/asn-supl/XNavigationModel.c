/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "SUPL-POS-INIT"
 *     found in "../supl-posinit.asn"
 */

#include "XNavigationModel.h"

static int
memb_gpsWeek_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
            asn_app_constraint_failed_f *ctfailcb, void *app_key) {
    long value;
    
    if(!sptr) {
        _ASN_CTFAIL(app_key, td, sptr,
            "%s: value not given (%s:%d)",
            td->name, __FILE__, __LINE__);
        return -1;
    }
    
    value = *(const long *)sptr;
    
    if((value >= 0 && value <= 1023)) {
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
memb_gpsToe_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
            asn_app_constraint_failed_f *ctfailcb, void *app_key) {
    long value;
    
    if(!sptr) {
        _ASN_CTFAIL(app_key, td, sptr,
            "%s: value not given (%s:%d)",
            td->name, __FILE__, __LINE__);
        return -1;
    }
    
    value = *(const long *)sptr;
    
    if((value >= 0 && value <= 167)) {
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
memb_nSAT_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
            asn_app_constraint_failed_f *ctfailcb, void *app_key) {
    long value;
    
    if(!sptr) {
        _ASN_CTFAIL(app_key, td, sptr,
            "%s: value not given (%s:%d)",
            td->name, __FILE__, __LINE__);
        return -1;
    }
    
    value = *(const long *)sptr;
    
    if((value >= 0 && value <= 31)) {
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
memb_toeLimit_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
            asn_app_constraint_failed_f *ctfailcb, void *app_key) {
    long value;
    
    if(!sptr) {
        _ASN_CTFAIL(app_key, td, sptr,
            "%s: value not given (%s:%d)",
            td->name, __FILE__, __LINE__);
        return -1;
    }
    
    value = *(const long *)sptr;
    
    if((value >= 0 && value <= 10)) {
        /* Constraint check succeeded */
        return 0;
    } else {
        _ASN_CTFAIL(app_key, td, sptr,
            "%s: constraint failed (%s:%d)",
            td->name, __FILE__, __LINE__);
        return -1;
    }
}

static asn_per_constraints_t ASN_PER_MEMB_GPS_WEEK_CONSTR_2 = {
    { APC_CONSTRAINED,     10,  10,  0,  1023 }    /* (0..1023) */,
    { APC_UNCONSTRAINED,    -1, -1,  0,  0 },
    0, 0    /* No PER value map */
};
static asn_per_constraints_t ASN_PER_MEMB_GPS_TOE_CONSTR_3 = {
    { APC_CONSTRAINED,     8,  8,  0,  167 }    /* (0..167) */,
    { APC_UNCONSTRAINED,    -1, -1,  0,  0 },
    0, 0    /* No PER value map */
};
static asn_per_constraints_t ASN_PER_MEMB_N_SAT_CONSTR_4 = {
    { APC_CONSTRAINED,     5,  5,  0,  31 }    /* (0..31) */,
    { APC_UNCONSTRAINED,    -1, -1,  0,  0 },
    0, 0    /* No PER value map */
};
static asn_per_constraints_t ASN_PER_MEMB_TOE_LIMIT_CONSTR_5 = {
    { APC_CONSTRAINED,     4,  4,  0,  10 }    /* (0..10) */,
    { APC_UNCONSTRAINED,    -1, -1,  0,  0 },
    0, 0    /* No PER value map */
};
static asn_TYPE_member_t asn_MBR_XNavigationModel_1[] = {
    { ATF_NOFLAGS, 0, offsetof(struct XNavigationModel, gpsWeek),
        (ASN_TAG_CLASS_CONTEXT | (0 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_NativeInteger,
        memb_gpsWeek_constraint_1,
        &ASN_PER_MEMB_GPS_WEEK_CONSTR_2,
        0,
        "gpsWeek"
        },
    { ATF_NOFLAGS, 0, offsetof(struct XNavigationModel, gpsToe),
        (ASN_TAG_CLASS_CONTEXT | (1 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_NativeInteger,
        memb_gpsToe_constraint_1,
        &ASN_PER_MEMB_GPS_TOE_CONSTR_3,
        0,
        "gpsToe"
        },
    { ATF_NOFLAGS, 0, offsetof(struct XNavigationModel, nSAT),
        (ASN_TAG_CLASS_CONTEXT | (2 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_NativeInteger,
        memb_nSAT_constraint_1,
        &ASN_PER_MEMB_N_SAT_CONSTR_4,
        0,
        "nSAT"
        },
    { ATF_NOFLAGS, 0, offsetof(struct XNavigationModel, toeLimit),
        (ASN_TAG_CLASS_CONTEXT | (3 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_NativeInteger,
        memb_toeLimit_constraint_1,
        &ASN_PER_MEMB_TOE_LIMIT_CONSTR_5,
        0,
        "toeLimit"
        },
    { ATF_POINTER, 1, offsetof(struct XNavigationModel, satInfo),
        (ASN_TAG_CLASS_CONTEXT | (4 << 2)),
        -1,    /* IMPLICIT tag at current level */
        &asn_DEF_SatelliteInfo,
        0,    /* Defer constraints checking to the member type */
        0,    /* No PER visible constraints */
        0,
        "satInfo"
        },
};
static int asn_MAP_XNavigationModel_oms_1[] = { 4 };
static ber_tlv_tag_t asn_DEF_XNavigationModel_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_XNavigationModel_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gpsWeek at 38 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* gpsToe at 39 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* nSAT at 40 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* toeLimit at 41 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* satInfo at 42 */
};
static asn_SEQUENCE_specifics_t asn_SPC_XNavigationModel_specs_1 = {
    sizeof(struct XNavigationModel),
    offsetof(struct XNavigationModel, _asn_ctx),
    asn_MAP_XNavigationModel_tag2el_1,
    5,    /* Count of tags in the map */
    asn_MAP_XNavigationModel_oms_1,    /* Optional members */
    1, 0,    /* Root/Additions */
    4,    /* Start extensions */
    6    /* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_XNavigationModel = {
    "XNavigationModel",
    "XNavigationModel",
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
    asn_DEF_XNavigationModel_tags_1,
    sizeof(asn_DEF_XNavigationModel_tags_1)
        /sizeof(asn_DEF_XNavigationModel_tags_1[0]), /* 1 */
    asn_DEF_XNavigationModel_tags_1,    /* Same as above */
    sizeof(asn_DEF_XNavigationModel_tags_1)
        /sizeof(asn_DEF_XNavigationModel_tags_1[0]), /* 1 */
    0,    /* No PER visible constraints */
    asn_MBR_XNavigationModel_1,
    5,    /* Elements count */
    &asn_SPC_XNavigationModel_specs_1    /* Additional specs */
};


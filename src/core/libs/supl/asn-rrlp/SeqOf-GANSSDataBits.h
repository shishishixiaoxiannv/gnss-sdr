/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 *     found in "../rrlp-components.asn"
 */

#ifndef _SeqOf_GANSSDataBits_H_
#define _SeqOf_GANSSDataBits_H_


#include <asn_application.h>

/* Including external dependencies */
#include "GANSSDataBit.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* SeqOf-GANSSDataBits */
    typedef struct SeqOf_GANSSDataBits
    {
        A_SEQUENCE_OF(GANSSDataBit_t)
        list;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } SeqOf_GANSSDataBits_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_SeqOf_GANSSDataBits;

#ifdef __cplusplus
}
#endif

#endif /* _SeqOf_GANSSDataBits_H_ */
#include <asn_internal.h>

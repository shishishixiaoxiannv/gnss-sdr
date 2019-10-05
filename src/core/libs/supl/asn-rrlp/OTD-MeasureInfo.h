/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 *     found in "../rrlp-components.asn"
 */

#ifndef _OTD_MeasureInfo_H_
#define _OTD_MeasureInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "OTD-MsrElementFirst.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* Forward declarations */
    struct SeqOfOTD_MsrElementRest;

    /* OTD-MeasureInfo */
    typedef struct OTD_MeasureInfo
    {
        OTD_MsrElementFirst_t otdMsrFirstSets;
        struct SeqOfOTD_MsrElementRest *otdMsrRestSets /* OPTIONAL */;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } OTD_MeasureInfo_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_OTD_MeasureInfo;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SeqOfOTD-MsrElementRest.h"

#endif /* _OTD_MeasureInfo_H_ */
#include <asn_internal.h>

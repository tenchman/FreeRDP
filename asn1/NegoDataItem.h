/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "CREDSSP"
 * 	found in "credssp.asn1"
 * 	`asn1c -fnative-types -fskeletons-copy`
 */

#ifndef	_NegoDataItem_H_
#define	_NegoDataItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NegoDataItem */
typedef struct NegoDataItem {
	OCTET_STRING_t	 negoToken;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NegoDataItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NegoDataItem;

#ifdef __cplusplus
}
#endif

#endif	/* _NegoDataItem_H_ */

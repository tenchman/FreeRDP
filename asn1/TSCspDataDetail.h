/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "CREDSSP"
 * 	found in "credssp.asn1"
 * 	`asn1c -fnative-types -fskeletons-copy`
 */

#ifndef	_TSCspDataDetail_H_
#define	_TSCspDataDetail_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TSCspDataDetail */
typedef struct TSCspDataDetail {
	long	 keySpec;
	OCTET_STRING_t	*cardName	/* OPTIONAL */;
	OCTET_STRING_t	*readerName	/* OPTIONAL */;
	OCTET_STRING_t	*containerName	/* OPTIONAL */;
	OCTET_STRING_t	*cspName	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TSCspDataDetail_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TSCspDataDetail;

#ifdef __cplusplus
}
#endif

#endif	/* _TSCspDataDetail_H_ */

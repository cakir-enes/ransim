/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_PortNumber_H_
#define	_PortNumber_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PortNumber */
typedef OCTET_STRING_t	 PortNumber_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_PortNumber_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_PortNumber;
asn_struct_free_f PortNumber_free;
asn_struct_print_f PortNumber_print;
asn_constr_check_f PortNumber_constraint;
ber_type_decoder_f PortNumber_decode_ber;
der_type_encoder_f PortNumber_encode_der;
xer_type_decoder_f PortNumber_decode_xer;
xer_type_encoder_f PortNumber_encode_xer;
oer_type_decoder_f PortNumber_decode_oer;
oer_type_encoder_f PortNumber_encode_oer;
per_type_decoder_f PortNumber_decode_uper;
per_type_encoder_f PortNumber_encode_uper;
per_type_decoder_f PortNumber_decode_aper;
per_type_encoder_f PortNumber_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _PortNumber_H_ */
#include <asn_internal.h>

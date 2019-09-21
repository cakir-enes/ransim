/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_MaskedIMEISV_H_
#define	_MaskedIMEISV_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MaskedIMEISV */
typedef BIT_STRING_t	 MaskedIMEISV_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_MaskedIMEISV_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_MaskedIMEISV;
asn_struct_free_f MaskedIMEISV_free;
asn_struct_print_f MaskedIMEISV_print;
asn_constr_check_f MaskedIMEISV_constraint;
ber_type_decoder_f MaskedIMEISV_decode_ber;
der_type_encoder_f MaskedIMEISV_encode_der;
xer_type_decoder_f MaskedIMEISV_decode_xer;
xer_type_encoder_f MaskedIMEISV_encode_xer;
oer_type_decoder_f MaskedIMEISV_decode_oer;
oer_type_encoder_f MaskedIMEISV_encode_oer;
per_type_decoder_f MaskedIMEISV_decode_uper;
per_type_encoder_f MaskedIMEISV_encode_uper;
per_type_decoder_f MaskedIMEISV_decode_aper;
per_type_encoder_f MaskedIMEISV_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _MaskedIMEISV_H_ */
#include <asn_internal.h>

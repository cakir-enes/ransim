/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "NGAP-IEs.asn"
 * 	`asn1c -fcompound-names`
 */

#ifndef	_ReportArea_H_
#define	_ReportArea_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ReportArea {
	ReportArea_cell	= 0
	/*
	 * Enumeration is extensible
	 */
} e_ReportArea;

/* ReportArea */
typedef long	 ReportArea_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ReportArea_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ReportArea;
extern const asn_INTEGER_specifics_t asn_SPC_ReportArea_specs_1;
asn_struct_free_f ReportArea_free;
asn_struct_print_f ReportArea_print;
asn_constr_check_f ReportArea_constraint;
ber_type_decoder_f ReportArea_decode_ber;
der_type_encoder_f ReportArea_encode_der;
xer_type_decoder_f ReportArea_decode_xer;
xer_type_encoder_f ReportArea_encode_xer;
oer_type_decoder_f ReportArea_decode_oer;
oer_type_encoder_f ReportArea_encode_oer;
per_type_decoder_f ReportArea_decode_uper;
per_type_encoder_f ReportArea_encode_uper;
per_type_decoder_f ReportArea_decode_aper;
per_type_encoder_f ReportArea_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ReportArea_H_ */
#include <asn_internal.h>

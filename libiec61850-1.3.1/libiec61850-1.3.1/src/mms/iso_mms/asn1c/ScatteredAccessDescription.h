/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "MMS"
 * 	found in "../mms-extended.asn"
 * 	`asn1c -fskeletons-copy`
 */

#ifndef	_ScatteredAccessDescription_H_
#define	_ScatteredAccessDescription_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include "Identifier.h"
#include <constr_SEQUENCE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct VariableSpecification;
struct AlternateAccess;

struct ScatteredAccessDescription__Member {
		Identifier_t	*componentName	/* OPTIONAL */;
		struct VariableSpecification	*variableSpecification;
		struct AlternateAccess	*alternateAccess	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	};



/* ScatteredAccessDescription */
typedef struct ScatteredAccessDescription {
	A_SEQUENCE_OF(struct ScatteredAccessDescription__Member) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ScatteredAccessDescription_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ScatteredAccessDescription;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "VariableSpecification.h"
#include "AlternateAccess.h"

#endif	/* _ScatteredAccessDescription_H_ */

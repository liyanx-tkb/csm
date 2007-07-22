#ifndef H_CSM_H
#define H_CSM_H

/* Some preprocessor magic for having fast inline functions. */
#define INLINE static inline
#define INLINE_DECL static inline

/* Some preprocessor magic for the "restrict" keyword:
	http://www.cellperformance.com/mike_acton/2006/05/demystifying_the_restrict_keyw.html */
#if __STDC_VERSION__ >= 199901
#elif defined (__GNUC__) && __GNUC__ >= 2 && __GNUC_MINOR__ >= 91
	#define restrict __restrict__
#else
	#define restrict
#endif

/* Some preprocessor magic for calling this library from C++ */

#ifdef __cplusplus
	#define restrict /* nothing */
	namespace CSM {
	extern "C" {
#endif

#include "laser_data.h"
#include "laser_data_json.h"
#include "algos.h"
#include "utils.h"

#ifdef __cplusplus
	}}
#endif

#endif

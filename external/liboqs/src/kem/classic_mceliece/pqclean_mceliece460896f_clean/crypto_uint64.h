#ifndef PQCLEAN_MCELIECE460896F_CLEAN_crypto_uint64_h
#define PQCLEAN_MCELIECE460896F_CLEAN_crypto_uint64_h

#include <inttypes.h>
typedef uint64_t crypto_uint64;

typedef int64_t crypto_uint64_signed;

#include "namespace.h"

#define crypto_uint64_signed_negative_mask CRYPTO_NAMESPACE(crypto_uint64_signed_negative_mask)
crypto_uint64_signed crypto_uint64_signed_negative_mask(crypto_uint64_signed crypto_uint64_signed_x);
#define crypto_uint64_nonzero_mask CRYPTO_NAMESPACE(crypto_uint64_nonzero_mask)
crypto_uint64 crypto_uint64_nonzero_mask(crypto_uint64 crypto_uint64_x);
#define crypto_uint64_zero_mask CRYPTO_NAMESPACE(crypto_uint64_zero_mask)
crypto_uint64 crypto_uint64_zero_mask(crypto_uint64 crypto_uint64_x);
#define crypto_uint64_unequal_mask CRYPTO_NAMESPACE(crypto_uint64_unequal_mask)
crypto_uint64 crypto_uint64_unequal_mask(crypto_uint64 crypto_uint64_x, crypto_uint64 crypto_uint64_y);
#define crypto_uint64_equal_mask CRYPTO_NAMESPACE(crypto_uint64_equal_mask)
crypto_uint64 crypto_uint64_equal_mask(crypto_uint64 crypto_uint64_x, crypto_uint64 crypto_uint64_y);
#define crypto_uint64_smaller_mask CRYPTO_NAMESPACE(crypto_uint64_smaller_mask)
crypto_uint64 crypto_uint64_smaller_mask(crypto_uint64 crypto_uint64_x, crypto_uint64 crypto_uint64_y);
#define crypto_uint64_min CRYPTO_NAMESPACE(crypto_uint64_min)
crypto_uint64 crypto_uint64_min(crypto_uint64 crypto_uint64_x, crypto_uint64 crypto_uint64_y);
#define crypto_uint64_max CRYPTO_NAMESPACE(crypto_uint64_max)
crypto_uint64 crypto_uint64_max(crypto_uint64 crypto_uint64_x, crypto_uint64 crypto_uint64_y);
#define crypto_uint64_minmax CRYPTO_NAMESPACE(crypto_uint64_minmax)
void crypto_uint64_minmax(crypto_uint64 *crypto_uint64_a, crypto_uint64 *crypto_uint64_b);

#endif

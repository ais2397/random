#	$NetBSD$

LIB=		tomcrypt

.include <bsd.own.mk>

.include "../Makefile.inc"

CPPFLAGS+=	-I.

SRCS=		#

.PATH: ${DIST}/src/ciphers/aes

SRCS+=		aes_tab.c aes.c

.PATH: ${DIST}/src/ciphers

SRCS+=		anubis.c blowfish.c cast5.c des.c kasumi.c khazad.c kseed.c
SRCS+=		multi2.c noekeon.c rc2.c rc5.c rc6.c skipjack.c xtea.c

.PATH: ${DIST}/src/ciphers/safer

SRCS+=		safer.c saferp.c safer_tab.c

.PATH: ${DIST}/src/ciphers/twofish

SRCS+=		twofish.c 

.PATH: ${DIST}/src/encauth/ccm

SRCS+=		ccm_memory.c ccm_test.c

.PATH: ${DIST}/src/encauth/eax

SRCS+=		eax_addheader.c eax_decrypt.c eax_decrypt_verify_memory.c
SRCS+=		eax_done.c eax_encrypt_authenticate_memory.c eax_encrypt.c
SRCS+=		eax_init.c eax_test.c

.PATH: ${DIST}/src/encauth/gcm

SRCS+=		gcm_add_aad.c gcm_add_iv.c gcm_done.c gcm_gf_mult.c gcm_init.c
SRCS+=		gcm_memory.c gcm_mult_h.c gcm_process.c gcm_reset.c gcm_test.c

.PATH: ${DIST}/src/encauth/ocb

SRCS+=		ocb_decrypt.c ocb_decrypt_verify_memory.c ocb_done_decrypt.c
SRCS+=		ocb_done_encrypt.c ocb_encrypt_authenticate_memory.c
SRCS+=		ocb_encrypt.c ocb_init.c ocb_ntz.c ocb_shift_xor.c ocb_test.c
SRCS+=		s_ocb_done.c

.PATH: ${DIST}/src/hashes/chc

SRCS+=		chc.c

.PATH: ${DIST}/src/hashes/helper

SRCS+=		hash_file.c hash_filehandle.c hash_memory.c hash_memory_multi.c

.PATH: ${DIST}/src/hashes

SRCS+=		md2.c md4.c md5.c rmd128.c rmd160.c rmd256.c rmd320.c sha1.c
SRCS+=		tiger.c

.PATH: ${DIST}/src/hashes/sha2

SRCS+=		sha256.c sha512.c

.PATH: ${DIST}/src/hashes/whirl

SRCS+=		whirl.c

.PATH: ${DIST}/src/mac/f9

SRCS+=		f9_done.c f9_file.c f9_init.c f9_memory.c f9_memory_multi.c
SRCS+=		f9_process.c f9_test.c

.PATH: ${DIST}/src/mac/hmac

SRCS+=		hmac_done.c hmac_file.c hmac_init.c hmac_memory.c
SRCS+=		hmac_memory_multi.c hmac_process.c hmac_test.c

.PATH: ${DIST}/src/mac/omac

SRCS+=		omac_done.c omac_file.c omac_init.c omac_memory.c
SRCS+=		omac_memory_multi.c omac_process.c omac_test.c

.PATH: ${DIST}/src/mac/pelican

SRCS+=		pelican.c pelican_memory.c pelican_test.c

.PATH: ${DIST}/src/mac/pmac

SRCS+=		pmac_done.c pmac_file.c pmac_init.c pmac_memory.c
SRCS+=		pmac_memory_multi.c pmac_ntz.c pmac_process.c pmac_shift_xor.c
SRCS+=		pmac_test.c

.PATH: ${DIST}/src/mac/xcbc

SRCS+=		xcbc_done.c xcbc_file.c xcbc_init.c xcbc_memory.c
SRCS+=		xcbc_memory_multi.c xcbc_process.c xcbc_test.c

.PATH: ${DIST}/src/math/fp

SRCS+=		ltc_ecc_fp_mulmod.c

.PATH: ${DIST}/src/math

SRCS+=		gmp_desc.c ltm_desc.c multi.c rand_prime.c tfm_desc.c gmp_desc.c
SRCS+=		ltm_desc.c multi.c rand_prime.c tfm_desc.c rand_prime.c
SRCS+=		tfm_desc.c

.PATH: ${DIST}/src/math/fp

SRCS+=		ltc_ecc_fp_mulmod.c

.PATH: ${DIST}/src/misc/base64

SRCS+=		base64_decode.c base64_encode.c

.PATH: ${DIST}/src/misc

SRCS+=		burn_stack.c error_to_string.c zeromem.c

.PATH: ${DIST}/src/misc/crypt

SRCS+=		crypt_argchk.c crypt.c crypt_cipher_descriptor.c
SRCS+=		crypt_cipher_is_valid.c crypt_find_cipher_any.c
SRCS+=		crypt_find_cipher.c crypt_find_cipher_id.c crypt_find_hash_any.c
SRCS+=		crypt_find_hash.c crypt_find_hash_id.c crypt_find_hash_oid.c
SRCS+=		crypt_find_prng.c crypt_fsa.c crypt_hash_descriptor.c
SRCS+=		crypt_hash_is_valid.c crypt_ltc_mp_descriptor.c
SRCS+=		crypt_prng_descriptor.c crypt_prng_is_valid.c
SRCS+=		crypt_register_cipher.c crypt_register_hash.c
SRCS+=		crypt_register_prng.c crypt_unregister_cipher.c
SRCS+=		crypt_unregister_hash.c crypt_unregister_prng.c

.PATH: ${DIST}/src/misc/pkcs5

SRCS+=		pkcs_5_1.c pkcs_5_2.c

.PATH: ${DIST}/src/modes/cbc

SRCS+=		cbc_decrypt.c cbc_done.c cbc_encrypt.c cbc_getiv.c cbc_setiv.c
SRCS+=		cbc_start.c

.PATH: ${DIST}/src/modes/cfb

SRCS+=		cfb_decrypt.c cfb_done.c cfb_encrypt.c cfb_getiv.c cfb_setiv.c
SRCS+=		cfb_start.c

.PATH: ${DIST}/src/modes/ctr

SRCS+=		ctr_decrypt.c ctr_done.c ctr_encrypt.c ctr_getiv.c ctr_setiv.c
SRCS+=		ctr_start.c ctr_test.c

.PATH: ${DIST}/src/modes/ecb

SRCS+=		ecb_decrypt.c ecb_done.c ecb_encrypt.c ecb_start.c

.PATH: ${DIST}/src/modes/f8

SRCS+=		f8_decrypt.c f8_done.c f8_encrypt.c f8_getiv.c f8_setiv.c
SRCS+=		f8_start.c f8_test_mode.c

.PATH: ${DIST}/src/modes/lrw

SRCS+=		lrw_decrypt.c lrw_done.c lrw_encrypt.c lrw_getiv.c lrw_process.c
SRCS+=		lrw_setiv.c lrw_start.c lrw_test.c

.PATH: ${DIST}/src/modes/ofb

SRCS+=		ofb_decrypt.c ofb_done.c ofb_encrypt.c ofb_getiv.c ofb_setiv.c
SRCS+=		ofb_start.c

.PATH: ${DIST}/src/modes/xts

SRCS+=		xts_decrypt.c xts_done.c xts_encrypt.c xts_init.c xts_mult_x.c
SRCS+=		xts_test.c

.PATH: ${DIST}/src/pk/asn1/der/bit

SRCS+=		der_decode_bit_string.c der_encode_bit_string.c
SRCS+=		der_length_bit_string.c

.PATH: ${DIST}/src/pk/asn1/der/boolean

SRCS+=		der_decode_boolean.c der_encode_boolean.c der_length_boolean.c

.PATH: ${DIST}/src/pk/asn1/der/choice

SRCS+=		der_decode_choice.c

.PATH: ${DIST}/src/pk/asn1/der/ia5

SRCS+=		der_decode_ia5_string.c der_encode_ia5_string.c
SRCS+=		der_length_ia5_string.c

.PATH: ${DIST}/src/pk/asn1/der/integer

SRCS+=		der_decode_integer.c der_encode_integer.c der_length_integer.c

.PATH: ${DIST}/src/pk/asn1/der/object_identifier

SRCS+=		der_decode_object_identifier.c der_encode_object_identifier.c
SRCS+=		der_length_object_identifier.c

.PATH: ${DIST}/src/pk/asn1/der/octet

SRCS+=		der_decode_octet_string.c der_encode_octet_string.c
SRCS+=		der_length_octet_string.c

.PATH: ${DIST}/src/pk/asn1/der/printable_string

SRCS+=		der_decode_printable_string.c der_encode_printable_string.c
SRCS+=		der_length_printable_string.c

.PATH: ${DIST}/src/pk/asn1/der/sequence

SRCS+=		der_decode_sequence_ex.c der_decode_sequence_flexi.c
SRCS+=		der_decode_sequence_multi.c der_encode_sequence_ex.c
SRCS+=		der_encode_sequence_multi.c der_length_sequence.c
SRCS+=		der_sequence_free.c

.PATH: ${DIST}/src/pk/asn1/der/set

SRCS+=		der_encode_set.c der_encode_setof.c

.PATH: ${DIST}/src/pk/asn1/der/short_integer

SRCS+=		der_decode_short_integer.c der_encode_short_integer.c
SRCS+=		der_length_short_integer.c

.PATH: ${DIST}/src/pk/asn1/der/utctime

SRCS+=		der_decode_utctime.c der_encode_utctime.c der_length_utctime.c

.PATH: ${DIST}/src/pk/asn1/der/utf8

SRCS+=		der_decode_utf8_string.c der_encode_utf8_string.c
SRCS+=		der_length_utf8_string.c

.PATH: ${DIST}/src/pk/dsa

SRCS+=		dsa_decrypt_key.c dsa_encrypt_key.c dsa_export.c dsa_free.c
SRCS+=		dsa_import.c dsa_make_key.c dsa_shared_secret.c dsa_sign_hash.c
SRCS+=		dsa_verify_hash.c dsa_verify_key.c

.PATH: ${DIST}/src/pk/ecc

SRCS+=		ecc_ansi_x963_export.c ecc_ansi_x963_import.c ecc.c
SRCS+=		ecc_decrypt_key.c ecc_encrypt_key.c ecc_export.c ecc_free.c
SRCS+=		ecc_get_size.c ecc_import.c ecc_make_key.c ecc_shared_secret.c
SRCS+=		ecc_sign_hash.c ecc_sizes.c ecc_test.c ecc_verify_hash.c
SRCS+=		ltc_ecc_is_valid_idx.c ltc_ecc_map.c ltc_ecc_mul2add.c
SRCS+=		ltc_ecc_mulmod.c ltc_ecc_mulmod_timing.c ltc_ecc_points.c
SRCS+=		ltc_ecc_projective_add_point.c ltc_ecc_projective_dbl_point.c

.PATH: ${DIST}/src/pk/katja

SRCS+=		katja_decrypt_key.c katja_encrypt_key.c katja_export.c
SRCS+=		katja_exptmod.c katja_free.c katja_import.c katja_make_key.c

.PATH: ${DIST}/src/pk/pkcs1

SRCS+=		pkcs_1_i2osp.c pkcs_1_mgf1.c pkcs_1_oaep_decode.c
SRCS+=		pkcs_1_oaep_encode.c pkcs_1_os2ip.c pkcs_1_pss_decode.c
SRCS+=		pkcs_1_pss_encode.c pkcs_1_v1_5_decode.c pkcs_1_v1_5_encode.c

.PATH: ${DIST}/src/pk/rsa

SRCS+=		rsa_decrypt_key.c rsa_encrypt_key.c rsa_export.c rsa_exptmod.c
SRCS+=		rsa_free.c rsa_import.c rsa_make_key.c rsa_sign_hash.c
SRCS+=		rsa_verify_hash.c

.PATH: ${DIST}/src/prngs

SRCS+=		fortuna.c rc4.c rng_get_bytes.c rng_make_prng.c sober128.c
SRCS+=		sprng.c yarrow.c

.PATH: ${DIST}/src/headers

INCS=		#
INCS+=		tomcrypt.h
INCS+=		tomcrypt_argchk.h
INCS+=		tomcrypt_cfg.h
INCS+=		tomcrypt_cipher.h
INCS+=		tomcrypt_custom.h
INCS+=		tomcrypt_hash.h
INCS+=		tomcrypt_mac.h
INCS+=		tomcrypt_macros.h
INCS+=		tomcrypt_math.h
INCS+=		tomcrypt_misc.h
INCS+=		tomcrypt_pk.h
INCS+=		tomcrypt_pkcs.h
INCS+=		tomcrypt_prng.h

#.PATH: ${DIST}/testprof

#INCS+=		tomcrypt_test.h

INCSDIR=	/usr/include

.include <bsd.lib.mk>

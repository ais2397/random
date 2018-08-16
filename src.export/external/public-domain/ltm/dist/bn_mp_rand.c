#include <tommath_private.h>
#ifdef BN_MP_RAND_C
/* LibTomMath, multiple-precision integer library -- Tom St Denis
 *
 * LibTomMath is a library that provides multiple-precision
 * integer arithmetic as well as number theoretic functionality.
 *
 * The library was designed directly after the MPI library by
 * Michael Fromberger but has been written from scratch with
 * additional optimizations in place.
 *
 * The library is free for all purposes without any express
 * guarantee it works.
 *
 * Tom St Denis, tstdenis82@gmail.com, http://libtom.org
 */

#if MP_GEN_RANDOM_MAX == 0xffffffff
  #define MP_GEN_RANDOM_SHIFT  32
#elif MP_GEN_RANDOM_MAX == 32767
  /* SHRT_MAX */
  #define MP_GEN_RANDOM_SHIFT  15
#elif MP_GEN_RANDOM_MAX == 2147483647
  /* INT_MAX */
  #define MP_GEN_RANDOM_SHIFT  31
#elif !defined(MP_GEN_RANDOM_SHIFT)
#error Thou shalt define their own valid MP_GEN_RANDOM_SHIFT
#endif

/* makes a pseudo-random int of a given size */
static mp_digit s_gen_random(void)
{
#if (MP_GEN_RANDOM_SHIFT == 32) && !defined(MP_64BIT)
  return MP_GEN_RANDOM();
#else
  mp_digit d = 0, msk = 0;
  do {
    d <<= MP_GEN_RANDOM_SHIFT;
    d |= ((mp_digit) MP_GEN_RANDOM());
    msk <<= MP_GEN_RANDOM_SHIFT;
    msk |= (MP_MASK & MP_GEN_RANDOM_MAX);
  } while ((MP_MASK & msk) != MP_MASK);
  d &= MP_MASK;
  return d;
#endif
}

int
mp_rand (mp_int * a, int digits)
{
  int     res;
  mp_digit d;

  mp_zero (a);
  if (digits <= 0) {
    return MP_OKAY;
  }

  /* first place a random non-zero digit */
  do {
    d = s_gen_random();
  } while (d == 0);

  if ((res = mp_add_d (a, d, a)) != MP_OKAY) {
    return res;
  }

  while (--digits > 0) {
    if ((res = mp_lshd (a, 1)) != MP_OKAY) {
      return res;
    }

    if ((res = mp_add_d (a, s_gen_random(), a)) != MP_OKAY) {
      return res;
    }
  }

  return MP_OKAY;
}
#endif

/* ref:         HEAD -> master, tag: v1.0.1 */
/* git commit:  5953f62e42b24af93748b1ee5e1d062e242c2546 */
/* commit time: 2017-08-29 22:27:36 +0200 */

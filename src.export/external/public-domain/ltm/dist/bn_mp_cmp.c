#include <tommath_private.h>
#ifdef BN_MP_CMP_C
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

/* compare two ints (signed)*/
int
mp_cmp (mp_int * a, mp_int * b)
{
  /* compare based on sign */
  if (a->sign != b->sign) {
     if (a->sign == MP_NEG) {
        return MP_LT;
     } else {
        return MP_GT;
     }
  }
  
  /* compare digits */
  if (a->sign == MP_NEG) {
     /* if negative compare opposite direction */
     return mp_cmp_mag(b, a);
  } else {
     return mp_cmp_mag(a, b);
  }
}
#endif

/* ref:         HEAD -> master, tag: v1.0.1 */
/* git commit:  5953f62e42b24af93748b1ee5e1d062e242c2546 */
/* commit time: 2017-08-29 22:27:36 +0200 */

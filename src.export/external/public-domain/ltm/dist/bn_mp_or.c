#include <tommath_private.h>
#ifdef BN_MP_OR_C
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

/* OR two ints together */
int mp_or (mp_int * a, mp_int * b, mp_int * c)
{
  int     res, ix, px;
  mp_int  t, *x;

  if (a->used > b->used) {
    if ((res = mp_init_copy (&t, a)) != MP_OKAY) {
      return res;
    }
    px = b->used;
    x = b;
  } else {
    if ((res = mp_init_copy (&t, b)) != MP_OKAY) {
      return res;
    }
    px = a->used;
    x = a;
  }

  for (ix = 0; ix < px; ix++) {
    t.dp[ix] |= x->dp[ix];
  }
  mp_clamp (&t);
  mp_exch (c, &t);
  mp_clear (&t);
  return MP_OKAY;
}
#endif

/* ref:         HEAD -> master, tag: v1.0.1 */
/* git commit:  5953f62e42b24af93748b1ee5e1d062e242c2546 */
/* commit time: 2017-08-29 22:27:36 +0200 */

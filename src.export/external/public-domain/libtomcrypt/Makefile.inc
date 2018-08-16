#	$NetBSD$

DIST=${NETBSDSRCDIR}/external/public-domain/libtomcrypt/dist

.include <bsd.own.mk>

CPPFLAGS+= -I${DIST}

.PATH:	${DIST}

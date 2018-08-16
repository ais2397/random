#	$NetBSD$

DIST=${NETBSDSRCDIR}/external/public-domain/ltm/dist

.include <bsd.own.mk>

CPPFLAGS+= -I${DIST}

.PATH:	${DIST}

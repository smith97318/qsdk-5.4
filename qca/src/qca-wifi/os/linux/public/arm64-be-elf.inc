#
# Copyright (c) 2020 Qualcomm Innovation Center, Inc.
# All Rights Reserved.
# Confidential and Proprietary - Qualcomm Innovation Center, Inc.
#
# Copyright (c) 2010, Atheros Communications Inc.
#
# Permission to use, copy, modify, and/or distribute this software for any
# purpose with or without fee is hereby granted, provided that the above
# copyright notice and this permission notice appear in all copies.
#
# THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
# WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
# MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
# ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
# WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
# ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
# OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
#

ifndef TOOLPREFIX
TOOLPREFIX=	/pub/gnu/bin/arm-elf-
endif
#
CC=	${TOOLPREFIX}gcc
LD=	${TOOLPREFIX}ld
STRIP=	${TOOLPREFIX}strip
OBJCOPY=${TOOLPREFIX}objcopy
NM=	${TOOLPREFIX}nm

LDOPTS=	-EL
COPTS+=	-DAH_BYTE_ORDER=AH_BIG_ENDIAN
COPTS+= -DBIG_ENDIAN_HOST=1
COPTS+= -mbig-endian -fno-strict-aliasing -fno-common
COPTS+= -mcmodel=large
COPTS+= -Wno-error=int-to-pointer-cast

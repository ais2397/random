/* $Id: imx23_uartdbgreg.h,v 1.1 2012/11/20 19:06:14 jkunz Exp $ */

/*
 * Copyright (c) 2012 The NetBSD Foundation, Inc.
 * All rights reserved.
 *
 * This code is derived from software contributed to The NetBSD Foundation
 * by Petri Laakso.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE NETBSD FOUNDATION, INC. AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE FOUNDATION OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _ARM_IMX_IMX23_UARTDBGREG_H_
#define _ARM_IMX_IMX23_UARTDBGREG_H_

#ifdef _LOCORE
#include <machine/asm.h>
#else
#include <sys/cdefs.h>
#endif /* !_LOCORE */

#define HW_UARTDBG_BASE	0x80070000
#define HW_UARTDBG_SIZE	0x00002000 /* 8kB */

/*
 * UART Data Register.
 */
#define HW_UARTDBGDR	0x000

#define HW_UARTDBGDR_UNAVAILABLE	__BITS(31, 16)
#define HW_UARTDBGDR_RESERVED		__BITS(15, 12)
#define HW_UARTDBGDR_OE			__BIT(11)
#define HW_UARTDBGDR_BE			__BIT(10)
#define HW_UARTDBGDR_PE			__BIT(9)
#define HW_UARTDBGDR_FE			__BIT(8)
#define HW_UARTDBGDR_DATA		__BITS(7,0)

/*
 * UART Receive Status Register.
 */
#define HW_UARTDBGRSR_ECR	0x004

#define HW_UARTDBGRSR_ECR_UNAVAILABLE	__BITS(31, 8)
#define HW_UARTDBGRSR_ECR_EC		__BITS(7, 4)
#define HW_UARTDBGRSR_ECR_OE		__BIT(3)
#define HW_UARTDBGRSR_ECR_BE		__BIT(2)
#define HW_UARTDBGRSR_ECR_PE		__BIT(1)
#define HW_UARTDBGRSR_ECR_FE		__BIT(0)

/*
 * UART Flag Register.
 */
#define HW_UARTDBGFR	0x018

#define HW_UARTDBGFR_RUNAVAILABLE	__BITS(31, 16)
#define HW_UARTDBGFR_RESERVED		__BITS(15, 9)
#define HW_UARTDBGFR_RI			__BIT(8)
#define HW_UARTDBGFR_TXFE		__BIT(7)
#define HW_UARTDBGFR_RXFF		__BIT(6)
#define HW_UARTDBGFR_TXFF		__BIT(5)
#define HW_UARTDBGFR_RXFE		__BIT(4)
#define HW_UARTDBGFR_BUSY		__BIT(3)
#define HW_UARTDBGFR_DCD		__BIT(2)
#define HW_UARTDBGFR_DSR		__BIT(1)
#define HW_UARTDBGFR_CTS		__BIT(0)

/*
 * UART IrDA Low-Power Counter Register.
 */
#define HW_UARTDBGILPR	0x020

#define HW_UARTDBGILPR_UNAVAILABLE	__BITS(31, 8)
#define HW_UARTDBGILPR_ILPDVSR		__BIT(7, 0)

/*
 * UART Integer Baud Rate Divisor Register.
 */
#define HW_UARTDBGIBRD	0x024

#define HW_UARTDBGIBRD_UNAVAILABLE	__BITS(31, 16)
#define HW_UARTDBGIBRD_BAUD_DIVINT	__BITS(15, 0)

/*
 * UART Fractional Baud Rate Divisor Register.
 */
#define HW_UARTDBGFBRD	0x028

#define HW_UARTDBGFBRD_UNAVAILABLE	__BITS(31, 8)
#define HW_UARTDBGFBRD_RESERVED		__BITS(7, 6)
#define HW_UARTDBGFBRD_BAUD_DIVFRAC	__BITS(5, 0)

/*
 * UART Line Control Register.
 */
#define HW_UARTDBGLCR_H	0x02C

#define HW_UARTDBGLCR_H_UNAVAILABLE	__BITS(31, 16)
#define HW_UARTDBGLCR_H_RESERVED	__BITS(15, 8)
#define HW_UARTDBGLCR_H_SPS		__BIT(7)
#define HW_UARTDBGLCR_H_WLEN		__BITS(6, 5)
#define HW_UARTDBGLCR_H_FEN		__BIT(4)
#define HW_UARTDBGLCR_H_STP2		__BIT(3)
#define HW_UARTDBGLCR_H_EPS		__BIT(2)
#define HW_UARTDBGLCR_H_PEN		__BIT(1)
#define HW_UARTDBGLCR_H_BRK		__BIT(0)

/*
 * UART Control Register.
 */
#define HW_UARTDBGCR	0x030

#define HW_UARTDBGCR_UNAVAILABLE	__BITS(31, 16)
#define HW_UARTDBGCR_CTSEN		__BIT(15)
#define HW_UARTDBGCR_RTSEN		__BIT(14)
#define HW_UARTDBGCR_OUT2		__BIT(13)
#define HW_UARTDBGCR_OUT1		__BIT(12)
#define HW_UARTDBGCR_RTS		__BIT(11)
#define HW_UARTDBGCR_DTR		__BIT(10)
#define HW_UARTDBGCR_RXE		__BIT(9)
#define HW_UARTDBGCR_TXE		__BIT(8)
#define HW_UARTDBGCR_LBE		__BIT(7)
#define HW_UARTDBGCR_RESERVED		__BITS(6, 3)
#define HW_UARTDBGCR_SIRLP		__BIT(2)
#define HW_UARTDBGCR_SIREN		__BIT(1)
#define HW_UARTDBGCR_UARTEN		__BIT(0)

/*
 * UART Interrupt FIFO Level Select Register.
 */
#define HW_UARTDBGIFLS	0x034

#define HW_UARTDBGIFLS_UNAVAILABLE	__BITS(31, 16)
#define HW_UARTDBGIFLS_RESERVED		__BITS(15, 6)
#define HW_UARTDBGIFLS_RXIFLSEL		__BITS(5, 3)
#define HW_UARTDBGIFLS_TXIFLSEL		__BITS(2, 0)

/*
 * UART Interrupt Mask Set/Clear Register.
 */
#define HW_UARTDBGIMSC	0x038

#define HW_UARTDBGIMSC_UNAVAILABLE	__BITS(31, 16)
#define HW_UARTDBGIMSC_RESERVED		__BITS(15, 11)
#define HW_UARTDBGIMSC_OEIM		__BIT(10)
#define HW_UARTDBGIMSC_BEIM		__BIT(9)
#define HW_UARTDBGIMSC_PEIM		__BIT(8)
#define HW_UARTDBGIMSC_FEIM		__BIT(7)
#define HW_UARTDBGIMSC_RTIM		__BIT(6)
#define HW_UARTDBGIMSC_TXIM		__BIT(5)
#define HW_UARTDBGIMSC_RXIM		__BIT(4)
#define HW_UARTDBGIMSC_DSRMIM		__BIT(3)
#define HW_UARTDBGIMSC_DCDMIM		__BIT(2)
#define HW_UARTDBGIMSC_CTSMIM		__BIT(1)
#define HW_UARTDBGIMSC_RIMIM		__BIT(0)

/*
 * UART Raw Interrupt Status Register.
 */
#define HW_UARTDBGRIS	0x03C

#define HW_UARTDBGRIS_UNAVAILABLE	__BITS(31, 16)
#define HW_UARTDBGRIS_RESERVED		__BITS(15, 11)
#define HW_UARTDBGRIS_OERIS		__BIT(10)
#define HW_UARTDBGRIS_BERIS		__BIT(9)
#define HW_UARTDBGRIS_PERIS		__BIT(8)
#define HW_UARTDBGRIS_FERIS		__BIT(7)
#define HW_UARTDBGRIS_RTRIS		__BIT(6)
#define HW_UARTDBGRIS_TXRIS		__BIT(5)
#define HW_UARTDBGRIS_RXRIS		__BIT(4)
#define HW_UARTDBGRIS_DSRRMIS		__BIT(3)
#define HW_UARTDBGRIS_DCDRMIS		__BIT(2)
#define HW_UARTDBGRIS_CTSRMIS		__BIT(1)
#define HW_UARTDBGRIS_RIRMIS		__BIT(0)

/*
 * UART Masked Interrupt Status Register.
 */
#define HW_UARTDBGMIS	0x040

#define HW_UARTDBGMIS_UNAVAILABLE	__BITS(31, 16)
#define HW_UARTDBGMIS_RESERVED		__BITS(15, 11)
#define HW_UARTDBGMIS_OEMIS		__BIT(10)
#define HW_UARTDBGMIS_BEMIS		__BIT(9)
#define HW_UARTDBGMIS_PEMIS		__BIT(8)
#define HW_UARTDBGMIS_FEMIS		__BIT(7)
#define HW_UARTDBGMIS_RTMIS		__BIT(6)
#define HW_UARTDBGMIS_TXMIS		__BIT(5)
#define HW_UARTDBGMIS_RXMIS		__BIT(4)
#define HW_UARTDBGMIS_DSRMMIS		__BIT(3)
#define HW_UARTDBGMIS_DCDMMIS		__BIT(2)
#define HW_UARTDBGMIS_CTSMMIS		__BIT(1)
#define HW_UARTDBGMIS_RIMMIS		__BIT(0)

/*
 * UART Interrupt Clear Register.
 */
#define HW_UARTDBGICR	0x044

#define HW_UARTDBGICR_UNAVAILABLE	__BITS(31, 16)
#define HW_UARTDBGICR_RESERVED		__BITS(15, 11)
#define HW_UARTDBGICR_OEIC		__BIT(10)
#define HW_UARTDBGICR_BEIC		__BIT(9)
#define HW_UARTDBGICR_PEIC		__BIT(8)
#define HW_UARTDBGICR_FEIC		__BIT(7)
#define HW_UARTDBGICR_RTIC		__BIT(6)
#define HW_UARTDBGICR_TXIC		__BIT(5)
#define HW_UARTDBGICR_RXIC		__BIT(4)
#define HW_UARTDBGICR_DSRMIC		__BIT(3)
#define HW_UARTDBGICR_DCDMIC		__BIT(2)
#define HW_UARTDBGICR_CTSMIC		__BIT(1)
#define HW_UARTDBGICR_RIMIC		__BIT(0)

/*
 * UART DMA Control Register.
 */
#define HW_UARTDBGDMACR	0x048

#define HW_UARTDBGDMACR_UNAVAILABLE	__BITS(31, 16)
#define HW_UARTDBGDMACR_RESERVED	__BITS(15, 3)
#define HW_UARTDBGDMACR_DMAONERR	__BIT(2)
#define HW_UARTDBGDMACR_TXDMAE		__BIT(1)
#define HW_UARTDBGDMACR_RXDMAE		__BIT(0)

#endif /* !_ARM_IMX_IMX23_UARTDBGREG_H_ */
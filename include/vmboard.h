/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005-2015
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

#ifndef _VMBOARD_SDK_H
#define _VMBOARD_SDK_H

#ifdef __cplusplus
extern "C" {
#endif

#include "vmtype.h"

/* pin mux mode */

typedef enum
{
    VM_DCL_PIN_MODE_GPIO = 1,  // gpio mode
    VM_DCL_PIN_MODE_ADC,       // adc mode
    VM_DCL_PIN_MODE_PWM,       // pwm mode
    VM_DCL_PIN_MODE_UART,      // uart mode
    VM_DCL_PIN_MODE_EINT,      // eint mode
    VM_DCL_PIN_MODE_SPI,       // spi mode
    VM_DCL_PIN_MODE_I2C,       // i2c mode
    VM_DCL_PIN_MODE_SDIO,      // sdio mode
    VM_DCL_PIN_MODE_DBI_C,     // dbi mode
} VM_DCL_PIN_MODE;

#define VM_PIN_P0    3
#define VM_PIN_P1   27
#define VM_PIN_P2   28
#define VM_PIN_P3   29
#define VM_PIN_P4   19
#define VM_PIN_P5   43
#define VM_PIN_P6   44
#define VM_PIN_P7   10
#define VM_PIN_P8   11
#define VM_PIN_P9    1
#define VM_PIN_P10   2
#define VM_PIN_P11  25
#define VM_PIN_P12  17
#define VM_PIN_P13  15
#define VM_PIN_P14  12
#define VM_PIN_P15  13
#define VM_PIN_P16  18
#define VM_PIN_P17  47
#define VM_PIN_P18  48
#define VM_PIN_P19  49
#define VM_PIN_P20  50
#define VM_PIN_P21  46
#define VM_PIN_P22  30


#ifdef __cplusplus
}
#endif

#endif /* _VMBOARD_SDK_H */


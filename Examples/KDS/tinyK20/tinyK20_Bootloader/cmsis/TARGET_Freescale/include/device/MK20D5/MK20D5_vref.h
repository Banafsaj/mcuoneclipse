/*
 * Copyright (c) 2014, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * THIS SOFTWARE IS PROVIDED BY FREESCALE "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT
 * SHALL FREESCALE BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
 * OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY
 * OF SUCH DAMAGE.
 */
/*
 * WARNING! DO NOT EDIT THIS FILE DIRECTLY!
 *
 * This file was generated automatically and any changes may be lost.
 */
#ifndef __HW_VREF_REGISTERS_H__
#define __HW_VREF_REGISTERS_H__

#include "MK20D5.h"
#include "fsl_bitband.h"

/*
 * MK20D5 VREF
 *
 * Voltage Reference
 *
 * Registers defined in this header file:
 * - HW_VREF_TRM - VREF Trim Register
 * - HW_VREF_SC - VREF Status and Control Register
 *
 * - hw_vref_t - Struct containing all module registers.
 */

#define HW_VREF_INSTANCE_COUNT (1U) /*!< Number of instances of the VREF module. */

/*******************************************************************************
 * HW_VREF_TRM - VREF Trim Register
 ******************************************************************************/

/*!
 * @brief HW_VREF_TRM - VREF Trim Register (RW)
 *
 * Reset value: 0x00U
 *
 * This register contains bits that contain the trim data for the Voltage
 * Reference.
 */
typedef union _hw_vref_trm
{
    uint8_t U;
    struct _hw_vref_trm_bitfields
    {
        uint8_t TRIM : 6;              /*!< [5:0] Trim bits */
        uint8_t CHOPEN : 1;            /*!< [6] Chop oscillator enable. When set,
                                        * internal chopping operation is enabled and the internal analog offset will be
                                        * minimized. */
        uint8_t RESERVED0 : 1;         /*!< [7]  */
    } B;
} hw_vref_trm_t;

/*!
 * @name Constants and macros for entire VREF_TRM register
 */
/*@{*/
#define HW_VREF_TRM_ADDR(x)      ((x) + 0x0U)

#define HW_VREF_TRM(x)           (*(__IO hw_vref_trm_t *) HW_VREF_TRM_ADDR(x))
#define HW_VREF_TRM_RD(x)        (HW_VREF_TRM(x).U)
#define HW_VREF_TRM_WR(x, v)     (HW_VREF_TRM(x).U = (v))
#define HW_VREF_TRM_SET(x, v)    (HW_VREF_TRM_WR(x, HW_VREF_TRM_RD(x) |  (v)))
#define HW_VREF_TRM_CLR(x, v)    (HW_VREF_TRM_WR(x, HW_VREF_TRM_RD(x) & ~(v)))
#define HW_VREF_TRM_TOG(x, v)    (HW_VREF_TRM_WR(x, HW_VREF_TRM_RD(x) ^  (v)))
/*@}*/

/*
 * Constants & macros for individual VREF_TRM bitfields
 */

/*!
 * @name Register VREF_TRM, field TRIM[5:0] (RW)
 *
 * These bits change the resulting VREF by approximately +/- 0.5 mV for each
 * step. Min = minimum and max = maximum voltage reference output. For minimum and
 * maximum voltage reference output values, refer to the Data Sheet for this chip.
 *
 * Values:
 * - 000000 - Min
 * - 111111 - Max
 */
/*@{*/
#define BP_VREF_TRM_TRIM     (0U)          /*!< Bit position for VREF_TRM_TRIM. */
#define BM_VREF_TRM_TRIM     (0x3FU)       /*!< Bit mask for VREF_TRM_TRIM. */
#define BS_VREF_TRM_TRIM     (6U)          /*!< Bit field size in bits for VREF_TRM_TRIM. */

/*! @brief Read current value of the VREF_TRM_TRIM field. */
#define BR_VREF_TRM_TRIM(x)  (HW_VREF_TRM(x).B.TRIM)

/*! @brief Format value for bitfield VREF_TRM_TRIM. */
#define BF_VREF_TRM_TRIM(v)  ((uint8_t)((uint8_t)(v) << BP_VREF_TRM_TRIM) & BM_VREF_TRM_TRIM)

/*! @brief Set the TRIM field to a new value. */
#define BW_VREF_TRM_TRIM(x, v) (HW_VREF_TRM_WR(x, (HW_VREF_TRM_RD(x) & ~BM_VREF_TRM_TRIM) | BF_VREF_TRM_TRIM(v)))
/*@}*/

/*!
 * @name Register VREF_TRM, field CHOPEN[6] (RW)
 *
 * Values:
 * - 0 - Chop oscillator is disabled.
 * - 1 - Chop oscillator is enabled.
 */
/*@{*/
#define BP_VREF_TRM_CHOPEN   (6U)          /*!< Bit position for VREF_TRM_CHOPEN. */
#define BM_VREF_TRM_CHOPEN   (0x40U)       /*!< Bit mask for VREF_TRM_CHOPEN. */
#define BS_VREF_TRM_CHOPEN   (1U)          /*!< Bit field size in bits for VREF_TRM_CHOPEN. */

/*! @brief Read current value of the VREF_TRM_CHOPEN field. */
#define BR_VREF_TRM_CHOPEN(x) (BITBAND_ACCESS8(HW_VREF_TRM_ADDR(x), BP_VREF_TRM_CHOPEN))

/*! @brief Format value for bitfield VREF_TRM_CHOPEN. */
#define BF_VREF_TRM_CHOPEN(v) ((uint8_t)((uint8_t)(v) << BP_VREF_TRM_CHOPEN) & BM_VREF_TRM_CHOPEN)

/*! @brief Set the CHOPEN field to a new value. */
#define BW_VREF_TRM_CHOPEN(x, v) (BITBAND_ACCESS8(HW_VREF_TRM_ADDR(x), BP_VREF_TRM_CHOPEN) = (v))
/*@}*/

/*******************************************************************************
 * HW_VREF_SC - VREF Status and Control Register
 ******************************************************************************/

/*!
 * @brief HW_VREF_SC - VREF Status and Control Register (RW)
 *
 * Reset value: 0x00U
 *
 * This register contains the control bits used to enable the internal voltage
 * reference and to select the buffer mode to be used.
 */
typedef union _hw_vref_sc
{
    uint8_t U;
    struct _hw_vref_sc_bitfields
    {
        uint8_t MODE_LV : 2;           /*!< [1:0] Buffer Mode selection */
        uint8_t VREFST : 1;            /*!< [2] Internal Voltage Reference stable */
        uint8_t RESERVED0 : 3;         /*!< [5:3]  */
        uint8_t REGEN : 1;             /*!< [6] Regulator enable */
        uint8_t VREFEN : 1;            /*!< [7] Internal Voltage Reference enable */
    } B;
} hw_vref_sc_t;

/*!
 * @name Constants and macros for entire VREF_SC register
 */
/*@{*/
#define HW_VREF_SC_ADDR(x)       ((x) + 0x1U)

#define HW_VREF_SC(x)            (*(__IO hw_vref_sc_t *) HW_VREF_SC_ADDR(x))
#define HW_VREF_SC_RD(x)         (HW_VREF_SC(x).U)
#define HW_VREF_SC_WR(x, v)      (HW_VREF_SC(x).U = (v))
#define HW_VREF_SC_SET(x, v)     (HW_VREF_SC_WR(x, HW_VREF_SC_RD(x) |  (v)))
#define HW_VREF_SC_CLR(x, v)     (HW_VREF_SC_WR(x, HW_VREF_SC_RD(x) & ~(v)))
#define HW_VREF_SC_TOG(x, v)     (HW_VREF_SC_WR(x, HW_VREF_SC_RD(x) ^  (v)))
/*@}*/

/*
 * Constants & macros for individual VREF_SC bitfields
 */

/*!
 * @name Register VREF_SC, field MODE_LV[1:0] (RW)
 *
 * These bits select the buffer modes for the Voltage Reference module.
 *
 * Values:
 * - 00 - Bandgap on only, for stabilization and startup
 * - 01 - Low-power buffer mode enabled
 * - 10 - Tight-regulation buffer enabled
 * - 11 - Reserved
 */
/*@{*/
#define BP_VREF_SC_MODE_LV   (0U)          /*!< Bit position for VREF_SC_MODE_LV. */
#define BM_VREF_SC_MODE_LV   (0x03U)       /*!< Bit mask for VREF_SC_MODE_LV. */
#define BS_VREF_SC_MODE_LV   (2U)          /*!< Bit field size in bits for VREF_SC_MODE_LV. */

/*! @brief Read current value of the VREF_SC_MODE_LV field. */
#define BR_VREF_SC_MODE_LV(x) (HW_VREF_SC(x).B.MODE_LV)

/*! @brief Format value for bitfield VREF_SC_MODE_LV. */
#define BF_VREF_SC_MODE_LV(v) ((uint8_t)((uint8_t)(v) << BP_VREF_SC_MODE_LV) & BM_VREF_SC_MODE_LV)

/*! @brief Set the MODE_LV field to a new value. */
#define BW_VREF_SC_MODE_LV(x, v) (HW_VREF_SC_WR(x, (HW_VREF_SC_RD(x) & ~BM_VREF_SC_MODE_LV) | BF_VREF_SC_MODE_LV(v)))
/*@}*/

/*!
 * @name Register VREF_SC, field VREFST[2] (RO)
 *
 * This bit indicates that the Voltage Reference module has completed its
 * startup and stabilization.
 *
 * Values:
 * - 0 - The module is disabled or not stable.
 * - 1 - The module is stable.
 */
/*@{*/
#define BP_VREF_SC_VREFST    (2U)          /*!< Bit position for VREF_SC_VREFST. */
#define BM_VREF_SC_VREFST    (0x04U)       /*!< Bit mask for VREF_SC_VREFST. */
#define BS_VREF_SC_VREFST    (1U)          /*!< Bit field size in bits for VREF_SC_VREFST. */

/*! @brief Read current value of the VREF_SC_VREFST field. */
#define BR_VREF_SC_VREFST(x) (BITBAND_ACCESS8(HW_VREF_SC_ADDR(x), BP_VREF_SC_VREFST))
/*@}*/

/*!
 * @name Register VREF_SC, field REGEN[6] (RW)
 *
 * This bit is used to enable the internal 1.75 V regulator to produce a stable
 * voltage reference in order to reduce the supply variation.
 *
 * Values:
 * - 0 - Internal 1.75 V regulator is disabled.
 * - 1 - Internal 1.75 V regulator is enabled.
 */
/*@{*/
#define BP_VREF_SC_REGEN     (6U)          /*!< Bit position for VREF_SC_REGEN. */
#define BM_VREF_SC_REGEN     (0x40U)       /*!< Bit mask for VREF_SC_REGEN. */
#define BS_VREF_SC_REGEN     (1U)          /*!< Bit field size in bits for VREF_SC_REGEN. */

/*! @brief Read current value of the VREF_SC_REGEN field. */
#define BR_VREF_SC_REGEN(x)  (BITBAND_ACCESS8(HW_VREF_SC_ADDR(x), BP_VREF_SC_REGEN))

/*! @brief Format value for bitfield VREF_SC_REGEN. */
#define BF_VREF_SC_REGEN(v)  ((uint8_t)((uint8_t)(v) << BP_VREF_SC_REGEN) & BM_VREF_SC_REGEN)

/*! @brief Set the REGEN field to a new value. */
#define BW_VREF_SC_REGEN(x, v) (BITBAND_ACCESS8(HW_VREF_SC_ADDR(x), BP_VREF_SC_REGEN) = (v))
/*@}*/

/*!
 * @name Register VREF_SC, field VREFEN[7] (RW)
 *
 * This bit is used to enable the bandgap Voltage Reference module. After the
 * VREF is enabled, turning off the clock to the VREF module via the corresponding
 * clock gate register will not disable the VREF. VREF must be disabled via this
 * VREFEN bit.
 *
 * Values:
 * - 0 - The module is disabled.
 * - 1 - The module is enabled.
 */
/*@{*/
#define BP_VREF_SC_VREFEN    (7U)          /*!< Bit position for VREF_SC_VREFEN. */
#define BM_VREF_SC_VREFEN    (0x80U)       /*!< Bit mask for VREF_SC_VREFEN. */
#define BS_VREF_SC_VREFEN    (1U)          /*!< Bit field size in bits for VREF_SC_VREFEN. */

/*! @brief Read current value of the VREF_SC_VREFEN field. */
#define BR_VREF_SC_VREFEN(x) (BITBAND_ACCESS8(HW_VREF_SC_ADDR(x), BP_VREF_SC_VREFEN))

/*! @brief Format value for bitfield VREF_SC_VREFEN. */
#define BF_VREF_SC_VREFEN(v) ((uint8_t)((uint8_t)(v) << BP_VREF_SC_VREFEN) & BM_VREF_SC_VREFEN)

/*! @brief Set the VREFEN field to a new value. */
#define BW_VREF_SC_VREFEN(x, v) (BITBAND_ACCESS8(HW_VREF_SC_ADDR(x), BP_VREF_SC_VREFEN) = (v))
/*@}*/

/*******************************************************************************
 * hw_vref_t - module struct
 ******************************************************************************/
/*!
 * @brief All VREF module registers.
 */
#pragma pack(1)
typedef struct _hw_vref
{
    __IO hw_vref_trm_t TRM;                /*!< [0x0] VREF Trim Register */
    __IO hw_vref_sc_t SC;                  /*!< [0x1] VREF Status and Control Register */
} hw_vref_t;
#pragma pack()

/*! @brief Macro to access all VREF registers. */
/*! @param x VREF module instance base address. */
/*! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
 *     use the '&' operator, like <code>&HW_VREF(VREF_BASE)</code>. */
#define HW_VREF(x)     (*(hw_vref_t *)(x))

#endif /* __HW_VREF_REGISTERS_H__ */
/* v33/140401/2.1.0 */
/* EOF */

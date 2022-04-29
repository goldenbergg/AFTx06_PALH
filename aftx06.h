/**
 ******************************************************************************
 * @file    aftx06.h
 * @author  Grant Goldenberg
 * @version V1.0.000
 * @date    05-April-2022
 * @brief
 ******************************************************************************
 */

#include <stdint.h>

/* IO definitions (access restrictions to peripheral registers) */
#define	__I 	volatile const	/*!< Defines 'read only' permissions */
#define __O		volatile 		/*!< Defines 'write only' permissions */
#define __IO	volatile		/*!< Defines 'read / write' permissions */

/* following defines should be used for structure members */
#define __IM	volatile const	/*!< Defines 'read only' structure member permissions */
#define __OM	volatile		/*!< Defines 'write only' structure member permissions */
#define __IOM	volatile 		/*!< Defines 'read / write' structure member permissions */

typedef enum {RESET = 0, SET = !RESET} FlagStatus, ITStatus;
typedef enum {DISABLE = 0, ENABLE = !DISABLE} FunctionalState;
#define IS_FUNCTIONAL_STATE(STATE) (((STATE) == DISABLE) || ((STATE) == ENABLE))
typedef enum {ERROR = 0, SUCCESS = !ERROR} ErrorStatus;


/**
 * @brief General Purpose IO
 */

typedef struct
{
	uint32_t RESERVED0;			/*!< Reserved,                                                              								0x00 */
	__IO uint32_t DATA;			/*!< Contains the digital value on the respective pins,										Address offset: 0x04 */
	__IO uint32_t DDR;			/*!< Select whether the respective pins should be inputs or outputs,						Address	offset: 0x08 */
	__IO uint32_t IER;			/*!< Select if the respective pins are allowed to generate interrupts,						Address offset: 0x0C */
	__IO uint32_t PER;			/*!< Select if the respective pins are configured for positive (rising) edge interrupts,	Address offset:	0x10 */
	__IO uint32_t NER;			/*!< Select if the respective pins are configured for negative (falling) edge interrupts,	Address offset: 0x14 */
	__IO uint32_t ICR;			/*!< Select if the interrupts for the respective pins should be cleared,					Address offset: 0x18 */
	__IO uint32_t ISR;			/*!< Contains the interrupt status on the respective pins,									Address offset: 0x1C */
} GPIO_TypeDef;


/**
 * @brief Pulse Width Modulation
 * 
 */

typedef struct
{
	__IO uint32_t PER_0;		/*!< Sets the period in clock cycles for PWM channel 0,						Address offset:	0x00 */
	__IO uint32_t DUTY_0;		/*!< Sets the duty in clock cycles for PWM channel 0,						Address offset:	0x04 */
	__IO uint8_t CTRL_0;		/*!< Controls the enable, polarity, and alignment of the PWM channel 0,		Address offset: 0x08 */
	uint8_t RESERVED0;			/*!< Reserved,																				0x09 */
	uint16_t RESERVED1;			/*!< Reserved,																				0x0A */
	__IO uint32_t PER_1;		/*!< Sets the period in clock cycles for PWM channel 1,						Address offset: 0x0C */
	__IO uint32_t DUTY_1;		/*!< Sets the duty in clock cycles for PWM channel 1,						Address offset: 0x10 */
	__IO uint8_t CTRL_1;		/*!< Controls the enable, polarity, and alignment of the PWM channel 1,		Address offset: 0x14 */
	uint8_t RESERVED2;			/*!< Reserved,																				0x15 */
	uint16_t RESERVED3;			/*!< Reserved,																				0x16 */
	__IO uint32_t PER_2;		/*!< Sets the period in clock cycles for PWM channel 2,						Address offset: 0x18 */
	__IO uint32_t DUTY_2;		/*!< Sets the duty in clock cycles for PWM channel 2,						Address offset: 0x1C */
	__IO uint8_t CTRL_2;		/*!< Controls the enable, polarity, and alignment of the PWM channel 2,		Address offset: 0x20 */
	uint8_t RESERVED4;			/*!< Reserved,																				0x21 */
	uint16_t RESERVED5;			/*!< Reserved,																				0x22 */
	__IO uint32_t PER_3;		/*!< Sets the period in clock cycles for PWM channel 3,						Address offset: 0x24 */
	__IO uint32_t DUTY_3;		/*!< Sets the duty in clock cycles for PWM channel 3,						Address offset: 0x28 */
	__IO uint8_t CTRL_3;		/*!< Controls the enable, polarity, and alignment of the PWM channel 3,		Address offset: 0x2C */
	uint8_t RESERVED6;			/*!< Reserved,																				0x2D */
	uint16_t RESERVED7;			/*!< Reserved,																				0x2E */
	__IO uint32_t PER_4;		/*!< Sets the period in clock cycles for PWM channel 4,						Address offset: 0x30 */
	__IO uint32_t DUTY_4;		/*!< Sets the duty in clock cycles for PWM channel 4,						Address offset:	0x34 */
	__IO uint8_t CTRL_4;		/*!< Controls the enable, polarity, and alignment of the PWM channel 4,		Address offset: 0x38 */
	uint8_t RESERVED8;			/*!< Reserved,																				0x39 */
	uint16_t RESERVED9;			/*!< Reserved,																				0x3A */
	__IO uint32_t PER_5;		/*!< Sets the period in clock cycles for PWM channel 5,						Address offset: 0x3C */
	__IO uint32_t DUTY_5;		/*!< Sets the duty in clock cycles for PWM channel 5,						Address offset: 0x40 */
	__IO uint8_t CTRL_5;		/*!< Controls the enable, polarity, and alignment of the PWM channel 5,		Address offset: 0x44 */
	uint8_t RESERVED10;			/*!< Reserved,																				0x45 */
	uint16_t RESERVE11;			/*!< Reserved,																				0x46 */
	__IO uint32_t PER_6;		/*!< Sets the period in clock cycles for PWM channel 6,						Address offset: 0x48 */
	__IO uint32_t DUTY_6;		/*!< Sets the duty in clock cycles for PWM channel 6,						Address offset: 0x4C */
	__IO uint8_t CTRL_6;		/*!< Controls the enable, polarity, and alignment of the PWM channel 6,		Address offset: 0x50 */
	uint8_t RESERVED12;			/*!< Reserved,																				0x51 */
	uint16_t RESERVED13;		/*!< Reserved, 																				0x52 */
	__IO uint32_t PER_7;		/*!< Sets the period in clock cycles for PWM channel 7,						Address offset: 0x54 */
	__IO uint32_t DUTY_7;		/*!< Sets the duty in clock cycles for PWM channel 7,						Address offset: 0x58 */
	__IO uint8_t CTRL_7;		/*!< Controls the enable, polarity, and alignment of the PWM channel 7,		Address offset: 0x5C */
} PWM_TypeDef;


/**
 * @brief Serial Peripheral Interface
 */

typedef struct
{
	__IO uint32_t CTRL;			/*!< Control behavior of the SPI,											Address offset: 0x00 */
	__IO uint32_t LEN;			/*!< Sets length, in bytes, of the transaction. Set/cleared by software,	Address offset: 0x04 */
	__IO uint32_t BAUD;			/*!< Sets the clock divider that determines the value of SCK,				Address offset: 0x08 */
	__IO uint8_t TX;			/*!< Pushes a 8-bit word of data into the TX FIFO Buffer, 					Address offset: 0x0C */
	uint8_t RESERVED0;			/*!< Reserved,																				0x0D */
	uint16_t RESERVED1;			/*!< Reserved,																				0x0E */
	__IO uint8_t RX;			/*!< Pops a 8-bit word of data into the RX FIFO Buffer,						Address offset:	0x10 */
	uint8_t RESERVED2;			/*!< Reserved,																				0x11 */
	uint16_t RESERVED3;			/*!< Reserved,																				0x12 */
	__IO uint32_t STATUS;		/*!< Contains SPI status flags,												Address offset:	0x14 */
} SPI_TypeDef;


/**
 * @brief Timer
 */

typedef struct
{
	__IO uint8_t IOS;			/*!< Select whether the respective channels shoud be input capture or output capture,					Address offset: 0x00 */
	uint8_t RESERVED0;			/*!< Reserved,																											0x01 */
	uint16_t RESERVED1;			/*!< Reserved,																											0x02 */
	__IO uint8_t TCF;			/*!< Select if the respective channels should force the output compare,									Address offset: 0x04 */
	uint8_t RESERVED2;			/*!< Reserved,																											0x05 */
	uint16_t RESERVED3;			/*!< Reserved,																											0x06 */
	__IO uint32_t TCNT;			/*!< This a 32-bit up counter,																			Address offset: 0x08 */
	__IO uint8_t TSCR;			/*!< Select whether to enable or disable the timer module (TCREN),										Address offset: 0x0C */
	uint8_t RESERVED4;			/*!< Reserved,																											0x0D */
	uint16_t RESERVED5;			/*!< Reserved,																											0x0E */
	__IO uint8_t TOV;			/*!< Select whether the respective channels should toggle the output on overflow,						Address offset: 0x10 */
	uint8_t RESERVED6;			/*!< Reserved,																											0x11 */
	uint16_t RESERVED7;			/*!< Reserved, 																											0x12 */
	__IO uint32_t TCR;			/*!< Select what occurs on a successful output compare and what edges are detected on input capture, 	Address offset: 0x14 */
	__IO uint32_t TIE;			/*!< Select if the respective channels flag in TFLG1 can cause an interrupt,							Address offset: 0x18 */
	uint8_t RESERVED8;			/*!< Reserved,																											0x19 */
	uint16_t RESERVED9;			/*!< Reserved,																											0x1A */
	__IO uint8_t TSCR2;			/*!< Second timer system control register,																Address offset: 0x1C */
	uint8_t RESERVED10;			/*!< Reserved,																											0x1D */
	uint16_t RESERVED11; 		/*!< Reserved, 																											0x1E */
	__IO uint8_t TFLG1;			/*!< Contains the interrupt flag (TFx) for each respective channel,										Address offset: 0x20 */
	uint8_t RESERVED12;			/*!< Reserved,																											0x21 */
	uint16_t RESERVED13;		/*!< Reserved,																											0x22 */
	__IO uint8_t TFLG2;			/*!< Contains the timer overflow interrupt flag (TOVF),													Address offset: 0x24 */
	uint8_t RESERVED14;			/*!< Reserved,																											0x25 */
	uint16_t RESERVED15;		/*!< Reserved,																											0x26 */
	__IO uint32_t TC0;			/*!< Timer input capture/output compare register 0,														Address offset: 0x28 */
	__IO uint32_t TC1;			/*!< Timer input capture/output compare register 1,														Address offset: 0x2C */
	__IO uint32_t TC2;			/*!< Timer input capture/output compare register 2,														Address offset: 0x30 */
	__IO uint32_t TC3;			/*!< Timer input capture/output compare register 3,														Address offset: 0x34 */
	__IO uint32_t TC4;			/*!< Timer input capture/output compare register 4, 													Address offset: 0x38 */
	__IO uint32_t TC5;			/*!< Timer input capture/output compare register 5,														Address offset:	0x3C */
	__IO uint32_t TC6;			/*!< Timer input capture/output compare register 6,														Address offset: 0x40 */
	__IO uint32_t TC7;			/*!< Timer input capture/output compare register 7,														Address offset: 0x44 */
	__IO uint32_t RLV;			/*!< This is the roll over value for roll over mode,													Address offset:	0x48 */
} TIM_TypeDef;


/**
 * @brief Peripheral Memory MAP
 */

#define BOTTOMRAM_BASE		((uint32_t)0x00000000)
#define SELFTEST_BASE		((uint32_t)0x00000200)
#define TOPRAM_BASE			((uint32_t)0x00008000)
#define SRAM_BASE			((uint32_t)0x00008400)
#define GPIO_BASE			((uint32_t)0x80000000)
#define PWM_BASE			((uint32_t)0x80010000)
#define TIM_BASE			((uint32_t)0x80020000)
#define SPI_BASE			((uint32_t)0x80030000)
#define I2C_BASE			((uint32_t)0x80040000)
#define SASA_BASE			((uint32_t)0x90000000)
#define CLINT_BASE			((uint32_t)0xE0000000)
#define PLIC_BASE			((uint32_t)0xE0010000)


/**
 * @brief Peripheral Declaration
 */

#define GPIO				((GPIO_TypeDef *) GPIO_BASE)
#define PWM					((PWM_TypeDef *) PWM_BASE)
#define SPI					((SPI_TypeDef *) SPI_BASE)
#define TIM					((TIM_TypeDef *) TIM_BASE)


/******************************************************************************/
/*                         Peripheral Registers Bits Definition               */
/******************************************************************************/
/******************************************************************************/
/*                                                                            */
/*                       General Purpose IOs (GPIO)                           */
/*                                                                            */
/******************************************************************************/
/******************* Bit definitions for GPIO_DATA register *******************/
#define GPIO_DATA_0			((uint32_t)0x00000001)
#define GPIO_DATA_1			((uint32_t)0x00000002)
#define GPIO_DATA_2			((uint32_t)0x00000004)
#define GPIO_DATA_3			((uint32_t)0x00000008)
#define GPIO_DATA_4			((uint32_t)0x00000010)
#define GPIO_DATA_5			((uint32_t)0x00000020)
#define GPIO_DATA_6			((uint32_t)0x00000040)
#define GPIO_DATA_7			((uint32_t)0x00000080)
#define GPIO_DATA_8			((uint32_t)0x00000100)
#define GPIO_DATA_9			((uint32_t)0x00000200)
#define GPIO_DATA_10		((uint32_t)0x00000400)
#define GPIO_DATA_11		((uint32_t)0x00000800)
#define GPIO_DATA_12		((uint32_t)0x00001000)
#define GPIO_DATA_13		((uint32_t)0x00002000)
#define GPIO_DATA_14		((uint32_t)0x00004000)
#define GPIO_DATA_15		((uint32_t)0x00008000)
#define GPIO_DATA_16		((uint32_t)0x00010000)
#define GPIO_DATA_17		((uint32_t)0x00020000)
#define GPIO_DATA_18		((uint32_t)0x00040000)
#define GPIO_DATA_19		((uint32_t)0x00080000)
#define GPIO_DATA_20		((uint32_t)0x00100000)
#define GPIO_DATA_21		((uint32_t)0x00200000)
#define GPIO_DATA_22		((uint32_t)0x00400000)
#define GPIO_DATA_23		((uint32_t)0x00800000)
#define GPIO_DATA_24		((uint32_t)0x01000000)
#define GPIO_DATA_25		((uint32_t)0x02000000)
#define GPIO_DATA_26		((uint32_t)0x04000000)
#define GPIO_DATA_27		((uint32_t)0x08000000)
#define GPIO_DATA_28		((uint32_t)0x10000000)
#define GPIO_DATA_29		((uint32_t)0x20000000)
#define GPIO_DATA_30		((uint32_t)0x40000000)
#define GPIO_DATA_31		((uint32_t)0x80000000)

/******************* Bit definitions for GPIO_DDR register *******************/
#define GPIO_DDR_0			((uint32_t)0x00000001)
#define GPIO_DDR_1			((uint32_t)0x00000002)
#define GPIO_DDR_2			((uint32_t)0x00000004)
#define GPIO_DDR_3			((uint32_t)0x00000008)
#define GPIO_DDR_4			((uint32_t)0x00000010)
#define GPIO_DDR_5			((uint32_t)0x00000020)
#define GPIO_DDR_6			((uint32_t)0x00000040)
#define GPIO_DDR_7			((uint32_t)0x00000080)
#define GPIO_DDR_8			((uint32_t)0x00000100)
#define GPIO_DDR_9			((uint32_t)0x00000200)
#define GPIO_DDR_10			((uint32_t)0x00000400)
#define GPIO_DDR_11			((uint32_t)0x00000800)
#define GPIO_DDR_12			((uint32_t)0x00001000)
#define GPIO_DDR_13			((uint32_t)0x00002000)
#define GPIO_DDR_14			((uint32_t)0x00004000)
#define GPIO_DDR_15			((uint32_t)0x00008000)
#define GPIO_DDR_16			((uint32_t)0x00010000)
#define GPIO_DDR_17			((uint32_t)0x00020000)
#define GPIO_DDR_18			((uint32_t)0x00040000)
#define GPIO_DDR_19			((uint32_t)0x00080000)
#define GPIO_DDR_20			((uint32_t)0x00100000)
#define GPIO_DDR_21			((uint32_t)0x00200000)
#define GPIO_DDR_22			((uint32_t)0x00400000)
#define GPIO_DDR_23			((uint32_t)0x00800000)
#define GPIO_DDR_24			((uint32_t)0x01000000)
#define GPIO_DDR_25			((uint32_t)0x02000000)
#define GPIO_DDR_26			((uint32_t)0x04000000)
#define GPIO_DDR_27			((uint32_t)0x08000000)
#define GPIO_DDR_28			((uint32_t)0x10000000)
#define GPIO_DDR_29			((uint32_t)0x20000000)
#define GPIO_DDR_30			((uint32_t)0x40000000)
#define GPIO_DDR_31			((uint32_t)0x80000000)

/******************* Bit definitions for GPIO_IER register *******************/
#define GPIO_IER_0			((uint32_t)0x00000001)
#define GPIO_IER_1			((uint32_t)0x00000002)
#define GPIO_IER_2			((uint32_t)0x00000004)
#define GPIO_IER_3			((uint32_t)0x00000008)
#define GPIO_IER_4			((uint32_t)0x00000010)
#define GPIO_IER_5			((uint32_t)0x00000020)
#define GPIO_IER_6			((uint32_t)0x00000040)
#define GPIO_IER_7			((uint32_t)0x00000080)
#define GPIO_IER_8			((uint32_t)0x00000100)
#define GPIO_IER_9			((uint32_t)0x00000200)
#define GPIO_IER_10			((uint32_t)0x00000400)
#define GPIO_IER_11			((uint32_t)0x00000800)
#define GPIO_IER_12			((uint32_t)0x00001000)
#define GPIO_IER_13			((uint32_t)0x00002000)
#define GPIO_IER_14			((uint32_t)0x00004000)
#define GPIO_IER_15			((uint32_t)0x00008000)
#define GPIO_IER_16			((uint32_t)0x00010000)
#define GPIO_IER_17			((uint32_t)0x00020000)
#define GPIO_IER_18			((uint32_t)0x00040000)
#define GPIO_IER_19			((uint32_t)0x00080000)
#define GPIO_IER_20			((uint32_t)0x00100000)
#define GPIO_IER_21			((uint32_t)0x00200000)
#define GPIO_IER_22			((uint32_t)0x00400000)
#define GPIO_IER_23			((uint32_t)0x00800000)
#define GPIO_IER_24			((uint32_t)0x01000000)
#define GPIO_IER_25			((uint32_t)0x02000000)
#define GPIO_IER_26			((uint32_t)0x04000000)
#define GPIO_IER_27			((uint32_t)0x08000000)
#define GPIO_IER_28			((uint32_t)0x10000000)
#define GPIO_IER_29			((uint32_t)0x20000000)
#define GPIO_IER_30			((uint32_t)0x40000000)
#define GPIO_IER_31			((uint32_t)0x80000000)

/******************* Bit definitions for GPIO_PER register *******************/
#define GPIO_PER_0			((uint32_t)0x00000001)
#define GPIO_PER_1			((uint32_t)0x00000002)
#define GPIO_PER_2			((uint32_t)0x00000004)
#define GPIO_PER_3			((uint32_t)0x00000008)
#define GPIO_PER_4			((uint32_t)0x00000010)
#define GPIO_PER_5			((uint32_t)0x00000020)
#define GPIO_PER_6			((uint32_t)0x00000040)
#define GPIO_PER_7			((uint32_t)0x00000080)
#define GPIO_PER_8			((uint32_t)0x00000100)
#define GPIO_PER_9			((uint32_t)0x00000200)
#define GPIO_PER_10			((uint32_t)0x00000400)
#define GPIO_PER_11			((uint32_t)0x00000800)
#define GPIO_PER_12			((uint32_t)0x00001000)
#define GPIO_PER_13			((uint32_t)0x00002000)
#define GPIO_PER_14			((uint32_t)0x00004000)
#define GPIO_PER_15			((uint32_t)0x00008000)
#define GPIO_PER_16			((uint32_t)0x00010000)
#define GPIO_PER_17			((uint32_t)0x00020000)
#define GPIO_PER_18			((uint32_t)0x00040000)
#define GPIO_PER_19			((uint32_t)0x00080000)
#define GPIO_PER_20			((uint32_t)0x00100000)
#define GPIO_PER_21			((uint32_t)0x00200000)
#define GPIO_PER_22			((uint32_t)0x00400000)
#define GPIO_PER_23			((uint32_t)0x00800000)
#define GPIO_PER_24			((uint32_t)0x01000000)
#define GPIO_PER_25			((uint32_t)0x02000000)
#define GPIO_PER_26			((uint32_t)0x04000000)
#define GPIO_PER_27			((uint32_t)0x08000000)
#define GPIO_PER_28			((uint32_t)0x10000000)
#define GPIO_PER_29			((uint32_t)0x20000000)
#define GPIO_PER_30			((uint32_t)0x40000000)
#define GPIO_PER_31			((uint32_t)0x80000000)

/******************* Bit definitions for GPIO_NER register *******************/
#define GPIO_NER_0			((uint32_t)0x00000001)
#define GPIO_NER_1			((uint32_t)0x00000002)
#define GPIO_NER_2			((uint32_t)0x00000004)
#define GPIO_NER_3			((uint32_t)0x00000008)
#define GPIO_NER_4			((uint32_t)0x00000010)
#define GPIO_NER_5			((uint32_t)0x00000020)
#define GPIO_NER_6			((uint32_t)0x00000040)
#define GPIO_NER_7			((uint32_t)0x00000080)
#define GPIO_NER_8			((uint32_t)0x00000100)
#define GPIO_NER_9			((uint32_t)0x00000200)
#define GPIO_NER_10			((uint32_t)0x00000400)
#define GPIO_NER_11			((uint32_t)0x00000800)
#define GPIO_NER_12			((uint32_t)0x00001000)
#define GPIO_NER_13			((uint32_t)0x00002000)
#define GPIO_NER_14			((uint32_t)0x00004000)
#define GPIO_NER_15			((uint32_t)0x00008000)
#define GPIO_NER_16			((uint32_t)0x00010000)
#define GPIO_NER_17			((uint32_t)0x00020000)
#define GPIO_NER_18			((uint32_t)0x00040000)
#define GPIO_NER_19			((uint32_t)0x00080000)
#define GPIO_NER_20			((uint32_t)0x00100000)
#define GPIO_NER_21			((uint32_t)0x00200000)
#define GPIO_NER_22			((uint32_t)0x00400000)
#define GPIO_NER_23			((uint32_t)0x00800000)
#define GPIO_NER_24			((uint32_t)0x01000000)
#define GPIO_NER_25			((uint32_t)0x02000000)
#define GPIO_NER_26			((uint32_t)0x04000000)
#define GPIO_NER_27			((uint32_t)0x08000000)
#define GPIO_NER_28			((uint32_t)0x10000000)
#define GPIO_NER_29			((uint32_t)0x20000000)
#define GPIO_NER_30			((uint32_t)0x40000000)
#define GPIO_NER_31			((uint32_t)0x80000000)

/******************* Bit definitions for GPIO_ICR register *******************/
#define GPIO_ICR_0			((uint32_t)0x00000001)
#define GPIO_ICR_1			((uint32_t)0x00000002)
#define GPIO_ICR_2			((uint32_t)0x00000004)
#define GPIO_ICR_3			((uint32_t)0x00000008)
#define GPIO_ICR_4			((uint32_t)0x00000010)
#define GPIO_ICR_5			((uint32_t)0x00000020)
#define GPIO_ICR_6			((uint32_t)0x00000040)
#define GPIO_ICR_7			((uint32_t)0x00000080)
#define GPIO_ICR_8			((uint32_t)0x00000100)
#define GPIO_ICR_9			((uint32_t)0x00000200)
#define GPIO_ICR_10			((uint32_t)0x00000400)
#define GPIO_ICR_11			((uint32_t)0x00000800)
#define GPIO_ICR_12			((uint32_t)0x00001000)
#define GPIO_ICR_13			((uint32_t)0x00002000)
#define GPIO_ICR_14			((uint32_t)0x00004000)
#define GPIO_ICR_15			((uint32_t)0x00008000)
#define GPIO_ICR_16			((uint32_t)0x00010000)
#define GPIO_ICR_17			((uint32_t)0x00020000)
#define GPIO_ICR_18			((uint32_t)0x00040000)
#define GPIO_ICR_19			((uint32_t)0x00080000)
#define GPIO_ICR_20			((uint32_t)0x00100000)
#define GPIO_ICR_21			((uint32_t)0x00200000)
#define GPIO_ICR_22			((uint32_t)0x00400000)
#define GPIO_ICR_23			((uint32_t)0x00800000)
#define GPIO_ICR_24			((uint32_t)0x01000000)
#define GPIO_ICR_25			((uint32_t)0x02000000)
#define GPIO_ICR_26			((uint32_t)0x04000000)
#define GPIO_ICR_27			((uint32_t)0x08000000)
#define GPIO_ICR_28			((uint32_t)0x10000000)
#define GPIO_ICR_29			((uint32_t)0x20000000)
#define GPIO_ICR_30			((uint32_t)0x40000000)
#define GPIO_ICR_31			((uint32_t)0x80000000)

/******************* Bit definitions for GPIO_ISR register *******************/
#define GPIO_ISR_0			((uint32_t)0x00000001)
#define GPIO_ISR_1			((uint32_t)0x00000002)
#define GPIO_ISR_2			((uint32_t)0x00000004)
#define GPIO_ISR_3			((uint32_t)0x00000008)
#define GPIO_ISR_4			((uint32_t)0x00000010)
#define GPIO_ISR_5			((uint32_t)0x00000020)
#define GPIO_ISR_6			((uint32_t)0x00000040)
#define GPIO_ISR_7			((uint32_t)0x00000080)
#define GPIO_ISR_8			((uint32_t)0x00000100)
#define GPIO_ISR_9			((uint32_t)0x00000200)
#define GPIO_ISR_10			((uint32_t)0x00000400)
#define GPIO_ISR_11			((uint32_t)0x00000800)
#define GPIO_ISR_12			((uint32_t)0x00001000)
#define GPIO_ISR_13			((uint32_t)0x00002000)
#define GPIO_ISR_14			((uint32_t)0x00004000)
#define GPIO_ISR_15			((uint32_t)0x00008000)
#define GPIO_ISR_16			((uint32_t)0x00010000)
#define GPIO_ISR_17			((uint32_t)0x00020000)
#define GPIO_ISR_18			((uint32_t)0x00040000)
#define GPIO_ISR_19			((uint32_t)0x00080000)
#define GPIO_ISR_20			((uint32_t)0x00100000)
#define GPIO_ISR_21			((uint32_t)0x00200000)
#define GPIO_ISR_22			((uint32_t)0x00400000)
#define GPIO_ISR_23			((uint32_t)0x00800000)
#define GPIO_ISR_24			((uint32_t)0x01000000)
#define GPIO_ISR_25			((uint32_t)0x02000000)
#define GPIO_ISR_26			((uint32_t)0x04000000)
#define GPIO_ISR_27			((uint32_t)0x08000000)
#define GPIO_ISR_28			((uint32_t)0x10000000)
#define GPIO_ISR_29			((uint32_t)0x20000000)
#define GPIO_ISR_30			((uint32_t)0x40000000)
#define GPIO_ISR_31			((uint32_t)0x80000000)


/******************************************************************************/
/*                                                                            */
/*                       Pulse Width Modulation (PWM)                         */
/*                                                                            */
/******************************************************************************/
/******************* Bit definitions for PWM_CTRL register ********************/
#define PWM_CTRL_EN_0		((uint32_t)0x00000001)
#define PWM_CTRL_POL_0		((uint32_t)0x00000002)
#define PWM_CTRL_ALGN_0		((uint32_t)0x00000004)
#define PWM_CTRL_EN_1		((uint32_t)0x00000001)
#define PWM_CTRL_POL_1		((uint32_t)0x00000002)
#define PWM_CTRL_ALGN_1		((uint32_t)0x00000004)
#define PWM_CTRL_EN_2		((uint32_t)0x00000001)
#define PWM_CTRL_POL_2		((uint32_t)0x00000002)
#define PWM_CTRL_ALGN_2		((uint32_t)0x00000004)
#define PWM_CTRL_EN_3		((uint32_t)0x00000001)
#define PWM_CTRL_POL_3		((uint32_t)0x00000002)
#define PWM_CTRL_ALGN_3		((uint32_t)0x00000004)
#define PWM_CTRL_EN_4		((uint32_t)0x00000001)
#define PWM_CTRL_POL_4		((uint32_t)0x00000002)
#define PWM_CTRL_ALGN_4		((uint32_t)0x00000004)
#define PWM_CTRL_EN_5		((uint32_t)0x00000001)
#define PWM_CTRL_POL_5		((uint32_t)0x00000002)
#define PWM_CTRL_ALGN_5		((uint32_t)0x00000004)
#define PWM_CTRL_EN_6		((uint32_t)0x00000001)
#define PWM_CTRL_POL_6		((uint32_t)0x00000002)
#define PWM_CTRL_ALGN_6		((uint32_t)0x00000004)
#define PWM_CTRL_EN_7		((uint32_t)0x00000001)
#define PWM_CTRL_POL_7		((uint32_t)0x00000002)
#define PWM_CTRL_ALGN_7		((uint32_t)0x00000004)


/******************************************************************************/
/*                                                                            */
/*                    Serial Peripheral Interface (SPI)                       */
/*                                                                            */
/******************************************************************************/
/******************** Bit definitions for SPI_CTRL register *******************/
#define SPI_CTRL_STRT_TRANS		((uint32_t)0x00000001)
#define SPI_CTRL_MODE			((uint32_t)0x00000002)
#define SPI_CLK_POL				((uint32_t)0x00000004)
#define SPI_CLK_PHASE			((uint32_t)0x00000008)
#define SPI_SS_OUT_EN			((uint32_t)0x00000010)
#define SPI_LSB_MSB				((uint32_t)0x00000020)
#define SPI_MODF_EN				((uint32_t)0x00000040)
#define SPI_INT_EN_TRANS_COMP	((uint32_t)0x00020000)
#define SPI_INT_EN_RX_WM_HIT	((uint32_t)0x00040000)
#define SPI_INT_EN_TX_WM_HIT	((uint32_t)0x00080000)
#define SPI_INT_EN_RX_BUF_FULL	((uint32_t)0x00100000)
#define SPI_INT_EN_TX_BUF_EMPTY	((uint32_t)0x00200000)
#define SPI_INT_EN_MODF			((uint32_t)0x00400000)

/******************************************************************************/
/*                                                                            */
/*                               Timers (TIM)                                 */
/*                                                                            */
/******************************************************************************/
/******************** Bit definitions for TIM_IOS register ********************/
#define TIM_IOS_0			((uint32_t)0x00000001)
#define TIM_IOS_1			((uint32_t)0x00000002)
#define TIM_IOS_2			((uint32_t)0x00000004)
#define TIM_IOS_3			((uint32_t)0x00000008)
#define TIM_IOS_4			((uint32_t)0x00000010)
#define TIM_IOS_5			((uint32_t)0x00000020)
#define TIM_IOS_6			((uint32_t)0x00000040)
#define TIM_IOS_7			((uint32_t)0x00000080)

/******************** Bit definitions for TIM_TCF register ********************/
#define TIM_TCF_0			((uint32_t)0x00000001)
#define TIM_TCF_1			((uint32_t)0x00000002)
#define TIM_TCF_2			((uint32_t)0x00000004)
#define TIM_TCF_3			((uint32_t)0x00000008)
#define TIM_TCF_4			((uint32_t)0x00000010)
#define TIM_TCF_5			((uint32_t)0x00000020)
#define TIM_TCF_6			((uint32_t)0x00000040)
#define TIM_TCF_7			((uint32_t)0x00000080)

/******************** Bit definitions for TIM_TSCR register *******************/
#define TIM_TSCR_TCRST		((uint32_t)0x00000001)
#define TIM_TSCR_TCREN		((uint32_t)0x00000080)

/******************** Bit definitions for TIM_TOV register ********************/
#define TIM_TOV_0			((uint32_t)0x00000001)
#define TIM_TOV_1			((uint32_t)0x00000002)
#define TIM_TOV_2			((uint32_t)0x00000004)
#define TIM_TOV_3			((uint32_t)0x00000008)
#define TIM_TOV_4			((uint32_t)0x00000010)
#define TIM_TOV_5			((uint32_t)0x00000020)
#define TIM_TOV_6			((uint32_t)0x00000040)
#define TIM_TOV_7			((uint32_t)0x00000080)

/******************** Bit definitions for TIM_TCR register ********************/
#define TIM_TCR_EDGE0B		((uint32_t)0x00000001)
#define TIM_TCR_EDGE1B		((uint32_t)0x00000002)
#define TIM_TCR_EDGE2B		((uint32_t)0x00000004)
#define TIM_TCR_EDGE3B		((uint32_t)0x00000008)
#define TIM_TCR_EDGE4B		((uint32_t)0x00000010)
#define TIM_TCR_EDGE5B		((uint32_t)0x00000020)
#define TIM_TCR_EDGE6B		((uint32_t)0x00000040)
#define TIM_TCR_EDGE7B		((uint32_t)0x00000080)
#define TIM_TCR_EDGE0A		((uint32_t)0x00000100)
#define TIM_TCR_EDGE1A		((uint32_t)0x00000200)
#define TIM_TCR_EDGE2A		((uint32_t)0x00000400)
#define TIM_TCR_EDGE3A		((uint32_t)0x00000800)
#define TIM_TCR_EDGE4A		((uint32_t)0x00001000)
#define TIM_TCR_EDGE5A		((uint32_t)0x00002000)
#define TIM_TCR_EDGE6A		((uint32_t)0x00004000)
#define TIM_TCR_EDGE7A		((uint32_t)0x00008000)
#define TIM_TCR_OL0			((uint32_t)0x00010000)
#define TIM_TCR_OL1			((uint32_t)0x00020000)
#define TIM_TCR_OL2			((uint32_t)0x00040000)
#define TIM_TCR_OL3			((uint32_t)0x00080000)
#define TIM_TCR_OL4			((uint32_t)0x00100000)
#define TIM_TCR_OL5			((uint32_t)0x00200000)
#define TIM_TCR_OL6			((uint32_t)0x00400000)
#define TIM_TCR_OL7			((uint32_t)0x00800000)
#define TIM_TCR_OM0			((uint32_t)0x01000000)
#define TIM_TCR_OM1			((uint32_t)0x02000000)
#define TIM_TCR_OM2			((uint32_t)0x04000000)
#define TIM_TCR_OM3			((uint32_t)0x08000000)
#define TIM_TCR_OM4			((uint32_t)0x10000000)
#define TIM_TCR_OM5			((uint32_t)0x20000000)
#define TIM_TCR_OM6			((uint32_t)0x40000000)
#define TIM_TCR_OM7			((uint32_t)0x80000000)

/******************** Bit definitions for TIM_TCR register ********************/
#define TIM_TIE_0			((uint32_t)0x00000001)
#define TIM_TIE_1			((uint32_t)0x00000002)
#define TIM_TIE_2			((uint32_t)0x00000004)
#define TIM_TIE_3			((uint32_t)0x00000008)
#define TIM_TIE_4			((uint32_t)0x00000010)
#define TIM_TIE_5			((uint32_t)0x00000020)
#define TIM_TIE_6			((uint32_t)0x00000040)
#define TIM_TIE_7			((uint32_t)0x00000080)

/******************** Bit definitions for TIM_TCR register ********************/
#define TIM_TSCR2_PRE_1		((uint32_t)0x00000000)
#define TIM_TSCR2_PRE_2		((uint32_t)0x00000001)
#define TIM_TSCR2_PRE_4		((uint32_t)0x00000002)
#define TIM_TSCR2_PRE_8		((uint32_t)0x00000003)
#define TIM_TSCR2_PRE_16	((uint32_t)0x00000004)
#define TIM_TSCR2_PRE_32	((uint32_t)0x00000005)
#define TIM_TSCR2_PRE_64	((uint32_t)0x00000006)
#define TIM_TSCR2_PRE_128	((uint32_t)0x00000007)
#define TIM_TSCR2_ROV		((uint32_t)0x00000000)
#define TIM_TSCR2_CC		((uint32_t)0x00000008)
#define TIM_TSCR2_PA		((uint32_t)0x00000010)
#define TIM_TSCR2_TCRE		((uint32_t)0x00000040)
#define TIM_TSCR2_TOI		((uint32_t)0x00000080)

/******************* Bit definitions for TIM_TFLG1 register *******************/
#define TIM_TFLG1_TF0		((uint32_t)0x00000001)
#define TIM_TFLG1_TF1		((uint32_t)0x00000002)
#define TIM_TFLG1_TF2		((uint32_t)0x00000004)
#define TIM_TFLG1_TF3		((uint32_t)0x00000008)
#define TIM_TFLG1_TF4		((uint32_t)0x00000010)
#define TIM_TFLG1_TF5		((uint32_t)0x00000020)
#define TIM_TFLG1_TF6		((uint32_t)0x00000040)
#define TIM_TFLG1_TF7		((uint32_t)0x00000080)

/******************* Bit definitions for TIM_TFLG2 register *******************/
#define TIM_TFLG2_TOVF		((uint32_t)0x00000080)

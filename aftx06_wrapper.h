/**
  ******************************************************************************
  * @file    aftx06.h
  * @author  Grant Goldenberg
  * @version V1.0.000
  * @date    28-March-2022
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
  * @brief Memory-Mapped On-board Peripherals
  */

typedef struct
{
	__IO uint32_t LEDS;	        /*!< LED enable/disable register,		Address offset: 0x00 */
	__IO uint32_t SS;			/*!< Seven segment output register,	    Address offset: 0x04 */
	__IO uint8_t  GPIO;			/*!< GPIO read/write register,			Address offset: 0x08 */
	uint8_t       RESERVED0;	/*!< Reserved,	                                        0x09 */
	uint16_t      Reserved1;	/*!< Reserved,                                          0x0A */
	__IO uint32_t SW;			/*!< Toggle/push button register,		Address offset: 0x0C */
	__IO uint16_t LCD;			/*!< LCD control register,				Address offset: 0x10 */
	uint16_t 	  RESERVED2;	/*!< Reserved,							                0x12 */
} MMOP_TypeDef;


/**
  * @brief Peripheral Memory MAP
  */

#define BOTTOMRAM_BASE      ((uint32_t)0x00000000)
#define SELFTEST_BASE	    ((uint32_t)0x00000200)
#define TOPRAM_BASE		    ((uint32_t)0x00008000)
#define SRAM_BASE		    ((uint32_t)0x00008400)
#define GPIO_BASE	        ((uint32_t)0x80000000)
#define PWM_BASE		    ((uint32_t)0x80010000)
#define TIM_BASE	        ((uint32_t)0x80020000)
#define SPI_BASE		    ((uint32_t)0x80030000)
#define I2C_BASE	        ((uint32_t)0x80040000)
#define SASA_BASE		    ((uint32_t)0x90000000)
#define CLINT_BASE		    ((uint32_t)0xE0000000)
#define PLIC_BASE	        ((uint32_t)0xE0010000)

/*!< Peripheral memory map */
#define MMOP_BASE			(SRAM_BASE + 0x00012C00)


/**
  * @brief Peripheral Declaration
  */

#define MMOP				((MMOP_TypeDef *) MMOP_BASE)

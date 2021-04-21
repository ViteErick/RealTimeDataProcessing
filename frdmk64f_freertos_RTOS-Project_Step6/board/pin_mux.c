/*
 * Copyright (c) 2016, Freescale Semiconductor, Inc.
 * Copyright 2016-2017 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */


/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v3.0
processor: MK64FN1M0xxx12
package_id: MK64FN1M0VLL12
mcu_data: ksdk2_0
processor_version: 2.0.0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

#include "fsl_common.h"
#include "fsl_port.h"
#include "pin_mux.h"
#include "board.h"


/*	SW3	*/
#define PIN4_IDX                         4u   /*!< Pin number for pin 4 in a port */
/*	SW2	*/
#define PIN6_IDX                         6u   /*!< Pin number for pin 6 in a port */

//#define PIN16_IDX                       16u   /*!< Pin number for pin 16 in a port */
//#define PIN17_IDX                       17u   /*!< Pin number for pin 17 in a port */
//#define PIN22_IDX                       22u   /*!< Pin number for pin 22 in a port */
//#define PIN21_IDX                       21u   /*!< Pin number for pin 21 in a port */
//#define PIN26_IDX                       26u   /*!< Pin number for pin 26 in a port */
#define PIN10_IDX                       10u   /*!< Pin number for pin 16 in a port */
#define PIN11_IDX                       11u   /*!< Pin number for pin 16 in a port */
#define PIN24_IDX                       24u   /*!< Pin number for pin 16 in a port */
#define PIN25_IDX                       25u   /*!< Pin number for pin 16 in a port */
#define PIN0_IDX                         0u   /*!< Pin number for pin 0 in a port */
#define PIN1_IDX                         1u   /*!< Pin number for pin 1 in a port */
#define PIN5_IDX                         5u   /*!< Pin number for pin 5 in a port */
#define PIN12_IDX                       12u   /*!< Pin number for pin 12 in a port */
#define PIN13_IDX                       13u   /*!< Pin number for pin 13 in a port */
#define PIN14_IDX                       14u   /*!< Pin number for pin 14 in a port */
#define PIN15_IDX                       15u   /*!< Pin number for pin 15 in a port */
#define PIN16_IDX                       16u   /*!< Pin number for pin 16 in a port */
#define PIN17_IDX                       17u   /*!< Pin number for pin 17 in a port */
#define PIN18_IDX                       18u   /*!< Pin number for pin 18 in a port */
#define SOPT5_UART0TXSRC_UART_TX      0x00u   /*!< UART 0 transmit data source select: UART0_TX pin */

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '62', peripheral: UART0, signal: RX, pin_signal: PTB16/SPI1_SOUT/UART0_RX/FTM_CLKIN0/FB_AD17/EWM_IN}
  - {pin_num: '63', peripheral: UART0, signal: TX, pin_signal: PTB17/SPI1_SIN/UART0_TX/FTM_CLKIN1/FB_AD16/EWM_OUT_b}
  - {pin_num: '90', peripheral: ENET, signal: 'TMR_1588, 0', pin_signal: PTC16/UART3_RX/ENET0_1588_TMR0/FB_CS5_b/FB_TSIZ1/FB_BE23_16_BLS15_8_b}
  - {pin_num: '91', peripheral: ENET, signal: 'TMR_1588, 1', pin_signal: PTC17/UART3_TX/ENET0_1588_TMR1/FB_CS4_b/FB_TSIZ0/FB_BE31_24_BLS7_0_b}
  - {pin_num: '92', peripheral: ENET, signal: 'TMR_1588, 2', pin_signal: PTC18/UART3_RTS_b/ENET0_1588_TMR2/FB_TBST_b/FB_CS2_b/FB_BE15_8_BLS23_16_b}
  - {pin_num: '54', peripheral: ENET, signal: RMII_MDC, pin_signal: ADC0_SE9/ADC1_SE9/PTB1/I2C0_SDA/FTM1_CH1/RMII0_MDC/MII0_MDC/FTM1_QD_PHB}
  - {pin_num: '53', peripheral: ENET, signal: RMII_MDIO, pin_signal: ADC0_SE8/ADC1_SE8/PTB0/LLWU_P5/I2C0_SCL/FTM1_CH0/RMII0_MDIO/MII0_MDIO/FTM1_QD_PHA, slew_rate: fast,
    open_drain: enable, drive_strength: low, pull_select: up, pull_enable: enable, passive_filter: disable}
  - {pin_num: '42', peripheral: ENET, signal: RMII_RXD1, pin_signal: CMP2_IN0/PTA12/CAN0_TX/FTM1_CH0/RMII0_RXD1/MII0_RXD1/I2C2_SCL/I2S0_TXD0/FTM1_QD_PHA}
  - {pin_num: '43', peripheral: ENET, signal: RMII_RXD0, pin_signal: CMP2_IN1/PTA13/LLWU_P4/CAN0_RX/FTM1_CH1/RMII0_RXD0/MII0_RXD0/I2C2_SDA/I2S0_TX_FS/FTM1_QD_PHB}
  - {pin_num: '44', peripheral: ENET, signal: RMII_CRS_DV, pin_signal: PTA14/SPI0_PCS0/UART0_TX/RMII0_CRS_DV/MII0_RXDV/I2C2_SCL/I2S0_RX_BCLK/I2S0_TXD1}
  - {pin_num: '45', peripheral: ENET, signal: RMII_TXEN, pin_signal: PTA15/SPI0_SCK/UART0_RX/RMII0_TXEN/MII0_TXEN/I2S0_RXD0}
  - {pin_num: '47', peripheral: ENET, signal: RMII_TXD1, pin_signal: ADC1_SE17/PTA17/SPI0_SIN/UART0_RTS_b/RMII0_TXD1/MII0_TXD1/I2S0_MCLK}
  - {pin_num: '46', peripheral: ENET, signal: RMII_TXD0, pin_signal: PTA16/SPI0_SOUT/UART0_CTS_b/UART0_COL_b/RMII0_TXD0/MII0_TXD0/I2S0_RX_FS/I2S0_RXD1}
  - {pin_num: '39', peripheral: ENET, signal: RMII_RXER, pin_signal: PTA5/USB_CLKIN/FTM0_CH2/RMII0_RXER/MII0_RXER/CMP2_OUT/I2S0_TX_BCLK/JTAG_TRST_b}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/*FUNCTION**********************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 *END**************************************************************************/
void BOARD_InitPins(void) {
  CLOCK_EnableClock(kCLOCK_PortA);                           /* Port A Clock Gate Control: Clock enabled */
  CLOCK_EnableClock(kCLOCK_PortB);                           /* Port B Clock Gate Control: Clock enabled */
  CLOCK_EnableClock(kCLOCK_PortC);
  CLOCK_EnableClock(kCLOCK_PortE); /* Port C Clock Gate Control: Clock enabled */

  /* ********************************************************************************************************* */
  //Configure the PTA4 as GPIO input for interrupt
  /*	This is the conf of SW3	*/
   const port_pin_config_t porta4_pin38_config = {
     kPORT_PullUp,                                            /* Internal pull-up resistor is enabled */
     kPORT_FastSlewRate,                                      /* Fast slew rate is configured */
     kPORT_PassiveFilterDisable,                              /* Passive filter is disabled */
     kPORT_OpenDrainDisable,                                  /* Open drain is disabled */
     kPORT_HighDriveStrength,                                 /* High drive strength is configured */
     kPORT_MuxAsGpio,                                         /* Pin is configured as PTA4 */
     kPORT_UnlockRegister                                     /* Pin Control Register fields [15:0] are not locked */
   };
   PORT_SetPinConfig(PORTA, PIN4_IDX, &porta4_pin38_config);  		 /* PORTA4 (pin 38) is configured as PTA4 */

   /*	This is the conf of SW2	*/
   const port_pin_config_t portc6_config = {
	kPORT_PullUp,                                            /* Internal pull-up resistor is enabled */
	kPORT_FastSlewRate,                                      /* Fast slew rate is configured */
	kPORT_PassiveFilterDisable,                              /* Passive filter is disabled */
	kPORT_OpenDrainDisable,                                  /* Open drain is disabled */
	kPORT_HighDriveStrength,                                 /* High drive strength is configured */
	kPORT_MuxAsGpio,                                         /* Pin is configured as PTC6 */
	kPORT_UnlockRegister                                     /* Pin Control Register fields [15:0] are not locked */
  };
  PORT_SetPinConfig(PORTC, PIN6_IDX, &portc6_config);        /* PORTC6) is configured as PTC6 */
/* ********************************************************************************************************* */

   const port_pin_config_t portc10_pin82_config = {
       kPORT_PullUp,                                            /* Internal pull-up resistor is enabled */
       kPORT_FastSlewRate,                                      /* Fast slew rate is configured */
       kPORT_PassiveFilterDisable,                              /* Passive filter is disabled */
       kPORT_OpenDrainEnable,                                   /* Open drain is enabled */
       kPORT_LowDriveStrength,                                  /* Low drive strength is configured */
       kPORT_MuxAlt2,                                           /* Pin is configured as I2C1_SCL */
       kPORT_UnlockRegister                                     /* Pin Control Register fields [15:0] are not locked */
     };
     PORT_SetPinConfig(PORTC, PIN10_IDX, &portc10_pin82_config); /* PORTC10 (pin 82) is configured as I2C1_SCL */

     const port_pin_config_t portc11_pin83_config = {
       kPORT_PullUp,                                            /* Internal pull-up resistor is enabled */
       kPORT_FastSlewRate,                                      /* Fast slew rate is configured */
       kPORT_PassiveFilterDisable,                              /* Passive filter is disabled */
       kPORT_OpenDrainEnable,                                   /* Open drain is enabled */
       kPORT_LowDriveStrength,                                  /* Low drive strength is configured */
       kPORT_MuxAlt2,                                           /* Pin is configured as I2C1_SDA */
       kPORT_UnlockRegister                                     /* Pin Control Register fields [15:0] are not locked */
     };
     PORT_SetPinConfig(PORTC, PIN11_IDX, &portc11_pin83_config); /* PORTC11 (pin 83) is configured as I2C1_SDA */

     const port_pin_config_t porte24_pin31_config = {
       kPORT_PullUp,                                            /* Internal pull-up resistor is enabled */
       kPORT_FastSlewRate,                                      /* Fast slew rate is configured */
       kPORT_PassiveFilterDisable,                              /* Passive filter is disabled */
       kPORT_OpenDrainEnable,                                   /* Open drain is enabled */
       kPORT_LowDriveStrength,                                  /* Low drive strength is configured */
       kPORT_MuxAlt5,                                           /* Pin is configured as I2C0_SCL */
       kPORT_UnlockRegister                                     /* Pin Control Register fields [15:0] are not locked */
     };
     PORT_SetPinConfig(PORTE, PIN24_IDX, &porte24_pin31_config); /* PORTE24 (pin 31) is configured as I2C0_SCL */

     const port_pin_config_t porte25_pin32_config = {
       kPORT_PullUp,                                            /* Internal pull-up resistor is enabled */
       kPORT_FastSlewRate,                                      /* Fast slew rate is configured */
       kPORT_PassiveFilterDisable,                              /* Passive filter is disabled */
       kPORT_OpenDrainEnable,                                   /* Open drain is enabled */
       kPORT_LowDriveStrength,                                  /* Low drive strength is configured */
       kPORT_MuxAlt5,                                           /* Pin is configured as I2C0_SDA */
       kPORT_UnlockRegister                                     /* Pin Control Register fields [15:0] are not locked */
     };
     PORT_SetPinConfig(PORTE, PIN25_IDX, &porte25_pin32_config); /* PORTE25 (pin 32) is configured as I2C0_SDA */

  PORT_SetPinMux(PORTA, PIN12_IDX, kPORT_MuxAlt4);           /* PORTA12 (pin 42) is configured as RMII0_RXD1 */
  PORT_SetPinMux(PORTA, PIN13_IDX, kPORT_MuxAlt4);           /* PORTA13 (pin 43) is configured as RMII0_RXD0 */
  PORT_SetPinMux(PORTA, PIN14_IDX, kPORT_MuxAlt4);           /* PORTA14 (pin 44) is configured as RMII0_CRS_DV */
  PORT_SetPinMux(PORTA, PIN15_IDX, kPORT_MuxAlt4);           /* PORTA15 (pin 45) is configured as RMII0_TXEN */
  PORT_SetPinMux(PORTA, PIN16_IDX, kPORT_MuxAlt4);           /* PORTA16 (pin 46) is configured as RMII0_TXD0 */
  PORT_SetPinMux(PORTA, PIN17_IDX, kPORT_MuxAlt4);           /* PORTA17 (pin 47) is configured as RMII0_TXD1 */
  PORT_SetPinMux(PORTA, PIN5_IDX, kPORT_MuxAlt4);            /* PORTA5 (pin 39) is configured as RMII0_RXER */

  const port_pin_config_t portb0_pin53_config = {
    kPORT_PullUp,                                            /* Internal pull-up resistor is enabled */
    kPORT_FastSlewRate,                                      /* Fast slew rate is configured */
    kPORT_PassiveFilterDisable,                              /* Passive filter is disabled */
    kPORT_OpenDrainEnable,                                   /* Open drain is enabled */
    kPORT_LowDriveStrength,                                  /* Low drive strength is configured */
    kPORT_MuxAlt4,                                           /* Pin is configured as RMII0_MDIO */
    kPORT_UnlockRegister                                     /* Pin Control Register fields [15:0] are not locked */
  };
  PORT_SetPinConfig(PORTB, PIN0_IDX, &portb0_pin53_config);  /* PORTB0 (pin 53) is configured as RMII0_MDIO */

  PORT_SetPinMux(PORTB, PIN1_IDX, kPORT_MuxAlt4);            /* PORTB1 (pin 54) is configured as RMII0_MDC */
  PORT_SetPinMux(PORTB, PIN16_IDX, kPORT_MuxAlt3);           /* PORTB16 (pin 62) is configured as UART0_RX */
  PORT_SetPinMux(PORTB, PIN17_IDX, kPORT_MuxAlt3);           /* PORTB17 (pin 63) is configured as UART0_TX */
  PORT_SetPinMux(PORTC, PIN16_IDX, kPORT_MuxAlt4);           /* PORTC16 (pin 90) is configured as ENET0_1588_TMR0 */
  PORT_SetPinMux(PORTC, PIN17_IDX, kPORT_MuxAlt4);           /* PORTC17 (pin 91) is configured as ENET0_1588_TMR1 */
  PORT_SetPinMux(PORTC, PIN18_IDX, kPORT_MuxAlt4);           /* PORTC18 (pin 92) is configured as ENET0_1588_TMR2 */

  	//PORT_SetPinMux(PORTB, PIN22_IDX, kPORT_MuxAsGpio);         /* PORTB22 (pin 68) is configured as PTB22 */
    //PORT_SetPinMux(PORTB, PIN21_IDX, kPORT_MuxAsGpio);         /* PORTB21 (pin 71) is configured as PTB21 */
    //PORT_SetPinMux(PORTE, PIN26_IDX, kPORT_MuxAsGpio);         /* PORTB26 (pin 73) is configured as PTB26 */
  SIM->SOPT5 = ((SIM->SOPT5 &
    (~(SIM_SOPT5_UART0TXSRC_MASK)))                          /* Mask bits to zero which are setting */
      | SIM_SOPT5_UART0TXSRC(SOPT5_UART0TXSRC_UART_TX)       /* UART 0 transmit data source select: UART0_TX pin */
    );

   //pin for the servo control - PWM
   PORT_SetPinMux(PORTC, PIN1_IDX, kPORT_MuxAlt4); /* PORTC1 (pin 71) is configured as FTM0_CH0 */

   /* Initialize NXPNCI GPIO pins below */
   /* IRQ and VEN PIN_MUX Configuration */
   PORT_SetPinMux(BOARD_NXPNCI_IRQ_PORT, BOARD_NXPNCI_IRQ_PIN, kPORT_MuxAsGpio);
   PORT_SetPinMux(BOARD_NXPNCI_VEN_PORT, NXPNCI_VEN_PIN, kPORT_MuxAsGpio);
   /* IRQ interrupt Configuration */
   NVIC_SetPriority(BOARD_NXPNCI_IRQ_PORTIRQn, 5);
   EnableIRQ(BOARD_NXPNCI_IRQ_PORTIRQn);
   PORT_SetPinInterruptConfig(BOARD_NXPNCI_IRQ_PORT, BOARD_NXPNCI_IRQ_PIN, kPORT_InterruptRisingEdge);

}

/*******************************************************************************
 * EOF
 ******************************************************************************/
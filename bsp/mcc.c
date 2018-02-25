/************************************************************************************************************************************/
/** @file		mcc.c
 * 	@brief		This is the mcc.c file generated using PIC24 / dsPIC33 / PIC32MM MCUs
 *	@auth		Microchip Technology Inc.
 *
 * 	@notes		x
 *
 * 	@section	Opens
 * 			none current
 *
 * 	@section	Legal Disclaimer
 * 			Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.
 */
/************************************************************************************************************************************/

//Dev
#ifdef _COMPILE_WITH_ECLIPSE_
	#include "bsp\cdt.h"
#endif

//**********************************************************************************************************************************//
// 											CONFIGURATION BITS: selected in the GUI													//
//**********************************************************************************************************************************//
//FSEC
#pragma config BWRP = OFF    		/* Boot Segment Write-Protect bit->Boot Segment may be written 									*/
#pragma config BSS = DISABLED    	/* Boot Segment Code-Protect Level bits->No Protection (other than BWRP) 						*/
#pragma config BSEN = OFF    		/* Boot Segment Control bit->No Boot Segment 													*/
#pragma config GWRP = OFF    		/* General Segment Write-Protect bit->General Segment may be written 							*/
#pragma config GSS = DISABLED    	/* General Segment Code-Protect Level bits->No Protection (other than GWRP) 					*/
#pragma config CWRP = OFF    		/* Configuration Segment Write-Protect bit->Configuration Segment may be written 				*/
#pragma config CSS = DISABLED    	/* Configuration Segment Code-Protect Level bits->No Protection (other than CWRP) 				*/
#pragma config AIVTDIS = OFF    	/* Alternate Interrupt Vector Table bit->Disabled AIVT 											*/

//FOSCSEL
#pragma config FNOSC = FRC    		/* Oscillator Source Selection->Internal Fast RC (FRC) 											*/
#pragma config PLLMODE = DISABLED   /* PLL Mode Selection->No PLL used; PLLEN bit is not available 									*/
#pragma config IESO = ON    		/* Two-speed Osc. Start-up Enbl bit->Start up device with FRC, then switch to user-sel osc. src.*/

//FOSC
#pragma config POSCMD = NONE    	/* Primary Oscillator Mode Select bits->Primary Oscillator disabled 							*/
#pragma config OSCIOFCN = OFF    	/* OSC2 Pin Function bit->OSC2 is clock output 													*/
#pragma config SOSCSEL = OFF    	/* SOSC Power Selection Configuration bits->Digital (SCLKI) mode 								*/
#pragma config PLLSS = PLL_PRI    	/* PLL Secondary Selection Configuration bit->PLL is fed by the Primary oscillator 				*/
#pragma config IOL1WAY = ON    		/* Peripheral pin select configuration bit->Allow only one reconfiguration				 		*/
#pragma config FCKSM = CSDCMD    	/* Clock Switching Mode bits->Both Clock switching and Fail-safe Clock Monitor are disabled 	*/

//FWDT
#pragma config WDTPS = PS32768    	/* Watchdog Timer Postscaler bits->1:32768 														*/
#pragma config FWPSA = PR128    	/* Watchdog Timer Prescaler bit->1:128 															*/
#pragma config FWDTEN = OFF    		/* Watchdog Timer Enable bits->WDT and SWDTEN disabled 											*/
#pragma config WINDIS = OFF    		/* Watchdog Timer Window Enable bit->Watchdog Timer in Non-Window mode 							*/
#pragma config WDTWIN = WIN25    	/* Watchdog Timer Window Select bits->WDT Window is 25% of WDT period 							*/
#pragma config WDTCMX = WDTCLK    	/* WDT MUX Source Select bits->WDT clock source is determined by the WDTCLK Configuration bits 	*/
#pragma config WDTCLK = LPRC    	/* WDT Clock Source Select bits->WDT uses LPRC 													*/

//FPOR
#pragma config BOREN = ON    		/* Brown Out Enable bit->Brown Out Enable Bit 													*/
#pragma config LPCFG = OFF    		/* Low power regulator control->No Retention Sleep 												*/
#pragma config DNVPEN = ENABLE    	/* Downside Voltage Protctn Enbl bit->Downside protection enabled using ZPBOR when BOR inctve 	*/

//FICD
#pragma config ICS = PGD2    		/* ICD Communication Channel Select bits->Communicate on PGEC2 and PGED2 						*/
#pragma config JTAGEN = OFF    		/* JTAG Enable bit->JTAG is disabled 															*/

// FDEVOPT1
#pragma config ALTCMPI = DISABLE    /* Alternate Comparator Input Enable bit->C1INC, C2INC & C3INC are on their standard pin locs 	*/
#pragma config TMPRPIN = OFF    	/* Tamper Pin Enable bit->TMPRN pin function is disabled 										*/
#pragma config SOSCHP = ON    		/* SOSC High Power Enable bit (valid only when SOSCSEL = 1->Enable SOSC high power mode (dflt) 	*/
#pragma config ALTI2C1 = ALTI2CEN	/* Alternate I2C pin Location->SDA1 and SCL1 on RB9 and RB8 									*/

#include "mcc.h"


/************************************************************************************************************************************/
/**	@fcn		void SYSTEM_Initialize(void)
 *  @brief		x
 *  @details	x
 */
/************************************************************************************************************************************/
void SYSTEM_Initialize(void) {

	//Init
	PIN_MANAGER_Initialize();
    INTERRUPT_Initialize();
    OSCILLATOR_Initialize();

    return;
}


/************************************************************************************************************************************/
/**	@fcn		void OSCILLATOR_Initialize(void)
 *  @brief		x
 *  @details	x
 */
/************************************************************************************************************************************/
void OSCILLATOR_Initialize(void) {
    // CF no clock failure; NOSC FRC; SOSCEN disabled; POSCEN disabled; CLKLOCK unlocked; OSWEN Switch is Complete; IOLOCK not-active;
    __builtin_write_OSCCONL((uint8_t) (0x0000 & 0x00FF));
    // CPDIV 1:1; PLLEN disabled; DOZE 1:8; RCDIV FRC; DOZEN disabled; ROI disabled;
    CLKDIV = 0x3000;
    // STOR disbl; STORPOL.Int when STOR:1; STSIDL:disbl; STLPOL.Int when STLOCK:1; STLOCK:disbl; STSRC:SOSC; STEN:disbl; TUN:CenterF;
    OSCTUN = 0x0000;
    // ROEN disabled; ROSEL FOSC; ROSIDL disabled; ROSWEN disabled; ROOUT disabled; ROSLP disabled;
    REFOCONL = 0x0000;
    // RODIV 0;
    REFOCONH = 0x0000;
    // ROTRIM 0;
    REFOTRIML = 0x0000;
    // DCOTUN 0;
    DCOTUN = 0x0000;
    // DCOFSEL 8; DCOEN disabled;
    DCOCON = 0x0700;
    // DIV 0;
    OSCDIV = 0x0000;
    // TRIM 0;
    OSCFDIV = 0x0000;

    return;
}


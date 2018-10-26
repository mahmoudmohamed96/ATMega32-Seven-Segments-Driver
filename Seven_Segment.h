/*
 * seven_segmrnt.h
 *
 *  Created on: Oct 13, 2018
 *      Author: Mahmoud Mohamed Younis
 */

#ifndef SEVEN_SEGMENT_H_
#define SEVEN_SEGMENT_H_

#include <avr/io.h>

//*************************************************************************************************//
// Data Bus of Seven segment decoder --> 4 bits
#define DataBusDirection DDRB
#define DataBus PORTB
#define D0 PB0
#define D1 PB1
#define D2 PB2
#define D3 PB3
//*************************************************************************************************//
// Control Bus --> seven segment in design is active low or comman cathod
// so, when we want to atcivate an seven segment, pin will be output low.
#define ControlBusDirection DDRC
#define ControlBus PORTC
#define C1 PC2
#define C2 PC3
#define C3 PC5
#define C4 PC4
//*************************************************************************************************//
// in this software design i will use 4 seven segments
// so, we will have 4 function each one will activate only one seven segments
// if you wnat to control more sich add more function to control.
void Seven_Segment_Data_Bus_Init(void);         // Data Bus initialization
void Seven_Segment1_Init(void);   // activate seven segment number 1
void Seven_Segment2_Init(void);   // activate seven segment number 2
void Seven_Segment3_Init(void);   // activate seven segment number 3
void Seven_Segment4_Init(void);   // activate seven segment number 4
void Seven_Segment_Display_Number(unsigned char number);
//*************************************************************************************************//
// while using more than one seven segment display, using this commands i can
// toggle any seven segment
// Note: sevent segments is active low or comman cathode
#define display_1_on    ( ControlBus |=  (1<<C1) )
#define display_1_off   ( ControlBus &= ~(1<<C1) )
#define display_2_on    ( ControlBus |=  (1<<C2) )
#define display_2_off   ( ControlBus &= ~(1<<C2) )
#define display_3_on    ( ControlBus |=  (1<<C3) )
#define display_3_off   ( ControlBus &= ~(1<<C3) )
#define display_4_on    ( ControlBus |=  (1<<C4) )
#define display_4_off   ( ControlBus &= ~(1<<C4) )
//*************************************************************************************************//
#endif /* SEVEN_SEGMENT_H_ */

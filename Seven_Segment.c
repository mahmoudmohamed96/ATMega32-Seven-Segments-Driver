/*
 * seven_segment.c
 *
 *  Created on: Oct 13, 2018
 *      Author: Mahmoud Mohamed Younis
 */
#include "seven_segment.h"

//*****************************************************************************************************//
void Seven_Segment_Data_Bus_Init(void)
{
	DataBusDirection |=  (1<<D0) |   (1<<D1) |   (1<<D2) |  (1<<D3); // all data bus pins output
	DataBus          &= ~(1<<D0) &  ~(1<<D1) &  ~(1<<D2) & ~(1<<D3); // initialy low
}
//*****************************************************************************************************//
void Seven_Segment1_Init(void)
{
	ControlBusDirection |=  (1<<C1); // output
	ControlBus          |=  (1<<C1); // acivate seven segment number 1
}
//*****************************************************************************************************//
void Seven_Segment2_Init(void)
{
	ControlBusDirection |=  (1<<C2); // output
	ControlBus          |=  (1<<C2); // acivate seven segment number 2
}
//*****************************************************************************************************//
void Seven_Segment3_Init(void)
{
	ControlBusDirection |=  (1<<C3); // output
	ControlBus          |=  (1<<C3); // acivate seven segment number 3
}
//*****************************************************************************************************//
void Seven_Segment4_Init(void)
{
	ControlBusDirection |=  (1<<C4); // output
	ControlBus          |=  (1<<C4); // acivate seven segment number 4
}
//*****************************************************************************************************//
void Seven_Segment_Display_Number(unsigned char number)
{
	switch(number)
	{
	// Start of switch case
	case 0: // display numberber 0
	{
		DataBus &= ~(1<<D0);
		DataBus &= ~(1<<D1);
		DataBus &= ~(1<<D2);
		DataBus &= ~(1<<D3);
		return;
	}
	case 1: // display numberber 1
	{
		DataBus |=  (1<<D0);
		DataBus &= ~(1<<D1);
		DataBus &= ~(1<<D2);
		DataBus &= ~(1<<D3);
		return;
	}
	case 2: // display numberber 2
	{
		DataBus &= ~(1<<D0);
		DataBus |=  (1<<D1);
		DataBus &= ~(1<<D2);
		DataBus &= ~(1<<D3);
		return;
	}
	case 3: // display numberber 3
	{
		DataBus |=  (1<<D0);
		DataBus |=  (1<<D1);
		DataBus &= ~(1<<D2);
		DataBus &= ~(1<<D3);
		break;
	}
	case 4: // display numberber 4
	{
		DataBus &= ~(1<<D0);
		DataBus &= ~(1<<D1);
		DataBus |=  (1<<D2);
		DataBus &= ~(1<<D3);
		return;
	}
	case 5: // display numberber 5
	{
		DataBus |=  (1<<D0);
		DataBus &= ~(1<<D1);
		DataBus |=  (1<<D2);
		DataBus &= ~(1<<D3);
		return;
	}
	case 6: // display numberber 6
	{
		DataBus &= ~(1<<D0);
		DataBus |=  (1<<D1);
		DataBus |=  (1<<D2);
		DataBus &= ~(1<<D3);
		return;
	}
	case 7: // display numberber 7
	{
		DataBus |=  (1<<D0);
		DataBus |=  (1<<D1);
		DataBus |=  (1<<D2);
		DataBus &= ~(1<<D3);
		return;
	}
	case 8: // display numberber 8
	{
		DataBus &= ~(1<<D0);
		DataBus &= ~(1<<D1);
		DataBus &= ~(1<<D2);
		DataBus |=  (1<<D3);
		return;
	}
	case 9: // display numberber 9
	{
		DataBus |=  (1<<D0);
		DataBus &= ~(1<<D1);
		DataBus &= ~(1<<D2);
		DataBus |=  (1<<D3);
		return;
	}
	default: // do nothing
	{
		return;
	}
	// End of switch case
	}
	return;
}

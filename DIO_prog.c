#include"library/STD_TYPES.h"
#include"library/BIT_MATH.h"
#include"DIO_interface.h"
#include"DIO_private.h"

/*************SetPin function Implementation***************/

void DIO_vidSetPinVal(u8 PortId, u8 PinId, u8 PinVal)
{


 if(PortId <= DIO_PORTD && PinId <= DIO_PIN7)

 {
   if(PinVal == DIO_HIGH)
   {
	   switch(PortId)
		{
		case DIO_PORTA: SET_BIT(PORTA_REG, PinId); break;
		case DIO_PORTB: SET_BIT(PORTB_REG, PinId); break;
		case DIO_PORTC: SET_BIT(PORTC_REG, PinId); break;
		case DIO_PORTD: SET_BIT(PORTD_REG, PinId); break;

		}
   }
   else if(PinVal == DIO_LOW)
   {
	   switch(PortId)
	   {
		case DIO_PORTA: CLR_BIT(PORTA_REG, PinId); break;
		case DIO_PORTB: CLR_BIT(PORTB_REG, PinId); break;
		case DIO_PORTC: CLR_BIT(PORTC_REG, PinId); break ;
		case DIO_PORTD: CLR_BIT(PORTD_REG, PinId); break;
	   }
   }
   else
   {
	   //Report error
   }
 }
}

/*************SetDir function Implementation***************/

void DIO_vidSetPinDir(u8 PortId, u8 PinId, u8 PinDir)
 {

	 if(PortId <= DIO_PORTD && PinId <= DIO_PIN7)

	 {
	   if(PinDir == DIO_OUTPUT)
	   {
		   switch(PortId)
			{
			case DIO_PORTA: SET_BIT(DDRA_REG, PinId); break;
			case DIO_PORTB: SET_BIT(DDRB_REG, PinId); break;
			case DIO_PORTC: SET_BIT(DDRC_REG, PinId); break;
			case DIO_PORTD: SET_BIT(DDRD_REG, PinId); break;

			}
	   }
	   else if(PinDir == DIO_INPUT)
	   {
		   switch(PortId)
		   {
			case DIO_PORTA: CLR_BIT(DDRA_REG, PinId); break;
			case DIO_PORTB: CLR_BIT(DDRB_REG, PinId); break;
			case DIO_PORTC: CLR_BIT(DDRC_REG, PinId); break;
			case DIO_PORTD: CLR_BIT(DDRD_REG, PinId); break;
		   }
	   }
	   else
	   {
		   //Report error
	   }
	 }
 }

/*****************************GerPin function Implementation**********************/

u8  DIO_u8GetPinVal(u8 PortId, u8 PinId)
	{
		u8 u8Result_LOC;
		if(PortId <= DIO_PORTD && PinId <= DIO_PIN7)
		{
			   switch(PortId)
			   {
				case DIO_PORTA: u8Result_LOC = GET_BIT(PINA_REG, PinId); break;
				case DIO_PORTB: u8Result_LOC = GET_BIT(PINB_REG, PinId); break;
				case DIO_PORTC: u8Result_LOC = GET_BIT(PINC_REG, PinId); break;
				case DIO_PORTD: u8Result_LOC = GET_BIT(PIND_REG, PinId); break;
			   }
		}

		return u8Result_LOC;
	}



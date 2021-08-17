#include <wiringPi.h>
#include <stdio.h>
#include <wiringPiI2C.h>
#include "BinClock.h"
#include "CurrentTime.h"
int Hours;
char test = "A";
//const int RTC = wiringPiI2CSetup(RTCAddr);
int main (void)
{
  wiringPiSetup () ;
  const int RTC = wiringPiI2CSetup(RTCAddr);
  pinMode (LED, OUTPUT) ;
  int count = 0;
  for (;;){
	//Hours = hexCompensation(wiringPiI2CReadReg8(RTCAddr, HOUR_REGISTER));	  
	
	 wiringPiI2CReadReg8(RTC, test);
	
	//Hours = hexCompensation(HOUR_REGISTER);  
	printf("%s", test);
	//delay(1000);
  }
  return 0 ;
}

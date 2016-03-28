// Do not remove the include below
#define DUTY_CYCLE 20
#define	FRONT_LED_PIN	10
#define	REAR_LED_PIN	9
#include "lab2_1.h"


void myAnalogWrite(int pin,	int percent,	int time)	{
	//int pin:	pin	number
	//int percent:	brightness	 0%	~	100%
	//int time:	brightness	 remains	the	same	during	 this	time	in	ms
	for (int ncycle = 0 ; ncycle < time/DUTY_CYCLE ; ++ncycle){
		digitalWrite(REAR_LED_PIN,HIGH);
		delay(percent * DUTY_CYCLE / 100);
		digitalWrite(REAR_LED_PIN,LOW);
		delay((100-percent) * DUTY_CYCLE / 100);
	}
}
void setup(){
	pinMode(REAR_LED_PIN,	OUTPUT);

}
void loop(){
	myAnalogWrite(REAR_LED_PIN,100,2000);
	myAnalogWrite(REAR_LED_PIN,75,2000);
	myAnalogWrite(REAR_LED_PIN,50,2000);
	myAnalogWrite(REAR_LED_PIN,25,2000);
	myAnalogWrite(REAR_LED_PIN,0,2000);
}

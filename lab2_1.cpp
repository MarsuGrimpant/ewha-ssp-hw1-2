// Do not remove the include below
#define DUTY_CYCLE 20
#define TIME 10000
#define	FRONT_LED_PIN	10
#define	REAR_LED_PIN	9
#include "lab2_2.h"

int percent = 100;

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
	myAnalogWrite(REAR_LED_PIN,percent = (percent == 0 ? 100 : percent-1),TIME/100);
}

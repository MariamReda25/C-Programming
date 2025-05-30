/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 26, 2025
 * Assignment 2 : EX_12( Heating Time based on Temperature value)
 *
 */
#include <stdio.h>
unsigned int heatingTime (unsigned int temperature);
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	unsigned int temperature,heatTime;
	printf("Enter Temperature:");
	scanf("%u",&temperature);
	heatTime = heatingTime(temperature);
	printf("Heating Time = %d",heatTime);


	return 0;
}
unsigned int heatingTime (unsigned int temperature){

	unsigned int heatingTime=0;
	if(temperature <= 30)
		heatingTime=7;
	else if (temperature <= 60)
		heatingTime=5;
	else if (temperature <= 90)
			heatingTime=3;
	else if (temperature <= 100)
			heatingTime=1;
	else
		heatingTime=0;

	return heatingTime;

}

/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 26, 2025
 * Assignment 2 : EX_13( Built-in floor function)
 *
 */
#include <stdio.h>
int ffloor (float num1,float num2);
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float num1,num2;
	printf("Enter Two floating Numbers:");
	scanf("%f %f",&num1,&num2);

	printf("Result = %d",ffloor(num1,num2));

	return 0;
}
int ffloor (float num1,float num2){
	int result;
	result = num1+num2;

	return result;
}

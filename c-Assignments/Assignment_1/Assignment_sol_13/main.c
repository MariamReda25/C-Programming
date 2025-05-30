/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 23, 2025
 * Assignment 1 : EX_13 (Power of Number)
 *
 */
#include <stdio.h>
#include <math.h>
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int number,power,result;
	printf("Enter Number and Power:");
	scanf("%d %d",&number,&power);

	result = pow(number,power);
	printf("Result of Number %d power %d = %d",number,power,result);

}

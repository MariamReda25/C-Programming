/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 19, 2025
 * Assignment 1 : EX_3
 *
 */
#include <stdio.h>
#define PI 3.14
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	float raduis,area,circumference;
	printf("Enter Radius of circle:");
	scanf("%f",&raduis);

	area = PI*PI*raduis;
	circumference = 2*PI*raduis;

	printf("Area = %.2f Cirumference = %.2f",area,circumference);


}

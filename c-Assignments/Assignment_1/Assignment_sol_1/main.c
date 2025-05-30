/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 19, 2025
 * Assignment 1 : EX_1
 *
 */
#include <stdio.h>
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int num1 , num2 ,result;
	printf("Enter Two integers:\n");

	printf("Number 1: ");
	scanf("%d",&num1);

	printf("\nNumber 2: ");
	scanf("%d",&num1);

	result = ((num1+num2)*3)-10;
	printf("Result of Equation = %d",result);




}

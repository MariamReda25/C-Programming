/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 23, 2025
 * Assignment 1 : EX_14 (Reverse Number)
 *
 */
#include <stdio.h>
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int number , revsersedNumber=0;
	printf("Enter Number:");
	scanf("%d",&number);

	while (number != 0){

		revsersedNumber = (revsersedNumber*10) + (number%10);
		number/=10;

	}
	printf("Reversed Number = %d",revsersedNumber);
}

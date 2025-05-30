/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 23, 2025
 * Assignment 1 : EX_15 (Number of digits)
 *
 */
#include <stdio.h>
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int number,count=0;
	printf("Enter Number:");
	scanf("%d",&number);

	while(number != 0){
		number/=10;
		count++;
	}
	printf("Number of digits = %d",count);

}

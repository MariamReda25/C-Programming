/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 21, 2025
 * Assignment 1 : EX_11 (Factorial Number)
 *
 */
#include <stdio.h>
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	unsigned int number;
	printf("Enter Number:");
	scanf("%d",&number);

	int i,factorial=1;
	for(i=number;i>0;i--){
		factorial*=i;
	}
	printf("Factorial of %d = %d",number,factorial);
}

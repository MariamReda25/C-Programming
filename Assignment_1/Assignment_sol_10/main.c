/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 21, 2025
 * Assignment 1 : EX_10 (Sum of first 100 integer)
 *
 */
#include <stdio.h>
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int sum=0,i;
	for(i=0;i<=100;i++){
		sum+=i;
	}
	printf("Sum of first 100 integer = %d",sum);
}

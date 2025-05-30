/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 24, 2025
 * Assignment 2 : EX_5 (odd or even Number)
 *
 */
#include <stdio.h>
int oddOrEven (int number);
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int number;
	printf("Enter Number:");
	scanf("%d",&number);

	int result = oddOrEven(number);
	if(result == 1)
		printf("Odd Number");
	else
		printf("Even Number");

}

int oddOrEven (int number){

	if(number %2 ==0)
		return 0;
	else
		return 1;
}

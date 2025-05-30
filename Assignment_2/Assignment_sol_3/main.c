/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 24, 2025
 * Assignment 2 : EX_3(check positive or negative number)
 *
 */
#include <stdio.h>
typedef enum{
	negative,
	positive,
	neither
}sign;

sign numberSign (int number);
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int number;
	printf("Enter Number:");
	scanf("%d",&number);

	sign sign_number = numberSign(number);

	if(sign_number == negative)
		printf("Negative Number");
	else if(sign_number == positive)
		printf("Positive Number");
	else
		printf("Number is zero");

}
sign numberSign (int number){

	if(number > 0)
		return positive;
	else if(number < 0)
		return negative;
	else
		return neither;
}

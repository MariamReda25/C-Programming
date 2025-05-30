/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 30 2025
 * Assignment 2 : EX_18( Power of 3)
 *
 */
#include <stdio.h>
int PowerOfThree (int number);
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int number;
	printf("Enter Number:");
	scanf("%d",&number);

	int result=PowerOfThree(number);
	if(result ==1)
		printf("Number %d is power of 3",number);
	else
		printf("Number %d is Not power of 3",number);


}
int PowerOfThree (int number){

	if (number <= 1)
		return 0;

	while (number % 3 == 0) {
		number /= 3;
	}

	return (number == 1);

}

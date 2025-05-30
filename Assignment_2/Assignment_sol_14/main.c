/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 26, 2025
 * Assignment 2 : EX_14(Fibonacci series)
 *
 */
#include <stdio.h>
int fibonacci (int number);
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int number;
	scanf("%d",&number);

	printf("Fibonacci of %d = %d",number,fibonacci(number));
	return 0;
}
int fibonacci (int number){
	if(number == 0)
		return 0;
	else if (number ==1)
		return 1;
	else
		return fibonacci(number-1)+fibonacci(number-2);
}

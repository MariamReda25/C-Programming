/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 21, 2025
 * Assignment 1 : EX_12 (prime Numbers)
 *
 */
#include <stdio.h>
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	unsigned int number;
	printf("Enter Number:");
	scanf("%d",&number);

	int i,notPrime=0;
	for(i=2;i<=number/2;i++){

		if(number%i == 0 && i != number){
			notPrime=1;
			break;
		}
	}

	if(notPrime == 0 && number != 1)
			printf("Prime Number");
	else
		printf("Not Prime Number ");

}

/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 19, 2025
 * Assignment 1 : EX_5
 *
 */
#include <stdio.h>
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int num1,num2;

	printf("Enter Two Numbers:\n");
	scanf("%d %d",&num1,&num2);

	if(num1==num2){
		printf("Two Numbers are equal");
	}else {
		printf("Two Numbers are not equal\n");

		if(num1>num2)
			printf("First Number is higher than Second Number");
		else
			printf("Second Number is higher than First Number");
	}

}

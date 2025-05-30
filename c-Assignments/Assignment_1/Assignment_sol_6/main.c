/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 19, 2025
 * Assignment 1 : EX_6
 *
 */
#include <stdio.h>
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int num1,num2,num3,min_val;
	printf("Enter Three Numbers:");
	scanf("%d %d %d",&num1,&num2,&num3);

	min_val=num1;
	if(num2<min_val)
		min_val = num2;

    if(num3<min_val){
		min_val=num3;
	}

    printf("Minimum value = %d",min_val);




}

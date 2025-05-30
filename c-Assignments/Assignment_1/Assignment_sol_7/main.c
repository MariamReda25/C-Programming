/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 21, 2025
 * Assignment 1 : EX_7 (Perfect Square Number)
 *
 */
#include <stdio.h>
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	unsigned int Number;
	printf("Enter Number:");
	scanf("%d",&Number);

	int i;
	for(i=0;;i++){

		if(i*i > Number){
			printf("Not Perfect Square Number");
			break;
		}else if (i*i == Number){
			printf("Number %d is perfect square of %d * %d",Number,i,i);
			break;
		}

	}
}


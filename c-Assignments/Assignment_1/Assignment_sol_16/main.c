/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 24, 2025
 * Assignment 1 : EX_16 (Half Pyramid)
 *
 */
#include <stdio.h>
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int i,j,height;
	printf("Enter Height of pyramid:");
	scanf("%d",&height);

	for (i=0; i<height; i++){
		for(j=0; j<=i ; j++){
			printf("*");
		}
		printf("\n");
	}

}

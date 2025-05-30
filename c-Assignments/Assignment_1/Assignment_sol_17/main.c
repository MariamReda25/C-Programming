/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 24, 2025
 * Assignment 1 : EX_17 (Inverted Pyramid)
 *
 */
#include <stdio.h>
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int i,j,height;
	printf("Enter Height of Pyramid:");
	scanf("%d",&height);

	for(i=height; i>0 ; i--){
		for(j=0; j<i ; j++){
			printf("*");
		}
		printf("\n");
	}
}

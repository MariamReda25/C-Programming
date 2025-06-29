/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 30, 2025
 * Assignment 3 : EX_7 (compute 100th term of series 1 3 5 7 ... )
 *
 */
#include <stdio.h>
#define ARRAY_SIZE 100
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int arr[ARRAY_SIZE];
	int i;
	arr[0] = 1;
	for(i=1 ; i<ARRAY_SIZE ;i++){

		arr[i]= arr[i-1]+2;
	}
	for(i=0; i<ARRAY_SIZE; i++){
		printf("%d ",arr[i]);
	}




}

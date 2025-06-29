/*
 * Author: Mariam Reda Ibrahim
 * Created on: Jun 2, 2025
 * Assignment 3 : EX_24 (Find second largest number in array )
 *
 */
#include <stdio.h>
#include <string.h>
#define ARRAY_SIZE 5
int second_largest_number (int *arr,int size);
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int arr[ARRAY_SIZE] = {9,9,9,9,9};
	int second_max = second_largest_number(arr,ARRAY_SIZE);

	printf(" second largest element in array = %d ",second_max);
}
int second_largest_number (int *arr,int size){
	int i,max ,second_max;

    max = second_max =  -2147483648; /* Minimum value for 4-bytes integer */

	if(size < 2){
		printf("Array must have at least 2 elements.\n");
		return -1;
	}

	for (i=0 ; i<size ;i++){
		if(arr[i] > max){
			second_max = max;
			max = arr[i];
		}else if (arr[i] < max && arr[i]>second_max) {
			second_max = arr[i];
		}
	}

	if (second_max ==  -2147483648)
	  printf("No distinct second largest number\n ");

	return second_max;
}

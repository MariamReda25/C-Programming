/*
 * Author: Mariam Reda Ibrahim
 * Created on: Jun 2, 2025
 * Assignment 3 : EX_19 (Compare two arrays with same length )
 *
 */
#include <stdio.h>
#include <string.h>
#define ARRAY_SIZE 5
int compare_arrays (int *arr1 ,int *arr2, int size);
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int arr1[ARRAY_SIZE] = {1,2,3,4,5};
	int arr2[ARRAY_SIZE] = {1,2,3,4,5};

	int compare = compare_arrays(arr1,arr2,ARRAY_SIZE);
	if(compare == 0)
		printf("Arrays are  identical");
	else
		printf("Arrays are not identical");
}
int compare_arrays (int *arr1 ,int *arr2, int size){

	int i;
	for(i=0; i<size ; i++){
		if(arr1[i] != arr2[i])
			return 1;
	}
	return 0;
}

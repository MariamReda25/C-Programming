/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 30, 2025
 * Assignment 3 : EX_1 (sum of array elements )
 *
 */
#define ARRAY_SIZE 10
#include <stdio.h>
int summation (int *arr, int size);
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int arr[ARRAY_SIZE]= {1,2,3,4,5,6,7,8,9,10};
	int sum = summation(arr,ARRAY_SIZE);

	printf("Sum of array elements = %d",sum);


}
int summation (int *arr, int size){

	int i,sum=0;
	for(i=0; i<size ;i++){
		sum+=arr[i];
	}

	return sum;
}

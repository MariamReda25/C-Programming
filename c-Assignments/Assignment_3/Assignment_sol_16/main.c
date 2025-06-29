/*
 * Author: Mariam Reda Ibrahim
 * Created on: Jun 2, 2025
 * Assignment 3 : EX_16 (Reverse Array)
 *
 */
#include <stdio.h>
#include <string.h>
#define ARRAY_SIZE 4
void reverse_array(int *arr,int size);
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int arr[ARRAY_SIZE] = {1,3,5,7};
	reverse_array(arr,ARRAY_SIZE);

	int i;
	for(i=0; i<ARRAY_SIZE; i++){
		printf("%d ",arr[i]);
	}
}
void reverse_array(int *arr,int size){

	int i=0,j=size-1;

	while (i<j){
		int temp = arr[i];
		arr[i++] = arr[j];
		arr[j--] = temp;
	}
}

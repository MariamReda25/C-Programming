/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 30, 2025
 * Assignment 3 : EX_3 (Array Bubble Sort )
 *
 */
#include <stdio.h>
#define ARRAY_SIZE 4

void Bubble_sort (int *arr,int size);

int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int arr[ARRAY_SIZE] = {5,7,1,3};
	Bubble_sort(arr,ARRAY_SIZE);

	for(int i =0; i<ARRAY_SIZE ; i++){
		printf("%d",arr[i]);
	}
}

void Bubble_sort (int *arr,int size){

	int i,j,temp;

	for(i=0; i<size ; i++){

		for (j=0; j<size-(i+1) ; j++){

			if(arr[j] > arr[j+1]){
				temp = arr[j+1];
				arr[j+1]= arr[j];
				arr[j] = temp;
			}

		}
	}
}

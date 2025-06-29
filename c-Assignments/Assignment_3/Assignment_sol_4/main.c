/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 30, 2025
 * Assignment 3 : EX_4 (Array Selection Sort )
 *
 */
#include <stdio.h>
#define ARRAY_SIZE 4
void selection_sort(int *arr,int size);
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int arr[ARRAY_SIZE] = {5,7,1,3};
		selection_sort(arr,ARRAY_SIZE);

		for(int i =0; i<ARRAY_SIZE ; i++){
			printf("%d",arr[i]);
		}

}

void selection_sort (int *arr,int size){

	int i,j,min_index,temp;
	for(i=0; i<size ;i++){
		min_index = i;
		for(j=i+1 ; j<size ;j++){
			if(arr[j] < arr[min_index]){
				min_index = j;
			}
		}

		temp = arr[i];
		arr[i] = arr[min_index];
		arr[min_index] = temp;
	}
}

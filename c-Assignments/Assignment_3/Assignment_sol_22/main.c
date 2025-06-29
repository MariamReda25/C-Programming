/*
 * Author: Mariam Reda Ibrahim
 * Created on: Jun 29, 2025
 * Assignment 3 : EX_22 (Remove Duplicates values from sorted array )
 *
 */
#define OLD_ARRAY_SIZE 10

typedef enum {
	ERROR,
	PASS
}result;

int removeDuplicats (int *old_arr , int old_size, int *new_arr, int *new_size);
void sort_array (int *arr, int size);

#include <stdio.h>
int main () {


	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int arr[OLD_ARRAY_SIZE] = {1,2,3,6,6,4,4,5,5,5};
	int new_size = 0;
	int new_arr[OLD_ARRAY_SIZE];
	sort_array(arr,OLD_ARRAY_SIZE);

	if (removeDuplicats(arr,OLD_ARRAY_SIZE,new_arr,&new_size) == PASS ){

		for(int i =0;i<new_size;i++){
			printf("%d ",new_arr[i]);
		}
	}else {
		printf("Size of Array = ZERO");
	}


}
int removeDuplicats (int *old_arr , int old_size, int *new_arr, int *new_size){

	if (old_size == 0)
		return ERROR;

	int i=0,j=0;
	new_arr[j] = old_arr[i];

	for(i=1; i<old_size; i++){

       if (new_arr[j] != old_arr[i])
    	   new_arr[++j] = old_arr[i];
	}

	*new_size = j+1;
	return PASS;
}
void sort_array (int *arr, int size){

	int i,j;
	for(i=0;i<size;i++){
		for(j=0;j<size-(i+1);j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

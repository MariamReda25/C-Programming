/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 30, 2025
 * Assignment 3 : EX_6 (Number is LAST Occurrence "Linear search")
 *
 */
#include <stdio.h>
#define ARRAY_SIZE 10
int Linear_search (int *arr, int size ,int number);
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int arr[ARRAY_SIZE] = {19,10,5,7,3,11,5,10,19,1};
	int number;
	printf("Enter Number:");
	scanf("%d",&number);

    int number_index = Linear_search(arr,ARRAY_SIZE,number);

    if(number_index == -1)
    	printf("Number not found");
    else
    	printf("index of %d = %d",number,number_index);

}

/* Number is LAST Occurrence  */
int Linear_search (int *arr, int size ,int number){

	int i;
	for(i=size-1; i>=0 ;i--){
		if(arr[i] == number)
			return i;
	}
	return -1;
}

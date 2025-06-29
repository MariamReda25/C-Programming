/*
 * Author: Mariam Reda Ibrahim
 * Created on: Jun 2, 2025
 * Assignment 3 : EX_18 (longest consecutive of given number)
 *
 */
#include <stdio.h>
#include <string.h>
#define ARRAY_SIZE 14
int longest_consecutive(int *arr,int size,int number);
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int arr[ARRAY_SIZE]= {1,2,2,3,3,3,4,4,4,3,3,3,3,3};

	int number;
	printf("Enter number:");
	scanf("%d",&number);

	int long_consecutive = longest_consecutive(arr,ARRAY_SIZE,number);
	printf("Long consecutive of %d is %d",number,long_consecutive);
}
int longest_consecutive(int *arr,int size,int number){

	int i,count = 0,max_count=0;
	for(i=0; i<size ; i++){
		if(arr[i] == number){
			count++;
		}else {
			if(count>max_count){
				max_count = count;
				count = 0;
			}
		}
	}

   /*final check for last consecutive elements*/
	if(count>max_count){
		max_count = count;
		count = 0;
	}
	return max_count;
}

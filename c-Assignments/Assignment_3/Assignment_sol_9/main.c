/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 30, 2025
 * Assignment 3 : EX_9 (Fibonacci Series)
 *
 */
#include <stdio.h>
#define ARRAY_SIZE 100
int fibonacci (int number);
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int arr[ARRAY_SIZE],i,number;
	arr[0] = arr[1] =1;

	for(i=2; i<ARRAY_SIZE ; i++){
       arr[i] = arr[i-1]+arr[i-2];
	}

   printf("Enter number:");
   scanf("%d",&number);

   printf("value of fibonacci %d = %d\n",number,arr[number]);

   /* Using recursion Function */
   printf("value of fibonacci %d = %d",number,fibonacci(number));

}

int fibonacci (int number){

	if (number == 1 || number == 0)
		return 1;
	else
		return fibonacci (number -1) + fibonacci (number -2);
}

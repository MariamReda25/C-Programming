/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 25, 2025
 * Assignment 2 : EX_7( Multiple of)
 *
 */
#include <stdio.h>

typedef enum{
	false,
	true
}bool;
bool isMultipleOf (int num1, int num2);
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int num1,num2;
	bool result;

	printf("Enter Two Numbers:");
	scanf("%d %d",&num1,&num2);

	result=isMultipleOf(num1,num2);

	if(result == true)
		printf("Number %d is multiple of %d",num1,num2);
	else
		printf("Number %d is not multiple of %d",num1,num2);


	return 0;

}
bool isMultipleOf (int num1, int num2) {

	if(num2 !=0 && num1%num2 == 0)
		return true;
	else
		return false;
}

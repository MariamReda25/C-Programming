/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 25, 2025
 * Assignment 2 : EX_11( Power of 2)
 *
 */
#include <stdio.h>

typedef enum{
	false,
	true
}bool;

bool powerOfTwo (int number);
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int number;
	bool result;

	printf("Enter Number:");
	scanf("%d",&number);

	result=powerOfTwo(number);
	if(result == true)
		printf("%d is power of 2",number);
	else
		printf("%d is not power of 2",number);


	return 0;

}
bool powerOfTwo (int number){

	if (number < 1)
		return false;
	else if (number == 1)
		return true;

	while(number % 2 == 0){
		number/=2;
	}
	return (number == 1);
}

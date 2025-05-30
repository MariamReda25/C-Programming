/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 29 2025
 * Assignment 2 : EX_17( Number Representation as p^q)
 *
 */
#include <stdio.h>
#include <math.h>
int number_represention (int number);
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int number;
	printf("Enter Number:");
	scanf("%d",&number);

	int result = number_represention(number);
	if(result == 0)
		printf("Number can not represented as p^q");
	else
		printf("Number can represented as p^q");


}
int number_represention (int number){

	int i,j;

	if (number <= 1)
		return 0;

	for(i=2;i<number/2;i++){
		for(j=1;j<number;j++){
			if(pow(i,j) == number)
				return 1;
		}
	}
	return 0;
}

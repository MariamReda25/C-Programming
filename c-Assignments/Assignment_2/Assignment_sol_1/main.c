/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 24, 2025
 * Assignment 2 : EX_1 (Cube of Number)
 *
 */
#include <stdio.h>
void cubeOfNumber (int number);
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int number;
	printf("Enter Number:");
	scanf("%d",&number);

	cubeOfNumber(number);


}

void cubeOfNumber (int number){

	int cube = number*number*number;
	printf("Cube of Number %d = %d",number,cube);
}

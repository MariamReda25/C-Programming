/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 21, 2025
 * Assignment 1 : EX_8 (Grade)
 *
 */
#include <stdio.h>
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	unsigned int grade;
	printf("Enter Your grade:");
	scanf("%d",&grade);

	if(grade >= 85)
		printf("Excellent");
	else if (grade  >= 75 )
		printf("Very Good");
	else if (grade  >= 65)
		printf("Good");
	else if (grade  >= 50)
		printf("pass");
	else
		printf("Fail");
}



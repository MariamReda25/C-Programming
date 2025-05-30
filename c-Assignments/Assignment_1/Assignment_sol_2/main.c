/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 19, 2025
 * Assignment 1 : EX_2
 *
 */
#include <stdio.h>
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int degree_cel;
	printf("Enter Degree in Celsius:");
	scanf("%d",&degree_cel);

	float degree_feh = degree_cel*((float)9/5)+32;
	printf("Degree in Fahren:%.2f",degree_feh);


}

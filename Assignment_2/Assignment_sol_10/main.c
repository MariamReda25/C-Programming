/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 25, 2025
 * Assignment 2 : EX_10(Holes Counter)
 *
 */
#include <stdio.h>
int holesCount (int number);
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int number , count;
	printf("Enter Number:");
	scanf("%d",&number);

	count = holesCount(number);
	printf("Number of Holes = %d",count);

	return 0;

}
int holesCount (int number){
	int count=0;
	while(number != 0){
		switch(number%10){
		case 0:
		case 4:
		case 6:
		case 9:
			count++;
			break;
		case 8:
			count+=2;
			break;
		}
		number/=10;
	}
	return count;
}

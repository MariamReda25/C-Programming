/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 26, 2025
 * Assignment 2 : EX_12( cont number of ones )
 *
 */
#include <stdio.h>
unsigned int countOnes (unsigned int number);
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	unsigned int number;
	printf("Enter Number:");
	scanf("%u",&number);

	unsigned int counter = countOnes(number);
	printf("Number of one's in %u = %u",number,counter);

	return 0;
}
unsigned int countOnes (unsigned int number){
	int count = 0,i;
	unsigned int mask = 0x00000001;
	for(i=0;i<32;i++){
		if((number>>i) & mask ){
			count++;
		}
	}
	return count;
}

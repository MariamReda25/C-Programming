/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 30 2025
 * Assignment 2 : EX_19( Maximum Consecutive ones )
 *
 */
#include <stdio.h>
int consecutive_ones (unsigned short number);
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	unsigned short number;
	printf("Enter Number:");
	scanf("%hd",&number);

	int max_ones = consecutive_ones(number);
	printf("max consecutive ones in %u = %d",number,max_ones);

}
int consecutive_ones (unsigned short number){
	int i,max_ones=0,counter=0;
	unsigned short mask = 0x0001;
	for (i=0;i<16;i++){
		if (mask & (number>>i)){
			counter++;
		}else{
			if(counter >= max_ones){
				max_ones = counter;
				counter=0;
			}
		}
	}
	return max_ones;
}

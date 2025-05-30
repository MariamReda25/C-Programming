/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 25, 2025
 * Assignment 2 : EX_8( Prime Numbers of certain interval)
 *
 */
#include <stdio.h>
void primeNumbers (int startInterval, int endInterval);
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int start,end;
	printf("Enter start and end interval:");
	scanf("%d %d",&start,&end);
	primeNumbers(start,end);
	return 0;

}
void primeNumbers (int startInterval, int endInterval){

	int i,j,prime=1;
	for(i=startInterval;i<=endInterval;i++){
		for(j=2,prime=1;j<=i/2;j++){
			if(i%j==0 && i!=j){
				prime = 0;
				break;
			}
		}
		if(prime == 1 && i != 1)
			printf("%d ",i);
	}

}

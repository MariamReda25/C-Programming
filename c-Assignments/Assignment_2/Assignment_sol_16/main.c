/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 26, 2025
 * Assignment 2 : EX_16( Maximal XOR Value)
 *
 */
#include <stdio.h>
#define LEFT_RIGHT_CONDITION -1
int maximal_XOR_Value (unsigned int L , unsigned int R);
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	unsigned int left,right;
	printf("Enter L , R :");
	scanf("%u %u",&left,&right);

	int result = maximal_XOR_Value(left,right);
	if(result == LEFT_RIGHT_CONDITION)
		printf("invalid values for L , R");
	else
		printf("Maximal XOR Value = %d",result);

	return 0;
}
int maximal_XOR_Value (unsigned int L , unsigned int R){
	int i,j,max_value=0;
	if(L >=1 && L <=R && R<=1000){
		for(i=L;i<=R;i++){
			for(j=i;j<=R;j++){
				if ((i^j) > max_value)
					max_value = i^j;
			}
		}
	}else
		return -1;
	return max_value;
}

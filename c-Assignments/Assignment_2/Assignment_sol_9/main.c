/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 25, 2025
 * Assignment 2 : EX_9( Swap two Numbers)
 *
 */
#include <stdio.h>
void swap (int *num1, int *num2);
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int num1,num2;
	printf("Enter Two Numbers:");
    scanf("%d %d",&num1,&num2);

    swap(&num1,&num2);
    printf("Swapped num1 = %d num2 = %d",num1,num2);
	return 0;

}
/* Using temp variable*/
void swap (int *num1, int *num2){

	int tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}
/* Without need of temp variable */
//void swap (int *num1, int *num2){
//
//	*num1 = *num1 + *num2;
//	*num2 = *num1 - *num2;
//	*num1 = *num1 - *num2;
//}

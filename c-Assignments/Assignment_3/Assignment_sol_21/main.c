/*
 * Author: Mariam Reda Ibrahim
 * Created on: Jun 29, 2025
 * Assignment 3 : EX_21 (Determine values of array between upper and lower values including them)
 *
 */
#include <stdio.h>
#include <stddef.h>

int g_size = 2;
unsigned char g_arr[256];

unsigned char * determine_array_values (unsigned char Upper, unsigned char Lower);
int main (){

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	unsigned char *arr = NULL;
	unsigned char upper,lower;

	printf("Enter lower and upper values :");
	scanf("%u %u",&lower,&upper);

     arr = determine_array_values(upper,lower);
     int i;
     for(i=0 ; i<g_size; i++){
    	 printf("%u ",arr[i]);
     }


}

unsigned char * determine_array_values (unsigned char Upper, unsigned char Lower){


	if(Lower > Upper){
		 g_arr[0] = g_arr[1] = 0xFF;
	} else {
		int i;
		g_size = 0;
		for(i=Upper; i>=Lower; i--,g_size++){
			g_arr[g_size] = i;
		}
	}
	return g_arr;
}

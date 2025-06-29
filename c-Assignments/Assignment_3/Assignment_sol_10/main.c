/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 30, 2025
 * Assignment 3 : EX_10 (Array Bubble Sort )
 *
 */
#include <stdio.h>
#define STRING_LENGTH 10
void toUpperCase (char *string);
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);


	char string[STRING_LENGTH];
	printf("Enter String:");
    gets(string);

	toUpperCase(string);
	printf("capitalized String : %s",string);


}
void toUpperCase (char *string){

	int i=0;
	while(string[i] != '\0'){
		if(string[i] >='a' && string[i]<= 'z')
			string[i]-=32;
		i++;
	}
}

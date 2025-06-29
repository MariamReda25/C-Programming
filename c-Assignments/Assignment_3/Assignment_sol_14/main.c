/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 30, 2025
 * Assignment 3 : EX_14 (Reverse string )
 *
 */
#include <stdio.h>
#include <string.h>

#define STRING_LENGTH 100

void reverse_string(char *str);
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char str[STRING_LENGTH];
	printf("Enter String:");
	gets(str);

	reverse_string(str);
	puts(str);



}
void reverse_string(char *str){

	int i = strlen(str)-1 ,j=0;

	while (i > j){
		char temp = str[j];
		str[j] = str[i];
		str[i] = temp;
		j++; i--;
	}

}

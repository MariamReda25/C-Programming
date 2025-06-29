/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 30, 2025
 * Assignment 3 : EX_12 (String length)
 *
 */
#include <stdio.h>

#define STRING_LENGTH 100
int string_length (char *str);
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

     char str[STRING_LENGTH];
     printf("Enter string:");
     gets(str);

     int str_length = string_length(str);
     printf("length of string = %d",str_length);


}
int string_length (char *str){

	int i=0;
	while (str[i] != '\0'){
		i++;
	}
	return i;
}

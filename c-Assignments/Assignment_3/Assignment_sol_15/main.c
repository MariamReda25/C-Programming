/*
 * Author: Mariam Reda Ibrahim
 * Created on: Jun 2, 2025
 * Assignment 3 : EX_15 (String concatenation )
 *
 */
#include <stdio.h>
#include <string.h>

#define STRING_LENGTH_1 100
#define STRING_LENGTH_2 20
void concate_string (char *str1,char *str2);
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char str1[STRING_LENGTH_1];
	char str2[STRING_LENGTH_2];

	printf("Enter first string :");
	gets(str1);

	printf("Enter second string :");
	gets(str2);

	concate_string(str1,str2);
	puts(str1);

}
void concate_string (char *str1,char *str2){

	int i = 0,str1_length = strlen(str1);
	while(str2[i] != '\0'){
		str1[str1_length++] = str2[i++];
	}
	str1[str1_length] = '\0';
}

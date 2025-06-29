/*
 * Author: Mariam Reda Ibrahim
 * Created on: Jun 2, 2025
 * Assignment 3 : EX_11 (Frequency of certain character )
 *
 */
#include <stdio.h>
#include <string.h>

#define STRING_LENGTH 10

void frequecy_of_character (char *string, char c);
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char str[STRING_LENGTH],ch;

	printf("Enter String :");
	gets(str);

	printf("Enter character:");
	scanf("%c",&ch);

	frequecy_of_character(str,ch);



}
void frequecy_of_character (char *string, char c){

	int i=0,count=0;
	while (string[i] != '\0'){
		if (string[i] == c)
			count++;
		i++;
	}
	printf("Frequency of character %c = %d",c,count);

}

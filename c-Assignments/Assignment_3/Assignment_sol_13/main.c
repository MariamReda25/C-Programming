/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 30, 2025
 * Assignment 3 : EX_13 (Remove non-alphabet characters)
 *
 */
#include <stdio.h>
#define STRING_LENGTH 100
void remove_nonAlphabet (char *str);
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char str[STRING_LENGTH];
	printf("Enter String:");
	gets(str);

	remove_nonAlphabet(str);
	puts(str);

}
void remove_nonAlphabet (char *str){
	int i = 0,j=0;
	while(str[i] != '\0'){
		if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
			str[j++] = str[i];
		}
		i++;
	}
	str[j] ='\0';
}

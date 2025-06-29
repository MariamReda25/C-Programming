/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 30, 2025
 * Assignment 3 : EX_23 (Frequency of characters in string )
 *
 */
#include <stdio.h>

#define STRING_LENGTH 10
#define CHARACTERS 128

/* Global array contain all characters in c */
char g_characters[CHARACTERS] = {0};

void characters_frequency (char *str);
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);


    char str[STRING_LENGTH];
    int i=0;

    printf("Enter string:");
    gets(str);

    characters_frequency(str);
    for(i=0; i<CHARACTERS ;i++){
    	if(g_characters[i] != 0){
    		printf("Frequency of character %c = %d\n",i,g_characters[i]);
    	}
    }


}
void characters_frequency (char *str){

	int i=0;
	while(str[i] != '\0'){
		g_characters[str[i]]++;
		i++;
	}
}

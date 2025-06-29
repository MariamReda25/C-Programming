/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 30, 2025
 * Assignment 3 : EX_2 (string characters is repeated or distinct )
 *
 */
#include <stdio.h>
#define STRING_SIZE 10

typedef enum {
	False,
	True
}bool;

bool distinct_string (char *str);
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char string[STRING_SIZE];
    gets(string);

	bool dis_string = distinct_string(string);

	if(dis_string == True)
		printf("String has distinct characters");
	else
		printf("String has repeated characters");


}

bool distinct_string (char *str){

	int i = 0, j = 0;
	while(str[i] != '\0'){
		j=i+1;
		while(str[j] != '\0'){
			if(str[i] == str[j++])
				return False;
		}

		i++;
	}
	return True;
}

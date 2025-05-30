/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 24, 2025
 * Assignment 2 : EX_2(check alphabet character)
 *
 */
#include <stdio.h>

typedef enum{
	false,
	true
}bool;
bool checkAlphabet (char c);

int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char c;
	printf("Enter character:");
	scanf("%c",&c);

	bool result= checkAlphabet(c);
	if(result == true)
		printf("Alphabet Character");
	else
		printf("Not Alphabet Character");

}

bool checkAlphabet (char c) {

	if((c>='A'&& c<='Z') || (c>='a'&& c<='z'))

		return true;
	else
		return false;
}

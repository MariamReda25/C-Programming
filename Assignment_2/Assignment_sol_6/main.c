/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 24, 2025
 * Assignment 2 : EX_6(to uppercase Function)
 *
 */
#include <stdio.h>
char toUpperCase (char c);
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char c,upper_c;
	printf("Enter Character:");
	scanf("%c",&c);

	upper_c = toUpperCase(c);
	printf("Upper case of %c = %c",c,upper_c);

}
char toUpperCase (char c){
	if(c >= 'a' && c <= 'z')
		return c-32;
	else
		return c;
}

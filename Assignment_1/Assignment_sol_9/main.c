/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 21, 2025
 * Assignment 1 : EX_9 (Simple Calculator)
 *
 */
#include <stdio.h>
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int operand1 , operand2, result;
	char operator;

    /* Firstly Enter character before operands to not consider Enter as operator */
	printf("Enter Operator:");
	scanf("%c",&operator);

	printf("Enter Two operands:");
	scanf("%d %d",&operand1,&operand2);

	switch(operator){
	case '+':
		result = operand1 + operand2;
		printf("Result = %d",result);
		break;
	case '-':
		result = operand1 - operand2;
		printf("Result = %d",result);
		break;
	case '*':
		result = operand1 * operand2;
		printf("Result = %d",result);
		break;
	case '/':
		result = (float) operand1 / operand2;
		printf("Result = %.2f",(float)result);
		break;
	default:
		printf("Invalid Operation");
	}





}

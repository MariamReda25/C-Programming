/*
 * Author: Mariam Reda Ibrahim
 * Created on: May 24, 2025
 * Assignment 2 : EX_4 (cal Function)
 *
 */
#include <stdio.h>
#include <stddef.h>

#define VALID_OPERTOR     0
#define INVALID_OPERTOR   1

int calculator (char operator, int operand1 , int operand2 ,int *error_op);
int main (void) {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char op;
	int num1,num2,error_op=VALID_OPERTOR;

	printf("Enter operator:");
	scanf("%c",&op);

	printf("Enter two operands:");
	scanf("%d %d",&num1,&num2);

	int result = calculator(op,num1,num2,&error_op);
	if(error_op == INVALID_OPERTOR)
		printf("Invalid operator");
	else
		printf("Result = %d",result);



}
int calculator (char operator, int operand1 , int operand2 ,int *error_op){

	switch(operator){
	case '+':
		return operand1+operand2;
	case'-':
		return operand1-operand2;
	case '*':
		return operand1*operand2;
	case '/':
		return (float)operand1/operand2;
	default:
		*error_op=INVALID_OPERTOR;
		return 0;

	}
}

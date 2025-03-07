/*
 ============================================================================
 Name        : func2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int factorial(int num);
int main(void) {
	int i;
	printf("enter a positive number: ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &i);

	printf("the factorial is : %d",factorial(i) );
}
int factorial(int num){
	if (num !=1)
		return num*factorial(num-1);
}

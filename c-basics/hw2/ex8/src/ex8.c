/*
 ============================================================================
 Name        : ex8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c;
	float a,b;
	printf("enter operator either +,-,*,/ ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &c);
	printf("enter two numbers ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f", &a, &b);
	switch(c){
	case'+':
		printf("%.1f + %.1f =%.1f", a,b,a+b);
		break;
	case'-':
		printf("%.1f - %.1f =%.1f", a,b,a-b);
		break;
	case'*':
		printf("%.1f * %.1f =%.1f", a,b,a*b);
		break;
	case'/':
		printf("%.1f / %.1f =%.1f", a,b,a/b);
		break;
	default:
		printf("ERORR!!!");
		break;
	}

}

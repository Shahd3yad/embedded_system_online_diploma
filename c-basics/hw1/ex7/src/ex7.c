/*
 ============================================================================
 Name        : ex7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a, b;
		printf("enter an integer a");
		fflush(stdin); fflush(stdout);
		scanf("%f", &a);
		printf("enter an integer b");
		fflush(stdin); fflush(stdout);
		scanf("%f", &b);
		a= b+a;
		b= a-b;
		a= a-b;
		printf("integer a= %f\r\n", a);
		printf("integer b= %f\r\n", b);
}

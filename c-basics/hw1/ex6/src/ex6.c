/*
 ============================================================================
 Name        : ex6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a, b, temp;
	printf("enter an integer a");
	fflush(stdin); fflush(stdout);
	scanf("%f", &a);
	printf("enter an integer b");
	fflush(stdin); fflush(stdout);
	scanf("%f", &b);
	temp= a;
	a=b;
	b=temp;
	printf("integer a= %f", a);
	printf("integer b= %f", b);
}

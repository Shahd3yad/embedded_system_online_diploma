/*
 ============================================================================
 Name        : ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a, b, sum;
	printf("enter two integers ");
	fflush(stdin); fflush(stdout);
	scanf("%d  %d", &a , &b);
	sum= a+b;
	printf("sum: %d", sum);
}

/*
 ============================================================================
 Name        : ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	printf("enter an integer you wanna check: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &i);
	if((i%2)==0)
	{
		printf("%d is an even number", i);
	}
	else
	{
		printf("%d is an odd number", i);
	}
}

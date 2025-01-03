/*
 ============================================================================
 Name        : string2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char c[20];

	printf("enter a string");
	fflush(stdin); fflush(stdout);
	gets(c);

	printf("the length of the string is %d", strlen(c));
}

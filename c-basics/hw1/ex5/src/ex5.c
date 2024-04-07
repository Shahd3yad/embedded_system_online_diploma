/*
 ============================================================================
 Name        : ex5.c
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
		printf("enter a character ");
		fflush(stdin); fflush(stdout);
		scanf("%c", &c);
		printf("ASCII for %c is %d", c, c);
}

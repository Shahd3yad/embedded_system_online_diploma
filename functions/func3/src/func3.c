/*
 ============================================================================
 Name        : func3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void reverse(){
	char c;
	fflush(stdout);fflush(stdin);
	scanf("%c", &c);
	if(c!='\n')
	{
		reverse();
		printf("%c", c);
	}
}
int main(void) {
	printf("enter a sentence: ");

	reverse();
	return 0;
}


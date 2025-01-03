/*
 ============================================================================
 Name        : string3.c
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
	char c[20], d[20];
	int i,y=0, len;

	printf("enter a string");
	fflush(stdin); fflush(stdout);
	gets(c);

	len = strlen(c);

	for(i=len-1; i>=0; --i){
		d[y]=c[i];
		++y;
	}
	d[y]=0;
	printf("reverse string is %s", d);
	return 0;

}

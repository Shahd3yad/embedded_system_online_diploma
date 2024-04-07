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
	float a,b,c;
	printf("enter 3 integers:");
	fflush(stdout); fflush(stdin);
	scanf("%f %f %f", &a, &b, &c);
	if(a>b)
	{
		if(a>c)
			printf("%f is the largest",a);
		else
			printf("%f is the largest", c);
	}
	else
	{
		if(b>c)
			printf("%f is the largest",b);
		else
			printf("%f is the largest",c);
	}

}

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
	int i, n;
	int factorial=1;
	printf("enter a number");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);
	if (n<0)
	{
		printf("ERORR!!! no factorial for negative numbers");
	}
	else
	{
		for(i=1; i<=n; ++i)
		{
			factorial*=i;
		}
		printf("factorial =%d ", factorial);
	}

}

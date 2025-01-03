/*
 * main.c
 *
 *  Created on: Oct 14, 2024
 *      Author: SHAHD
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[2][2], b[2][2], s[2][2];
	int r, c;
	printf("enter elements of matrix 1: \n");
	for (r=0; r<2; ++r)
	{
		for (c=0; c<2; ++c)
		{
			printf("enter a%d%d: ", r+1,c+1);
			fflush(stdin); fflush(stdout);
			scanf("%d", &a[r][c]);
		}
	}
	printf("enter elements of matrix 2: \n");
	for (r=0; r<2; ++r)
	{
		for (c=0; c<2; ++c)
		{
			printf("enter b%d%d: ", r+1,c+1);
			fflush(stdin); fflush(stdout);
			scanf("%d", &b[r][c]);
		}
	}
	for (r=0; r<2; ++r)
	{
		for (c=0; c<2; ++c)
		{
			s[r][c]= a[r][c]+b[r][c];
		}
	}
	printf("the sum: \n");

	for (r=0; r<2; ++r)
	{
		for (c=0; c<2; ++c)
		{
			printf("%d\t", s[r][c]);
		}
		printf("\n");
	}

}



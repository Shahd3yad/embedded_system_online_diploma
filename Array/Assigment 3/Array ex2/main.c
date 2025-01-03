/*
 * main.c
 *
 *  Created on: Oct 14, 2024
 *      Author: SHAHD
 */

#include <stdio.h>
int main(){
	float a[100], sum, average;
	int x, y;

	printf("enter the numbers of data :");
	fflush(stdin); fflush(stdout);
	scanf("%d", &x);
	while(x>100 || x<=0)
	{
		printf("Erorr!!");
		printf("enter the numbers of data :");
		fflush(stdin); fflush(stdout);
		scanf("%d\n", &x);
	}
	for(y=0; y<x; ++y){
		printf("%d. enter number: ", y+1);
		fflush(stdin); fflush(stdout);
		scanf("%f", &a[y]);
		sum+=a[y];
	}
	average = sum/x;
	printf("the average: %.1f", average);
	return 0;
}

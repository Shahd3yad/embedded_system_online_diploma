/*
 * main.c
 *
 *  Created on: Oct 14, 2024
 *      Author: SHAHD
 */
#include <stdio.h>
int main(){
	float a[20];
	int num, element, location, i;

	printf("enter number of elements: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &num);

	for(i=0; i<num; ++i){
		fflush(stdin);fflush(stdout);

		scanf("%f", &a[i]);
	}

	printf("enter element to be inserted");
	fflush(stdin);fflush(stdout);

	scanf("%d", &element);

	printf("enter location of the inserted");
	fflush(stdin);fflush(stdout);

	scanf("%d", &location);

	a[location-1]=element;
	for(i=0; i<num; ++i){
		printf("%.1f\n", a[i]);
	}
}

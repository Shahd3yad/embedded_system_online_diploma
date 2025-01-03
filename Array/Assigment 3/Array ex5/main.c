
/*
 * main.c
 *
 *  Created on: Oct 14, 2024
 *      Author: SHAHD
 */
#include <stdio.h>

int main(){

	int a[10];
	int num, element, i;

	printf("enter number of elementS");
	fflush(stdin);  fflush(stdout);
	scanf("%d", &num);


	for(i=0; i<num; ++i){
		printf("enter element %d", i+1);
		fflush(stdin);  fflush(stdout);
		scanf("%d", &a[i]);
	}


	printf(" enter the element you wanna search for");
	fflush(stdin); fflush(stdout);
	scanf("%d", &element);


	i=0;
	while(i<num && element!=a[i]){
		i++;
	}


	if(i<num){
		printf("location of your element is: %d", i+1);
	}else{
		printf("the element does not exist");
	}

	return 0;
}

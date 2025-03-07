/*
 ============================================================================
 Name        : func4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int power(int b, int p);
int main(void) {
	int b,p;
	printf("enter the base number");
	fflush(stdout);fflush(stdin);
	scanf("%d", &b);
	printf("enter power number");
	fflush(stdout);fflush(stdin);
	scanf("%d", &p);
	printf("%d power %d =%d", b,p,power(b,p));
	return 0;
}
int power(int b,int p){
	if(p!=0)
		return b*power(b,--p);
	else
	    return 1;
}

/*
 * main.c
 *
 *  Created on: Oct 14, 2024
 *      Author: SHAHD
 */

#include <stdio.h>
int main(){
	float a[10][10], t[10][10];
	int r, c, i, j;
	printf("enter raws and coloms of the matrix:");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &r , &c);

	printf("enter elements of the matrix: \n");
	for(i=0; i<r ; ++i){
		for (j=0; j<c; ++j){
			printf("enter a%d%d: ", i+1 , j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f", &a[i][j]);
		}
	}

	printf("scanned matrix: \n");
	for(i=0; i<r ; ++i){
			for (j=0; j<c; ++j){
				printf("%0.1f\t", a[i][j]);
				if(j==c-1)
					break;
			}
			printf("\n");
		}
	for(i=0; i<r ; ++i){
			for (j=0; j<c; ++j){
				t[j][i]=a[i][j];
			}
		}

	printf("transposed matrix: \n");
	for(i=0; i<c ; ++i){
			for (j=0; j<r; ++j){
				printf("%.1f\t", t[i][j]);
				if(j==r-1)
					printf("\n");
			}

	}
	return 0;
}

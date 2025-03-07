
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int prime_check(int num);

int main(){
	int n1,n2,i,state;

	printf("please enter the 1st number");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n1);
	printf("please enter the 2nd number");
		fflush(stdin); fflush(stdout);
	scanf("%d", &n2);

	printf("the primer numbers between %d and %d are: ", n1,n2);
	for(i=n1+1; i<n2; i++)
	{
		state = prime_check(i);
		if (state==0)
			printf("%d \t", i);

	}

}
int prime_check(int num){
	int j, state=0;
	for(j=2; j<=num/2;j++){
		if (num%j==0)
			state=1;
	}
return state;
}

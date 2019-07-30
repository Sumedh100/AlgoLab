#include<stdio.h>
#include<stdlib.h>

int middleschoolGCD(int a, int b){
	int smaller, gcd = 1;
	if (a >= b)
		smaller = b;
	else smaller = a;

	for (int i=1; i<=smaller; i++){
		if(a % i ==0 && b%i == 0){
			gcd = i;
		}
		else continue;
	}

	return gcd;
}

int main(){
	int m,n;
	printf("Enter Two Numbers\n");
	scanf("%d", &m);
	scanf("%d", &n);
	printf("GCD of %d and %d is %d\n",m,n,middleschoolGCD(m,n));
}
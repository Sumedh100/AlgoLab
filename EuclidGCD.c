#include <stdio.h>
#include <stdlib.h>

unsigned int EuclidGCD(unsigned int m, unsigned int n){
	unsigned int r;
	int opcount =0;

	while(n!=0){
		opcount++;
		r = m%n;
		m = n;
		n = r;
	}
	printf("Opcount = %d\n", opcount);
	return m;
}

int main(){
	unsigned int m,n;
	printf("Enter Numbers\n");
	scanf("%d", &m);
	scanf("%d", &n);

	printf("GCD of %d and %d is %d \n",m,n,EuclidGCD(m,n));
	return 0;
}
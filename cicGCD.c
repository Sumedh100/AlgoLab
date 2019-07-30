#include<stdio.h>
#include<stdlib.h>

int consecutiveIntegerCheckGCD(int m, int n){
	int s, opcount=0;
	int flag = 1;
	if(m <= n)
		s = m;
	else 
		s = n;
	while(flag){
		opcount++;
		if(m%s == 0){
			if(n%s == 0){
				flag ==0;
				printf("Opcount is %d\n",opcount);
				return s;
			}
			else continue;
		}

		else{
			s--;
			continue;
		}
	}
}

int main(){
	int m,n;
	printf("Enter Two Numbers\n");
	scanf("%d", &m);
	scanf("%d", &n);
	printf("GCD of %d and %d is %d\n",m,n,consecutiveIntegerCheckGCD(m,n));
}
#include<stdio.h>
void fibonacci(int a, int b, int nex, int sum);
int main()
{
 	int a=1,b=1, nex;
 	long sum=0;
	
	printf("Name:Daniyal Ali\tRoll No: 26P-3014\n");
	
 	printf("\nFibonacci Series up to 10000:\n");
 	
 	printf("\nSum of terms divisible by 3,5 or 7 = %ld\n", fibonacci(a,b,nex,sum));
}
void fibonacci(int a, int b, int nex, int sum)
{
	for (;a<=10000;){	
		printf("%d ",a);
		
	 	if (a%3==0||a%5==0||a%7==0)
	 		sum += a;
	 	
	 	nex=a+b;
	 	a=b;
	 	b=nex;
 	}
 	
}

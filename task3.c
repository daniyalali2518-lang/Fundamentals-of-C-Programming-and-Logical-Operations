#include<stdio.h>
int main(){
 	int num1,num2,a,b,temp,gcd,lcm;
 	
 	printf("Name:Daniyal Ali\tRoll No: 26P-3014\n");
 	
	printf("Enter two numbers: ");
 	scanf("%d %d", &num1, &num2);
 	
	a=num1;
 	b=num2;
 	
 	while(b!=0){
 	temp=b;
	b=a%b;
 	a=temp;
 }
 
 	gcd=a;
 	lcm=(num1*num2)/gcd;
 	printf("GCD=%d\nLCM=%d\n", gcd, lcm);
}

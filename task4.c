#include<stdio.h>
int main(){
	 int i,a,b;
	 
	printf("Name:Daniyal Ali\tRoll No: 26P-3014\n");
	 
 	printf("Enter a and b: ");
 	scanf("%d %d", &a, &b);
 	for (i= a;i<=b;i++){
 		
 	if (i==1)
	 printf("One ");
 	else if (i==2)
	 printf("Two ");
 	else if (i==3)
	 printf("Three ");
 	else if (i==4)
	 printf("Four ");
 	else if (i==5)
	 printf("Five ");
 	else if (i==6)
	 printf("Six ");
 	else if (i==7)
	 printf("Seven ");
 	else if (i==8)
	 printf("Eight ");
 	else if (i==9)
	 printf("Nine ");
 	else {
 	if (i%2==0)
	 printf("Even ");
 	else printf("Odd ");
	 }
 }
 	printf("\n");	
}

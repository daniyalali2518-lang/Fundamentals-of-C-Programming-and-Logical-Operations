#include<stdio.h>
void range();
int main(){
range();



}
void range() {

	int stn,edn,range,count1=1,count2=1;
	
	printf("Name:Daniyal Ali\tRoll No: 26P-3014\n");
	
	printf("Enter the range of starting number");
	scanf("%d",&stn);

	printf("Enter the range of ending number");
	scanf("%d",&edn);
	
	int i;
	
	for(i=stn;i<=edn;i++){
		
		if(i%3==0)
			count1+=1;
		
		if(i%5==0)
			count2+=1;
			
		if(i%3==0&&i%5==0)
			range=count1/count2;
		
		}

		printf("%d\n",count1-1);
		printf("%d\n",count2-1);
		printf("%d\n",range);
}


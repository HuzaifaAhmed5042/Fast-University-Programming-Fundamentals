#include<stdio.h>
int main()
{
	int r;
	char t;
	printf("Enter driving record (0 for clean, 1 for one speeding ticket, 2 for two speeding tickets) : \n");
	scanf(" %d",&r);
	printf("Enter car type (S for sedan, T for truck, C for sports car) :\n");
	scanf(" %c",&t);
	if(r==0){
		if(t=='S')
			printf("The premium rate is $100 per year.");
		else if(t=='T')
			printf("The premium rate is $200 per year.");
		else
			printf("The premium rate is $150 per year.");
	}
	else if(r==1){
		if(t=='S')
			printf("The premium rate is $110 per year.");
		else if(t=='T')
			printf("The premium rate is $220 per year.");
		else
			printf("The premium rate is $165 per year.");
		
	}
	else if(r==2){
		if(t=='S')
			printf("THE PREMIUM RATE IS----- $120 per year-----.");
		else if(t=='T')
			printf("THE PREMIUM RATE IS----- $240 per year-----.");
		else
			printf("THE PREMIUM RATE IS----- $180 per year-----.");
	}
}

#include<stdio.h>
int main()
{
	int ph;
	printf("ENTER PH VALUE : ");
	scanf("%d",&ph);
	if(ph>7&&ph<12)
	{
		printf("ALKALINE");
	}
	else if(ph>12)
	{
		printf("VERY ALKALINE");
	}
	else if(ph==7)
	{
		printf("NEUTRAL");
	}
	else if(ph>2)
	{
		printf("ACIDIC");
	}
	else
	{
		printf("VERY ACIDIC");
	}
		
}

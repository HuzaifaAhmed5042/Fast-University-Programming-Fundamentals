#include<stdio.h>
int main()
{
	int a=6,b;
	printf("ENTER THE SECRET NUMBER : ");
	scanf("%d",&b);
	if(b==7||b==5)
	{
		printf("Close enough to the correct answer");
	}
	else if(b==a)
	{
		printf("Bingo! Correct answer");
	}
	else if(b>=1&&b<=4||b>=8)
	{
		printf("FAR AWAY FORM CORRECT ANSWER:(");
	}
	
}

#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("ENTER A NUMBER : ");
	scanf("%d",&num);
	if(num%3==0)
	{
		printf("NUMBER IS MULTIPLE OF 3");
	}
	else
	{
		printf("NUMBER IS NOT MULTIPLE OF 3");
	}
}

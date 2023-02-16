#include<stdio.h>
#include<conio.h>
int main()
{
	char jack,jill,R,S,P;
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~$$$[ROCK PAPER SCISSOR GAME]$$$~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("\n--->JACKS MOVE : ");
	scanf(" %c",&jack);
	printf("--->JILLS MOVE : ");
	scanf(" %c",&jill);
	if(jack=='R' && jill=='S')
	{
		printf("\n\t\t\t\t\t--->JACK WINS!ROCK BREATS SCISSORS<---");
	}
	else if(jack=='S'&&jill=='P')
	{
		printf("\n\t\t\t\t\t--->JILL WINS!PAPER BREATS ROCK<---");
	}
	else if(jack=='P'&&jill=='S')
	{
		printf("\n\t\t\t\t\t--->JACK WINS!PAPER BREATS ROCK<---");
	}
	else if(jack=='S'&&jill=='R')
	{
		printf("\n\t\t\t\t\t--->JILL WINS!ROCK BREATS SCISSORS<---");
	}
	else
	{
		printf("INVALID INPUT");
	}
	
	
}

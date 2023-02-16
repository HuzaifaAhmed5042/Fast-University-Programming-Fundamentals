#include<stdio.h>
int main()
{
	char cha;
	printf("ENTER A CHARACTER : ");
	scanf(" %c",&cha);
	if(cha>='a' && cha<='z')
	{
		printf("THE CHARACTER IS SMALL ALPHABET");
	}
	else if(cha>='A' && cha<='Z')
	{
		printf("THE CHARACTER IS CAPITAL ALPHABET");
	}
	else if(cha>='0' && cha<='9')
	{
		printf("THE CHARACTER IS DIGIT");
	}
	else
	{
		printf("THE CHARACTER IS SPECIAL CHARACTER");
	}
	}

#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("light intensity : \n");
	scanf("%d",&a);
	if(a>500){
		printf("under sunshine : ");
	}
	else if(a>=0 && a<=100){
		printf("Evening.");
	}
	else if(a>100 && a<=500){
		printf("Lighting.");
	}
}
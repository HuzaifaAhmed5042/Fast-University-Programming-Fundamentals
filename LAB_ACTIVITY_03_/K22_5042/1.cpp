#include<stdio.h>
#include<conio.h>
int main()
{
	float c,f,fc,p;
	printf("\nENTER NUMBER OF CALORIES : ");
	scanf("%f",&c);
	printf("\nENTER FAT GRAM : ");
	scanf("%f",&f);
	fc=f*9;
	if(f>0&&c>0&&fc<c)
	{
	p=fc/c*100;
	printf("\nPERCENTAGE : %f",p);	
	}
	else
	{
		printf("\nEither the calories or fat grams were entered incorrectly");
	}
}
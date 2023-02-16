#include<stdio.h>
#include<conio.h>
int main()
{
	float gpa;
	printf("ENTER GPA : ");
	scanf("%f",&gpa);
	if(gpa>=0.0&&gpa<=0.09)
	{
		printf("FAILED SEMESTER-------REGISTRATION SUSPENDED");
	}
	else if(gpa>=1.0&&gpa<=1.99)
	{
		printf("ON PROBATION FOR NEXT SEMESTER");
	}
	else if(gpa>=2.0&&gpa<=2.99)
	{
		printf("NO MESSAGE");
	}
	else if(gpa>=3.0&&gpa<=3.49)
	{
		printf("DEANS LIST FOR SEMESTER");
	}
	else if(gpa>=3.5&&gpa<=4)
	{
		printf("HIGH HONORS FOR SEMESTER");
	}
	else
	{
		printf("wrong input");
	}
}

#include<stdio.h>
int main()
{
	int s1,s2,s3;
	printf("Input value of side 1:");
	scanf("%d",&s1);
	printf("Input value of side 2:");
	scanf("%d",&s2);
	printf("Input value of side 3:");
	scanf("%d",&s3);
	
	if(s1==s2 && s1==s3){
		printf("It is an Equilateral Triangle");
	}
	else if(s1!=s2 && s2!=s3 && s1!=s3){
		printf("It is a Scalene Triangle");
	}
	else if((s1==s2) && s1!=s3|| (s1==s3) && s1!=s2 || ( s3==s2) && s3!=s1)
	{
		printf("It is an Isosceles Triangle");
	}
}
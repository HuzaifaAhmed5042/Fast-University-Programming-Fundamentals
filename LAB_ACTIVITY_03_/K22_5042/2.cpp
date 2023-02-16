#include<stdio.h>
#include<conio.h>
	int main()
	{
		int week_days,vac;
		printf("ENTER '0' for false OR '1' for true \nENTER FOR WEEKDAYS : ");
		scanf("%d",&week_days);
		printf("ENTER FOR VACATIONS : ");
		scanf("%d",&vac);
		if(week_days==0 ||vac==0)
		{
			printf("SLEEPIN : TRUE");
		}
		else if(week_days==1 ||vac==0)
		{
			printf("SLEEPIN : FALSE");
		}
		else if(week_days==0 ||vac==1)
		{
			printf("SLEEPIN : TRUE");
		}
		else
		{
			printf("INVALID INPUT");
		}
	}
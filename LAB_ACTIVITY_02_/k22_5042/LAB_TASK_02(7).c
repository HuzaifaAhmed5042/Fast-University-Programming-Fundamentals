#include<stdio.h>
int main()
{
	int id,units;
	float charges,surcharge=0,netamt,gamt;
	char name[25];
	printf("ID : ");
	scanf("%d",&id);
	printf("Name : ");
	scanf("%s",&name);
	printf("Input the electricity units consumed:");
	scanf("%d",&units);
	if(units<200)
		charges=16.20;
	else if(units>=200 && units<300)
		charges=20.10;
	else if(units>=300 && units<500)
		charges=27.10;
		else
			charges=35.90;
			
	gamt=units*charges;
	if(gamt>18000)
		surcharge=gamt*0.15;
		
	netamt=gamt+surcharge;
	
	printf("\nElectricity Bill\n");
	printf("Customer ID : %d\n",id);
	printf("Customer Name : %s\n",name);
	printf("Units Consumed : %d\n",units);
	printf("Amount Charges @Rs. %.2f  per unit :%.2f\n",charges,gamt);
	printf("Surchage Amount : %.2f\n",surcharge);
	printf("Net Amount Paid By the Customer : %.2f\n",netamt);
}
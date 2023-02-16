#include<stdio.h>
int main()
{
	int c,s_amt,d,dis;
	printf("Enter the total cost of items : ");
	scanf("%d",&c);
	if(c<2000 && c>=500){
		dis=c*0.05;
		d=c-dis;
		s_amt=c-d;
		printf("The saved amount is Rs. %d.\n",s_amt);
		printf("discount is Rs. %d",d);
	}
	else if(c>=2000 && c<=4000){
		dis=c*0.10;
		d=c-dis;
		s_amt=c-d;
		printf("The saved amount Rs. %d.\n",s_amt);
		printf("The amount after discount is Rs. %d",d);
	}
	else if(c>4000 && c<=6000){
		dis=c*0.20;
		d=c-dis;
		s_amt=c-d;
		printf("The saved amount Rs. %d.\n",s_amt);
		printf("The amount after discount is Rs. %d",d);
	}
	else if(c>6000){
		dis=c*0.35;
		d=c-dis;
		s_amt=c-d;
		printf("The saved amount Rs. %d.\n",s_amt);
		printf("The amount after discount is Rs. %d",d);
	}
	else{
		printf("You cannot get a discount.");
	}
	
}
#include<stdio.h>
int main ()
{
	int p,e,ser;
	float sal;
	printf("Performance Rating: \n 1.Outstanding \n 2.Very Good \n 3.Good \n 4.Average \n 5.Below Average \n");
	scanf("%d",&p);
	printf("Years of service:");
	scanf("%d",&ser);
	printf("Educational level:\n");
	printf(" Press 1.Master Degree 2.No Master Degree \n");
	scanf("%d",&e);
	if(p==1 && e == 1 && ser == 2)
	{
		sal=18;
		printf("15 % Performance + 2%(Years of Service)+ 1%(Education)= %f",sal);	
	}
	else
	{
		sal=15;
		printf("15% Performance");
	}

	if(p==2 && e == 1 && ser == 2){
				sal=10+2+1;
				printf("10% Performance + 2%(Years of Service)+ 1%(Education)= %f",sal);	
			}
			else{ 
				sal=10;
				printf("10% Performance");
			}
		
	
	
	if(p==3 && e == 1 && ser == 2){
				sal=5+2+1;
				printf("5% Performance + 2%(Years of Service)+ 1%(Education)= %f",sal);	
			}
			else{
				sal=5;
				printf("5% Performance");
			}
	
	if(p==4 && e == 1 && ser == 2){
				sal=2.5+2+1;
				printf("1.5% Performance + 2%(Years of Service)+ 1%(Education)= %f",sal);	
			}
			else{
				sal=2.5;
				printf("2.5 % Performance");
			}
	
	if(p==5 && e == 1 && ser == 2){
				sal=1+2+1;
				printf("1% Performance + 2%(Years of Service)+ 1%(Education)= %f",sal);	
			}
			else{
				printf("1% Performance");
			}
		
	
}

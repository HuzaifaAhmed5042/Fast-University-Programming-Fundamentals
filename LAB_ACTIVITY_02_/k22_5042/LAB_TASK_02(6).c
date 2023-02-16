#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,dis,r1,r2,rn,i;
	printf("Input values for a, b and c:\n");
	scanf("%lf%lf%lf",&a,&b,&c);
	dis=b*b-4*a*c;
	if(dis>0){
		r1=(-b+sqrt(dis))/(2*a);
		r2=(-b-sqrt(dis))/(2*a);
		printf("Root 1 = %f \nRoot 2 = %.2lf",r1,r2);
	}
	else if(dis==0){
		r1=r2=-b/(2*a);
		printf("Root 1 = %f \nRoot 2 = %.2lf",r1,r1);
	}
	else{
		rn=-b/(2*a);
		i= sqrt(-dis)/(2*a);
		printf("Root 1 = %f+%fi \nRoot 2 = %f-%fi",rn,i,rn,i);
	}
}
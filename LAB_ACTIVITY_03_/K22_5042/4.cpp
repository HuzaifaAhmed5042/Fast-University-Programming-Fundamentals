#include<stdio.h>
#include<conio.h>
int main()
{
	char z,c;
	float a=1,b=0.5,ca=0.75,l=1.5,sum,T,q;
	int num,i;
	printf("\t\t\t\t     **********MENU**********\n\t\t\t\t\t· A= Apples $1 \n\t\t\t\t\t· B= Bananas $0.5 \n\t\t\t\t\t· C= Carrots $0.75 \n\t\t\t\t\t· L= Lettuce $1.5");
	printf("\n->NUMBER OF ITEM YOU WANT?????  ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("\n->ENTER ITEM (%d) FROM MENU : ",i);
		scanf("%s",&c);
		printf("\n->QUANTITY : ");
		scanf("%f",&q);
		switch(c)
		{
			case 'a':
			case 'A':
					{
						T=a*q;
						sum+=T;
					}
					break;
		    case 'b':
			case 'B':	
					{
						T=b*q;
						sum+=T;
					}
					break;
			case 'c':
			case 'C':	
					{
						T=ca*q;
						sum+=T;
					}	
					break;
			case 'l':
			case 'L':	
					{
						T=l*q;
						sum+=T;
					}	
					break;
					
					default:
					{
						printf("INVALID INPUT");
					}	
									
					
	    }
		}
		printf("TOTAL : %f$",sum);
	}

	

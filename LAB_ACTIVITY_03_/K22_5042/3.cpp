#include<stdio.h>
#include<conio.h>
int main()
{
	char CT;
	int m,size;
	printf("\t\t\t\t\t-ENTER 'b or B' FOR BLACK COFFE-\n\t\t\t\t\t-ENTER 'w or W' FOR WHITE COFFE-\n~ENTER COFFE TYPE : ");
	scanf("%s",&CT);
	float a,b,c,d,e,f,t;
	switch(CT)
	{
		case 'B':
		case 'b':
			{
			float bpw=20,bs=20,bmx=25,bad=15,bam=25,bm=25;
			printf("\n~ENTER CUP SIZE '1' FOR LARGE '0' FOR NORMAL : ");
			scanf("%d",&size);
			printf("\n~MANUAL '1' FOR YES '0' FOR NO : ");
			scanf("%d",&m);
			a=bpw/50*100;
			b=bs/50*100;
			c=bmx/50*100;
			d=bad/50*100;
			e=bam/50*100;
			f=bm/50*100;
			if(size==0 && m==1)
			{
				printf("\nPUT WATER : 20mins\n");
				printf("SUGAR     : 20mins\n");
				printf("MIX WELL  : 25mins\nADD COFFE : 15mins\nADD MILK  : 25mins\nMIX WELL  : 25mins");
			}
			else if(size==1 && m==1)
			{
				printf("PUT WATER : %fmins\n",a);
				printf("SUGAR     : %fmins\n",b);
				printf("MIX WELL  : %fmins\n",c);
				printf("ADD COFFE : %fmins\n",d);
				printf("ADD MILK  : %fmins\n",e);
				printf("MIX WELL  : %fmins\n",f);
			}
			else if(size==1 && m==0)
			{
				t=a+b+c+d+e+f;
				printf("\n\n\t\t\t>TOTAL TIME OF BLACK DOUBLE COFFE :\t****(%fmins)****\t",t);
			}
			else if(size==0 && m==0)
			{
				t=bpw+bs+bmx+bad+bam+bm;
				printf("\n\n\t\t\t>TOTAL TIME OF BLACK SINGLE COFFE :\t****(%fmins)****\t",t);
			}
			else 
			{
				printf("INAVLID INPUT");
			}
			}
			break;
			
		case 'W':
		case 'w':	
		{
			float pw=15,s=15,mx=20,ad=2,am=4,wm=20;
			printf("\n~ENTER CUP SIZE '1' FOR LARGE '0' FOR NORMAL : ");
			scanf("%d",&size);
			printf("\n~MANUAL '1' FOR YES '0' FOR NO : ");
			scanf("%d",&m);
			a=pw/50*100;
			b=s/50*100;
			c=mx/50*100;
			d=ad/50*100;
			e=am/50*100;
			f=wm/50*100;
			if(size==0 && m==1)
			{
				printf("\nPUT WATER : 15mins\n");
				printf("SUGAR     : 15mins\n");
				printf("MIX WELL  : 20mins\nADD COFFE : 2mins\nADD MILK  : 4mins\nMIX WELL  : 20mins");
			}
				else if(size==1 && m==1)
			{
				printf("PUT WATER : %fmins\n",a);
				printf("SUGAR     : %fmins\n",b);
				printf("MIX WELL  : %fmins\n",c);
				printf("ADD COFFE : %fmins\n",d);
				printf("ADD MILK  : %fmins\n",e);
				printf("MIX WELL  : %fmins\n",f);
			}
			else if(size==1 && m==0)
			{
				t=a+b+c+d+e+f;
				printf("\n\n\t\t\t>TOTAL TIME OF WHITE DOUBLE COFFE :\t****(%fmins)****\t",t);
			}
			else if(size==0 && m==0)
			{
				t=pw+s+mx+ad+am+wm;
				printf("\n\n\t\t\t>TOTAL TIME OF WHITE SINGLE COFFE :\t****(%fmins)****\t",t);
			}
			else 
			{
				printf("INAVLID INPUT");
			}
		}
			break;
			default :
				printf("INCORRECT INPUT");
	}
}

#include<stdio.h>
#include<conio.h>
int main()
{
	float a,b,ANS;
	int ch;
	printf("ENTER 2 NUMBERS : ");
	scanf("%f %f",&a,&b);
	printf("ENTER 1 TO ---- ADD\nENTER 2 TO ---- SUBTRACT \nENTER 3 TO ---- MULTIPLY\nENTER 4 TO ---- DIVIDE\nENTER CHOICE ");
	scanf("%d",&ch);
	switch(ch){
	case 1:
		ANS=a+b;
		printf("%f",ANS);
		break;
	case 2:
		ANS=a-b;
		printf("%f",ANS);
		break;
	case 3:
		ANS=a*b;
		printf("%f",ANS);
		break;
	case 4:
		ANS=a/b;
		printf("%f",ANS);
		break;
	default :
		printf("\nINVALID INPUT");				
	}
		
	
}

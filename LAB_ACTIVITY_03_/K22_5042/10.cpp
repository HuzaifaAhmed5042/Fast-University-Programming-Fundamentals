#include<stdio.h>
int main()
{
	char c,a;
	printf("Weather conditions (G/B):\n");
	scanf(" %c",&c);
	printf("Plane action (T/L):\n");
	scanf(" %c",&a);
	if(c=='G'||c=='g'){
		if(a=='T'||a=='t')
			printf("Take off is allowed.\n");
		else
			printf("Landing is allowed.\n");
	}
	else if(c=='B'||c=='b')
		if(a=='T'||a=='t')
			printf("Take off is not allowed due to bad weather conditions.\n");
		else
			printf("Landing is allowed.\n");
}

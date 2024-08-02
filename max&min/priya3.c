#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d;
	
	printf("Enter A :");
	scanf("%d",&a);
	printf("Enter B :");
	scanf("%d",&b);
	printf("Enter C :");
	scanf("%d",&c);
	printf("Enter D :");
	scanf("%d",&d);
	
	(a>b)?(a>c)?(a>d)?printf("a is maximum!"):printf("c is maximum!"):printf("d is maximum!"):(c>d)?printf("c is maximum!"):printf("d is maximum!");
}

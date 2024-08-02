#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	
	printf("Enter A :");
	scanf("%d",&a);
	printf("Enter B :");
	scanf("%d",&b);
	printf("Enter C :");
	scanf("%d",&c);
	
	(a>b)?(a>c)?printf("a is maximum!"):printf("c is maximum!"):(b>c)?printf("b is maximum!"):printf("c is maximum!"); 
}

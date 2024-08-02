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
	
	(a<b)?(a<c)?printf("a is minimum!"):printf("c is minimum!"):(b<c)?printf("b is minimum!"):printf("c is minimum!"); 
}

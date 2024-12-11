//WAP to Find Min numbers from 4 numbers
#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d;
	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	printf("Enter c :");
	scanf("%d",&c);
	printf("Enter d :");
	scanf("%d",&d);
	
	(a<b)?(a<c)?(a<d)?printf("a is minimum"):printf("c is minimum"):printf("d is minimum"):
	(b<c)?(b<d)?printf("b is minimum"):printf("c is minimum"):	
	(c<d)?printf("c is minimum"):printf("d is minimum");
}
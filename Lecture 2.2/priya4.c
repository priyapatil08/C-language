//Write a program to find simple interest.
#include<stdio.h>
#include<conio.h>

void main()
{
	float interest,p,r,n;
	
	printf("enter the value of p");
	scanf("%f",&p);
	printf("enter the value of r");
	scanf("%f",&r);
	printf("enter the value of n");
	scanf("%f",&n);
	interest=(p*r*n)/100;
	printf("the interest is: %.2f",interest);
}

// Write a program in C to check whether a number is an even number or not using user Defined Function.
#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	printf("Enter n :");
	scanf("%d",&n);
	
	if(n%2==0)
	{
		printf("Number is even");
	}
	else
	{
		printf("Number is not even");
	}
	
}
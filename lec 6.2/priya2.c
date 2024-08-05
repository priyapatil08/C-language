#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
	printf("Enter num :");
	scanf("%d",&num);
	
	if(num>0)
	{
		printf("Number is positive!");
	}
	else if(num==0)
	{
		printf("Number is neutral!");
	}
	else
	{
		printf("Number is negative!");
	}
}

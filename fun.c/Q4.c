#include<stdio.h>

void main()
{
	vote(22);
}

void vote(int n)
{
	if(n>20)
	{
		printf("You are eligible for vote !");
	}
	else
	{
		printf("You are not eligible for vote !");
	}
}

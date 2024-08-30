#include<stdio.h>
#include<conio.h>

void main()
{
	int start=2000;
	int end=3000;
	
	while(start<=end)
	{
		if(start%4==0)
		{
			printf("%d ",start);
		}
		else
		{
			printf("*");
		}
		start++;
	}
	
}

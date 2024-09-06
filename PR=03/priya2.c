#include<stdio.h>
#include<conio.h>

void main()
{
	int n,count;
	printf("Enter n :");
	scanf("%d",&n);
	
	for(count=0; n>0; count++)
	{
		n=n/10;
	}
	printf("count=%d ",count);
}

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,multipy;
	printf("Enter n :");
	scanf("%d",&n);
	
	for(i=1; i<=10; i++)
	{
		multipy=i*n;
		printf("%d * %d = %d \n",n,i,multipy);
	}
}

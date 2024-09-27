#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(k=2;k<=i;k++)
		{
			printf("  ",k);
		}
		for(j=5;j>=i;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}

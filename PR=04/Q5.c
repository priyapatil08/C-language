#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k,l;
	for(i=5; i>=1; i--)
	{
		for(k=2; k<=i; k++)
		{
			printf("  ",k);
		}
		for(j=i; j<=5; j++)
		{
			printf("%d ",j);
		}
		for(l=i; l<=4; l++)
		{
			printf("%d ",l);
		}
		printf("\n");
	}
}

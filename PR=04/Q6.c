#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k,l,m;
	for(i=1; i<=5; i++)
	{
		
		for(j=1; j<=i; j++)
		{
			printf("%d ",j);
		}
		for(k=i; k<=4; k++)
		{
			printf("  ",k);
		}
		for(m=i; m<=4; m++)
		{
			printf("  ",m);
		}
		for(l=i; l>=1; l--)
		{
			printf("%d ",l);
		}
		
		
		printf("\n");
	}
}

//Write Below Pattern Using Nested Loop
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	for(i=75; i<=79; i++)
	{
		for(j=i; j<=79; j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
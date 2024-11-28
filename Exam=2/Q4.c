//wap to find the multilpication table in UDF.
#include<stdio.h>
#include<conio.h>

void main()
{
	table();
}

void table(int n)
{
	int i;
	for(i=1; i<=10; i++)
	{
		printf("%d x %d = %d\n",n,i,n*i);
	}
}

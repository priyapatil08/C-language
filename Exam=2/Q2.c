//wap to find minimum number and sum of number in 1D.
#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,r,c;
	
	printf("Enter r :");
	scanf("%d",&r);
	printf("Enter c :");
	scanf("%d",&c);
	
	int a[r][c],sum;
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Enter a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			sum=sum+a[i][j];
		}
		printf("\n");
    }
    printf("sum is %d",sum);
    
    for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			sum=sum+a[i][j];
		}
		printf("\n");
    }
    
     for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			sum=sum+a[i][j];
		}
		printf("\n");
    }
}

#include<stdio.h>
#include<conio.h>

void main()
{
	int r,c,i,j;
	
	printf("Enter r :");
	scanf("%d",&r);
	printf("Enter c :");
	scanf("%d",&c);
	
	int a[r][c],max;
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Enter a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
			}
	    }
	    printf("\n");
	}
	printf("Largest num is %d",max);
}

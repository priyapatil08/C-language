#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	int a[n],b[n],c[n],i;
	
	for(i=0; i<n; i++)
	{
		printf("Enter a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	
	for(i=0; i<n; i++)
	{
		printf("Enter b[%d]: ",i);
		scanf("%d",&b[i]);
	}
	printf("\n");
	
	for(i=0; i<n; i++)
	{
        c[i]=a[i]+b[i];
	}
	printf("\n");
	
	for(i=0; i<n; i++)
	{
		printf("the sum is %d\n",c[i]);
	}
}

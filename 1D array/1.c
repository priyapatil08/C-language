#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	printf("Enter a size of array :");
	scanf("%d",&n);
	
	int a[n];
	
	int i;
	for(i=0; i<n; i++)
	{
		printf("Enter a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		printf("%d",a[i]);
	}
}


#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	printf("Enter n:");
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
		if(a[i]%2==0)
		{
			printf("%d ",a[i]);
		}
		
		
	}
	
}


#include<stdio.h>
#include<conio.h>

void main()
{
	int n,i,sum=0;
	
	printf("Enter n :");
	scanf("%d",&n);
	
	i=1;
	while(i<=n)
	{
		printf("sum= %d + %d\n",sum,i);
		sum=sum+i;
		i++;
	}
	printf("sum is %d",sum);
}

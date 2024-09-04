#include<stdio.h>
#include<conio.h>

void main()
{
	int n,f=1;
	printf("Enter n :");
	scanf("%d",&n);
	
	do
	{
		f=f*n;
		n--;
	}while(n>=1);
	printf("Factorial is %d",f);
	
}

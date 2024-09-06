#include<stdio.h>
#include<conio.h>

void main()
{
	int n,first,second,sum;
	printf("Enter n :");
	scanf("%d",&n);
	
	second=n%10;
	
	while(n>=10)
	{
		n=n/10;
    }
	first=n;
	
    sum=first+second;
        printf("%d",sum);
    
    
}

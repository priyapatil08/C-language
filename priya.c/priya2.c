#include<stdio.h>
#include<conio.h>

void main()
{
	int a, b;
	
	printf("Enter the value of a :");
	scanf("%d",&a);
	printf("Enter the value of b :");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
    printf("value after swapping of a=%d\n",a);
	printf("value after swapping of b=%d\n",b);
}

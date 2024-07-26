#include<stdio.h>
#include<conio.h>

void main()
{
	int a , b ,c;
	
	printf("Enter the value of a :");
	scanf("%d",&a);
	printf("Enter the value of b :");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;

	printf("value after swapping of a=%d\n",a);
	printf("value after swapping of b=%d\n",b);
}

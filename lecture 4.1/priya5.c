#include<stdio.h>
#include<conio.h>

void main()
{
	int x;
	int y;
	
	printf("enter the value of x :");
	scanf("%d",&x);
	printf("enter the value of y :");
	scanf("%d",&y);

   x=x+y;
   y=x-y;
	x=x-y;
	
	printf("value after swapping of x=%d",x);
	printf("value after swapping of y=%d",y);	
}

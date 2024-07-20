#include<stdio.h>
#include<conio.h>

void main()
{
	int x=10;
	int y=18;
	int z;
	
	printf("enter the value of x :");
	scanf("%d",&x);
	printf("enter the value of y :");
	scanf("%d",&y);
	
	z=x;
	x=y;
	y=z;
	
	printf("value after swapping of x=%d\n",x);
   printf("value after swapping of y=%d\n",y);
}



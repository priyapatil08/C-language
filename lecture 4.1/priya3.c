#include<stdio.h>
#include<conio.h>

void main()
{
	int x;
	int y;
	int ans;
	printf("enter the value of x :");
	scanf("%d",&x);
	printf("enter the value of y :");
	scanf("%d",&y);
	ans =(x*x*x)-(y*y*y)-(3*x*x*y)+(3*x*y*y);
	printf("ans=%d",ans);
}

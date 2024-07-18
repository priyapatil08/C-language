//write a program to find the perimeter of the circle.
#include<stdio.h>
#include<conio.h>

void main()
{
	float c,pi,r;
	pi=3.14;
	printf("enter r :");
	scanf("%f",&r);
	
	c=2*pi*r;
	printf("circumference of the circle : %.2f ",c);
}

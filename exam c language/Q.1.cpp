#include<stdio.h>
#include<conio.h>

 main()
{
	char op;
	double first,second;
  
	printf("Enter op(+,-,*,/) :");
	scanf("%lf",&op);
	printf("Enter two operands :");
	scanf("%lf %lf",&first ,&second);
	

	switch(op)
	{
		case '+':printf("%lf + %lf = %lf",first,second,first+second);
		break;
		case '-':printf("%lf - %lf = %lf",first,second,first-second);
		break;
		case '*':printf("%lf * %lf = %lf",first,second,first*second);
		break;
		case '/':printf("%lf / %lf = %lf",first,second,first/second);
		break;
	}
}

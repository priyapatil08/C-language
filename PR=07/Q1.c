#include<stdio.h>
#include<conio.h>

int add(int value1,int value2)
{
	int add;
	add=value1+value2;
	return add;
}
int sub(int value1,int value2)
{
	int sub;
	sub=value1-value2;
	return sub;
}
int multipy(int value1,int value2)
{
	int multipy;
	multipy=value1*value2;
	return multipy;
}
int div(int value1,int value2)
{
	int div;
	div=value1/value2;
	return div;
}
int module(int value1,int value2)
{
	int module;
	module=value1%value2;
	return module;
}

int main()
{
	int num1,num2,choice;
	
	printf("Enter num1 :");
	scanf("%d",&num1);
	printf("Enter num2 :");
	scanf("%d",&num2);
	printf("Enter your choice :");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		printf("The addition is %d",add(num1,num2));
	}
	else if(choice==2)
	{
		printf("The subraction is %d",sub(num1,num2));
	}
	else if(choice==3)
	{
		printf("The multiplication is %d",multipy(num1,num2));
	}
	else if(choice==4)
	{
		printf("The division is %d",div(num1,num2));
	}
	else if(choice==5)
	{
		printf("The module is %d",module(num1,num2));
	}
	else
	{
		printf("Enter valid value :");
	}
}

#include<stdio.h>
#include<conio.h>

int addition(int value1,int value2)
{
	return value1+value2;
}
int subtraction(int value1,int value2)
{
	return value1-value2;
}
int multiplication(int value1,int value2)
{
	return value1*value2;
}
int division(int value1,int value2)
{
	return value1/value2;
}

int main()
{
	int num1,num2,ans;
	char choice;
	printf("Enter num1 :");
	scanf("%d",&num1);
	printf("Enter num2 :");
	scanf("%d",&num2);
	
	printf("\nenter your choice :");
	scanf(" %c",&choice);
	
	switch(choice)
{	
	case'+':
	ans=addition(num1,num2);
	printf("Addition is %d",ans);
	break;
	
	case'-':
	ans=subtraction(num1,num2);
	printf("subtraction is %d",ans);
	break;
	
	case'*':
	ans=multiplication(num1,num2);
	printf("multiplication is %d",ans);
	break;
	
	case'/':
	ans=division(num1,num2);
	printf("division is %d",ans);
	break;
	
	default:printf("enter valid choice");
}
}

#include<stdio.h>
#include<conio.h>

void main()
{
	int salary,HRA , DA , TA;
	float total;
	
	printf("enter the value of salary :");
	scanf("%d",&salary);
	printf("enter the value of HRA :");
	scanf("%d",&HRA);

	printf("enter the value of DA :");
	scanf("%d",&DA);

	printf("enter the value of TA :");
	scanf("%d",&TA);
	
	HRA=(salary*HRA)/100;
	DA=(salary*DA)/100;
	TA=(salary*TA)/100;
	
	total=(HRA+DA+TA)+salary;
	printf("ans=%f",total);
	
	 
}

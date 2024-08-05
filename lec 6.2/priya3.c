#include<stdio.h>
#include<conio.h>

void main()
{
	float maths,english,science,sum,average;
	printf("Enter math marks :");
	scanf("%f",&maths);

	printf("Enter english marks  : ");
	scanf("%f",&english);
	
	printf("Enter science marks :");
	scanf("%f",&science);
	
	sum=maths+english+science;
	average=sum/3;
	
	printf("the average is %f\n",average);
	
	if(average>=90 && average<100)
	{
		printf(" A+");
	}
	else if(average>=80 && average<89)
	{
		printf(" A");
    }
    else if(average>=70 && average<79)
	{
		printf(" B+");
	}
	else if(average>=60 && average<69)
	{
		printf(" B");
	}
	else if(average>=50 && average<59)
	{
		printf(" C+");
	}
	else if(average>=40 && average<49)
	{
		printf("C");
	}
}


	

	
	

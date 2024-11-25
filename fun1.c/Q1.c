#include<stdio.h>
#include<conio.h>

float emicalc(int amount,int interest, int month)
{
	float total = (amount + (amount * interest)/100);
	float emi = total/month;
	return emi; 
}
void main()
{
	float emi=emicalc(100000,5,12);
	printf("your monthly emi is %.2f/-",emi);
}



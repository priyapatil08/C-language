#include<stdio.h>

void main()
{
	char grade;
	int mark;
	
	printf("Enter your mark :");
	scanf("%d",&mark);
	
	grade=(mark>=90 && mark<=100)? 'A'
	: (mark>=80 && mark<90)?'B'
	: (mark>=70 && mark<80)?'C'
	: (mark>=60 && mark<70)?'D'
	: (mark>=40 && mark<60)?'E'
	: 'F';
	
	printf("Your grade %c.",grade);
	
	switch(grade)
	{
		case 'A': printf("Excellent work!");
		break;
		case 'B': printf("Well done");
		break;
		case 'C': printf("Good job");
		break;
		case 'D': printf("You passed,but you could do better");
		break;
		case 'E': printf("You passed,but you could do better");
		break;
		case 'F': printf("Sorry,you failed");
		break;
	}
		if(grade=='A' || grade=='B' || grade=='C' || grade=='D' || grade=='E')
		{
			printf("Congratulations!You are eligible for next level");
		}
		else
		{
			printf("Please try again next time");
		}
	
	
}

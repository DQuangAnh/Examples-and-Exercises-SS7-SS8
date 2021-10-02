#include<stdio.h>
main()
{
	float salary;
	char grade;
	printf("Enter your grade ( A, B or Others(C) ) :");
	scanf("%c", &grade);
	printf("Enter your unsubsidized salary: ");
	scanf("%f", &salary);
	if(grade == 'A')
	  {
	  	salary = salary + 300;
	  	printf("Your salary at the end of the month is %f", salary);
	  	}
	else if(grade == 'B')
	  {
	  	salary = salary + 250;
	  	printf("Your salary at the end of the month is %f", salary);
	  	}
	else if(grade == 'C')
	  {  
		salary = salary + 100;
		printf("Your salary at the end of the month is %f", salary);
		}  	
	return 0;
}

/* VD9 ss7
Integer constants as case labels */
#include<stdio.h>
void main()
{
	int basic;
	printf("Please enter your basic: ");
	scanf("%d", &basic);
	switch(basic)
	{
		case 200 : printf("Bonus is dollar %d\n", 50);
		     break;
		case 300 : printf("Bonus is dollar %d\n", 125);
		     break;
	    case 400 : printf("Bonus is dollar %d\n", 140);
	         break;
	    case 500 : printf("Bonus is dollar %d\n", 175);
	         break;
	    default : printf("Invalid entry");
	         break;
	}
}

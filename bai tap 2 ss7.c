#include<stdio.h>
main()
{
	float a, b;
	float tich;
	printf("Please enter two numbers a and b: ");
	scanf("%f%f", &a, &b);
	tich = a * b;
	if(tich == 1000)
	   printf("The product of a and b is 1000.");
	if(tich > 1000)
	   printf("The product of a and b is greater than 1000.");
	else if(tich < 1000)
	   printf("The product of a and b is smaller than 1000.");
	return 0;
}

#include<stdio.h>
main()
{
    int a, b;
	printf("Please enter number a: ");
	scanf("%d", &a);
	printf("Please enter number b: ");
	scanf("%d", &b);
	if(a % b == 0)
	   printf("a is divisible by b.");
	else
	   printf("a is not divíible by b.");
	return 0;
}

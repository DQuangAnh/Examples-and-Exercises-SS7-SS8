#include<stdio.h>
main()
{
	float a, b;
	printf("Please enter two number a and b respectively : ");
	scanf("%f%f", &a,&b);
	if(a == a - b || a == b - a)
	    printf("Difference is equal to value a (%.1f)", a);
	else if(b == a - b || b == b - a)
	    printf("Difference is equal to value b (%.1f)", b);
	else
	    printf("Difference is not equal to any of the values entered");
	return 0;
}

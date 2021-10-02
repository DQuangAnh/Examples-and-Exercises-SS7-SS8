#include<stdio.h>
main()
{
    float a, b, c;
    printf("Enter three numbers: ");
    scanf("%f%f%f", &a, &b, &c);
    if((a - b) > 0 && (a - c) > 0)
       printf("The number with the highest value of the three numbers is %f", a);
    else if((b - a) > 0 && (b - c) > 0)
	   printf("The number with the highest value of the three numbers is %f", b);
	else if((c -a) > 0 && (c - b) > 0)
	   printf("The number with the highest value of the three numbers is %f", c);   
	return 0;
}

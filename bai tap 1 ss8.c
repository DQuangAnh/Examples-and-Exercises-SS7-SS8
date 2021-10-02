#include<stdio.h>
main()
{
	float x, y;
	printf("Enter two numbers x and y respectively: ");
	scanf("%f%f", &x, &y);
	if(x < 2000 || x > 3000)
	  {
	  	if(y >= 100 && y <= 500)
	     {
		   printf("x = %f\n", x);
		   printf("y = %f", y);
		 }
		else
		   printf("x = %f\n", x);
		   printf("The value of y does not satisfy the condition");
	  }
	else
	  {
	  	if(y >= 100 && y <= 500)
	  	 {
	  	   printf("y = %f\n", y);
	  	   printf("The value of x does not satisfy the condition");
	     }
	    else
	       printf("The value of y does not satisfy the condition");
	       printf("The value of x does not satisfy the condition");
	    }
	return 0;
}

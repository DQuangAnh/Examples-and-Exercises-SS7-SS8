#include<stdio.h>
main()
{
	char alphabet;
	printf("Types in a letter of the alphabet: ");
	scanf("%c", &alphabet);
	switch (alphabet)
	{
		case 'a':
		   printf("The language is Ada.");
		   break;
		case 'A':
		   printf("The language is Ada.");
		   break;   	
		case 'b':
		   printf("The language is Basic.");
		   break;
		case 'B':
		   printf("The language is Basic.");
		   break;   
		case 'c':
		   printf("The language is COBOL.");
		   break;
		case 'C':
		   printf("The language is COBOL.");
		   break;   
		case 'd':
		   printf("The language is dBASE III.");
		   break;
		case 'D':
		   printf("The language is dBASE III.");
		   break;   
		case 'f':
		   printf("The language is Fortran.");
		   break;
		case 'F':
		   printf("The language is Fortran.");
		   break;   
		case 'p':
		   printf("The language is Pascal.");
		   break;
		case 'P':
		   printf("The language is Pascal.");
		   break;   
		case 'v':
		   printf("The language is Visual C++.");
		   break;
		case 'V':
		   printf("The language is Visual C++.");
		   break;   
	    default:
	       printf("No language matches the letter you entered.");
	       break;
	}	   	            
		return 0;
}

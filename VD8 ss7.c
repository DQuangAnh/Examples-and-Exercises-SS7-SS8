// VD8 ss7
#include<stdio.h>
main()
{
	char ch;
	printf("Enter a lower cased alphabet (a - z) :");
	scanf("%c", &ch);
	if(ch < 'a' || ch > 'z')
	    printf("Character not a lower cased alphabet");
	else
	    switch(ch)
	    {
	    	case 'a' :
	    	case 'e' :
	    	case 'i' :
	    	case 'o' :
	    	case 'u' :
	    		printf("Character is a vowel");
	    		break;
	    	case 'z' :
	    		printf("Last Alphabet (z) was entered");
	    		break;
	    	default:
	    		printf("Character is a consonant");
	    		break;
		}
}

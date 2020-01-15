#include <stdio.h>

int main()
{
	int x = 10;

	int y = x / 2;

 	/* The magic number is - a string
	- ("") - a format string.  
	- %i - format or conversion characters. goes into the format strings. We need to put a coversion for the numbers into a form  that computer understand. 
	- \n - new line character*/
	
	printf ("The value of x is %i\nThe magic number is %i\n", x, y);
	return 0;

}



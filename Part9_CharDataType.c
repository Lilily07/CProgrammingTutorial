/*TOPIC 9 - Char Data Type

%c - character conversion */

#include <stdio.h>

int main()
{
	char ASCII;  //note! -- this can only output one character -- bcs we dont put arrays eg: char myChar[30];  

	//printf("Please put in a character:");
	//scanf("%c", &ASCII);
	//printf("your character is %c \n", ASCII);

	//character convert to integer 
	printf("Please put in a character:");
	scanf("%c", &ASCII); //scan as a character
	printf("your integer for that character is %i \n", ASCII); //output as integer

	//integer to character	
	int integer;
	printf("Please put in an integer between 0-127:"); //128 in total. 0 is included 
	scanf("%i", &integer); //scan as integer
	printf("your character for that integer is %c \n", integer); //output as character
	
	//to do math - we can use do math bcs there's integer value behind a character 
	char mathz = 'A' + '\t'; 
	printf("A(65) + \\t(11) = %c(%i)\n", mathz, mathz);  //if we put '\t' - the tab get rendered. using double backslash '\\t' prevent it from formatting our value -- we called it escaping something

	return 0;
}

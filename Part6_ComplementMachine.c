/*TOPIC 6 - Building a complement machine

-string -- a sequence of characters
-this tutorial will teach how to put strings inside the quotes without directly type it. Like taking input from user
- %s - a format or conversion for string. The concept is we want to pass through a string into another string */

#include <stdio.h>

/*int main()
{
	printf("Hello %s!\n", "Jack"); //this will output "Hello Jack!"
	return 0;
}*/


/* so, how to take input of string? 
- we put the sequence of character into an array --- character array -----char x[value] (x is variable name). */

int main()
{
	char got7 [51]; //[51] - number of characters you want to set. 
			//let say you want it to be 50. 
			//BUT! you must put 51 bcs strings need a character at the end to say the string is over --- null terminator. 
	
	printf("Hey! Who is your Got7 bias?\n");
	scanf("%[^\n]", got7); 
	//scanf("%49s", got7); //grab the first 49 characters
	//no need to put address of operator '&' bcs this is an array.
	// [^\n]--> help us to detect space between characters 

	printf("Wow %s is awesome! Good looking guy\nAll Got7 members are SUPER TALENTED!!!\nOMO OMO OMO\ncringe iknow daa\n", got7);
	return 0;
}


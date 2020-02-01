/*A program to print your name, dob and mobile number

What to do? 
- declare variable
- prompt user 
- print output*/

#include <stdio.h>

int main()
{
	//declare variable 
	char name[51]; //must include extra character for null terminator
	char birthDate[51];
	char mobileNumb[51]; 

	//prompt user
	//scanf - not be able to take multiple words. only gonna grab the first word
	//how to solve? - use fgets 
	//fgets - able to print a line of string. Downside - produce newline after the input 
	printf("Insert your full name: \n");
	//scanf("%s", name);  //no need to put & -why?- this is an array
	fgets (name, 51, stdin);
	printf("Insert your date of birth: \n");
	//scanf("%s", birthDate); 
	fgets (birthDate, 51, stdin); 
	printf("Insert your mobile number: \n");
	scanf("%s", mobileNumb);

	//print output 
	printf("Name: %s\nDate of Birth: %s\nMobile Number: %s\n", name, birthDate, mobileNumb); 

	return 0;
}

//Next improvement: 
// - How to remove the newline coming from fgets? what othe function can be used?  
// - How to make sure no numbers can be accepted when asking for name and no letters can be accepted when asking mobile number? 

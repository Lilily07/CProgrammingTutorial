/* TOPIC 5 - Basic Type Casting - change the data type of some value


program - calculate how many dozen of chicken a company produce in a day
how to execute?
- take input:
	- use printf - a prompt to ask input
	- set a variable x for the input - ex: int eggs
	- use scanf and special character to recognize the value

- process the input:
	- set variable and use double - our value might have decimal
	- input must be divided by a dozen which is 12

- printf the output */


#include <stdio.h>

int main()
{
	printf("Please insert the number of eggs\n"); // prompt for user input
	int eggs; //declaration of variable
	scanf("%i", &eggs); //recognized input --> stored data 

	double dozen = (double) eggs / 12; 
	//type casting - put a data type in parenthesis in the expression. why? -to get the exact decimal value ---> correct output   
	//let say input is eggs = 18 --> (double) 18 = 18.0 ---> 18.0/12 = 1.5 ---> stored in double ---> output is 1.5 
	
	printf("You have %f dozen eggs\n", dozen);

	return 0; 
}


/*WRONG CONDITION!

1. double dozen = eggs / 12; 

-The problem with this code is that we get input as integer, then we divide it by 12 which is an integer. We trying to divide integer with integer which in this case will produce an integer. 

let say input is 18. 18/12 is 1.5. but it will become 1 as the output will become an integer. The final value will then become 1.00000 bcs we stored the data in double. 
	18/12=1.5 -------> 1 (integer) --------> double ----> 1.00000

This is when type casting comes in. see above. 

2. double dozen = eggs / 12.0; 

- This is like saying hey the input is integer and we want it to work it out with a double, therefore the output will be a double.
- We can achieve the correct value by dividing with a decimal (12.0) instead of integer (12). BUT! this is hard coding. We dont want to change the value many times then recompile it if changes occur. 

3. double dozen = (double) (eggs / 12) 

- The (double) will affect the one next to it. In this case, (eggs / 12) is considered as one thing. 
- The program will do the math first ---> (eggs /12) = 1 instead of 1.5 (as it will be integer output) then (double) it ----- 1.000000 ------this results in same condition 1. */ 


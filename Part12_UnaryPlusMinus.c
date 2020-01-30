/*TOPIC 12 - Unary Plus and Minus Operator 

- how this different from binary operators? */

#include <stdio.h>

int main()
{
	//how to use unary minus 
	int eliminated = 93;
	int debut = 7;

	int trainee = eliminated - -debut; //93 - -7 
	//youre not changing the value of debut. its still 7 not -7 
	//this shows that the operators does not change the value... sometimes do... but not this. 
	//they only change the expression

	//arithmetic operators also does not change the variable value 
	// x + y --- after operation is done, the value of x and y remain the same.
	 
	//for unary plus 
	//int 25 + +5 ---> kind of redundant bcs + and + 

	printf("%i\n", trainee);
	
	return 0;
}

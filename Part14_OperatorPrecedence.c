/*TOPIC 14 - Operator Precedence 

- to understand how expression is evaluated
- some operator has precedence over others
- refer to C Operator Precedence table 
- how to know which will be evaluated first? 
	-- look at its level -- look at its associativity */

#include <stdio.h>

int main()
{

	int x, y; //declaring two variables at once 
	x = y = 5; //look at its associativity for which one will be evaluated first
	
	//y = 5; 
	//x =y; 

	int z = 20; 
	y = 2;
	x = -y + z; 

	//this has two ways to evaluate: 

	//according to chart: x = (-y) + z; x = 18 
	//not this: x = -(y + z); x = -22 <-- to achieve this result, put brackets. 

	//be careful! - always check c operators table to get the result we wanted. 

	printf("%i\n", x);
	return 0; 
}

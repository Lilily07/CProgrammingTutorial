/*TOPIC 11  - Arithmetic Operators
--> + - * /
--> operator precedence - order of operation - () > * > / > + > - */

#include <stdio.h>

int main()
{
	//int got7 = 2 + 3 * 4 / 3 - 2; //can use bracket for clear understanding
	//int got7 = 2 + 3 * 4 / (3 - 2); //not same as above -- substraction is carried out first

/*modulus operator -- % -- gives remainder
 - only can be used with integers! - why? - let say double. 5.0 / 2.0 = 2.5 with0 remainder
 - imagine we're dividing a box of pizza among got7 members.  we want to know how many pizza slices left.*/
	
	int slicesOfPizza = 8; //number of slices of pizza
	int got7Members = 7;  //number of got7 members
	int leftOver = slicesOfPizza % got7Members;  
	printf("%i\n", leftOver);
	
	return 0; 
}

/*modulus operator to figure out smthg is  odd or even
 - how? - by checking the remainder 

 - for odd : 17 % 2 = 1 <-- we know this is odd 
 - to check : 2(k) + 1 <--- definition of odd 
 - the opposite of modulus (division) is multiply which will be 2(k). the remainder of 1 becomes + 1. 
	                
 - for even: 2(k) -- 18 % 2 = 0 --- no remainder -- even 


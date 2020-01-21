/*TOPIC 10 - Boolean Data Type 
- two states - anything either true or false
- 0 = false     1 = true 
- booelan logic - saying smthg either true or false
- to declare - write as _Bool   */

#include <stdio.h>
#include <stdbool.h>

int main()
{
	//if not put #include <stdbool.h>
	//_Bool got7_handsome = 250; //any value besides 0 --> true. why? - the values will be stored as 1. 0 = false
				   //why do we have to write "_Bool"? why not just "bool" ? and write "true" or "false" instead of putting values? 
				   //to do that -- need to include boolean library -- #include <stdbool.h> see below
				  	
	//after put #include <stdbool.h>
	bool got7_handsome = false; //true here is a keyword. It has a value of 1 in it. same goes to false -- value 0. true different from "true" -- dont put quote
	printf("Are all members of Got7 handsome? (1 true, 0 false) = %i\n", got7_handsome);
	printf("%i\n", got7_handsome + 10); //this to show true and false has value in it

	return 0;

}

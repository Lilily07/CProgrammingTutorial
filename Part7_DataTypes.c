/* TOPIC 7 - int double float 

int - integer - whole number 
double & float - floating point numbers - anything with a fractional part
- double is considered more standard and better to use
- double has more precision 
*/

#include <stdio.h>

int main()
{
	//int dog = 6; //obviously you have to use whole number 

	//foating point
	/*precision -- how much data the variable can hold
	let say we have -- 99999.9999999 <--- this is super precise. 
	To get this we want to use double. double is more precise*/

	//printf ("%i %f"); 
	//if you pass a float into this --- it bcomes a double.
	//the function will convert the float into double -- only need one %f -- bcs all data will be converted into double
	//thats why we want to use double -- double is more standard

	//when to use float? -- when we are low on data. double takes up twice as much space than floaat

	//weakness of float:
	
	//printf("%i %f %f\n", 1, 1.1111, 1.1111F); //F - to say it is speccifically a float
	//in this - the output are exactly the same - doesnt matter use float or double


	printf("%i %f %f\n", 1, 1111.1111, 1111.1111F);
	//this will give different output for float. why?-- it has to do with how numbers are stored in computers -- stored in binary - base 2 
	//in binary --  certain numbers cannot be represent exactly
	//eventually, if keep on adding data to double -- it wil mess up too
	//if youre unsure which to use -- use double
  	
	return 0;



}


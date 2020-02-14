/*TOPIC 24 - FUNCTION

- how to create function

- first, realize the need of function 
- keep the function as simple as possible! -- only do one thing
- here the function factorial -- only calculate factorial 
- the printing of output -- is made at the caller site 
*/


//we're tyring to calculate a factorial of number 
//factorial of 5 = 5! = 5*4*3*2*1



#include <stdio.h>

//here is the function we created
//this function calculate smthg
int factorial(int number)
{
	int factorial = 1; //1 is not gonna change the value of multiplication 
			   //allows us to keep track of the value

	int i;
	for (i = number; i > 1 ; i-- )
	{
		factorial *= i; //*= is the same as factorial * i
	}

	return factorial; //return here means its return the value to the main code 
}


//VOID FUNCTION
//- not calculate but to do something -- logging, output, etc...
//here we use the void to output the result 
void outputFactorial(int input) 
{
	printf("\nFactorial of %d is %d\n", input, factorial(input));

	//no return value unless needed
}



//the main code
int main()
{ 
	//caller site 
	int fact  = factorial(5); //calling the function factorial
	int fact1  = factorial(6);
	int fact2  = factorial(7);

	printf("%d\n", fact);
	printf("%d\n", fact1);
	printf("%d\n", fact2);

	//we can also do this to make it more simple
	printf("\n%d\n", factorial(5));
	
	//this will print the factorial of factorial 
	printf("\n%d\n", factorial(factorial(3)));  //5 is too large--output will be 0

	//now we have void, we dont need the printf statement above
	outputFactorial(4);

	//we can also do a loop 
	int i;
	for (i = 1; i < 5; i++)
	{
		outputFactorial(i); 
	}

	return 0; 
}

/*TOPIC 13 - Increment,Decrement & Assignment Operators -- change the value of operands

-Increment (++) ----> increase the value by 1
-Decrement (--) ----> decrease the value by 1 
-Assignment (+=) ----> change the value of operators for more than 1 */


#include <stdio.h>

int main()
{
	int pizzasToEat = 100; //declare and initialize variable
	
	//INCREMENT
	//pizzasToEat = pizzasToEat + 1; // this is hard and long way
	//pizzasToEat++; //this is short-hand way. much better. this is unary bcs only one operand

	//int output = pizzasToEat++;
	//this will output to 100. 
	//why? -- the ++ at the end means that it will only increase after pizzasToEat is assign to output
	
	//how to correct this? --> put the ++ before pizzasToEat
	//int output = ++pizzasToEat; 

	//DECREMENT
	//same as increment, but we use (--)
	//int output = --pizzasToEat; 

	//printf("Pizzas to eat:\n%i\n%i\n", output, pizzasToEat);

	//ASSIGNMENT 
	//pizzasToEat = pizzasToEat + 100; // this is hard and long way
	
	pizzasToEat += 100; //increase by 100  
	pizzasToEat -= 100; //decrease by 100 
	pizzasToEat *= 2;   //multiply by 2
	pizzasToEat /= 4;   //divide by 4
	pizzasToEat %= 5; //output will be remainder
	
	printf("Pizzas to eat:\n%i\n", pizzasToEat);
	return 0; 
}

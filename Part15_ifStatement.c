/*TOPIC 15 - if Statement 

how to use if statement */


#include <stdio.h>
#include <stdbool.h> //to use boolean variable 

int main ()
{
	/*
	bool Got7IsHandsome = true; //declare and initialize the variable --> use bool type 

	if (Got7IsHandsome) //variable name
	{
		printf ("Welcome to their fan meeting!\n");
	}*/

	/*The thing about the above code is that it will be executed all the time.
	 Because the input is set to true all the time. no conditional condition. 
	so in order to make it conditional --- we get user input or any input from anywhere else --- text file etc*/

	
	//Conditional statement 

	bool Got7IsHandsome; //declare variable with bool type -- evaluted to true/false
	int input; 

	printf("Do you think Got7 is handsome? 1 for true, 0 for false:"); //prompt user input -- any number other than 0 will be true
	scanf ("%d", &input); // d - force only integer 

	if(Got7IsHandsome) //let say we pass in a value --> if (2.32) -- will be true as lon as not 0!
	{
		//only will be executed if true. if false this code block is skipped. 
		printf("Welcome to their fan meeting!\n");
	}
}

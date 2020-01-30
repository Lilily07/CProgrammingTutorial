/*Coding challenge - calculate Hypotenus Triangle

- two inputs as double
- use sqrt function */


#include <stdio.h>
#include <math.h> //to complie math.h --> add -lm at the end "gcc code.c -o code -lm

int main()
{

	//declare input variable
	double a; 
	double b; 

	//prompt for user input
	printf("Enter the value of a:"); //get first value
	scanf("%lf", &a); //lf - use to scanf a double. cannot use f only - has smthg to do with float" 
	
	printf("Enter the value of b:"); //get second value
	scanf("%lf", &b);

	//initialize variable - calculate the hypotenus
	double c = sqrt ((a*a) + (b*b)); 

	//output 
	printf("The hypotenus of right triangle is %f\n", c);	
	 

	return 0;
}

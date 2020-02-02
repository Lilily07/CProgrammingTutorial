/*TOPIC 18 - LOOP --> for loop

I -initialization --> i = 0;   (this is starting point) 
C -comparison     --> i <= 10; (as long as it is true --- execute code) 
U -update         --> i++      (update everytime code is execute)

Here we're going to focus on for loop 
- can use for counting 
- if we know the max value -- preferably use for loop 
- if there's no definite value -- preferably use while loop  */

//KEYWORD - THINK THINK THINK how to write statement

 
#include <stdio.h>

int  main()
{
	//declare variable 
	int max; 

	//prompt user 
	printf("What is the max value you want to count? : ");
	scanf("%d", &max);

	//process and output
	//for comparison, there's many way we can do the statement 
	// i <= max   (here the number will count until it equals with max 
	// i < max + 1 (the number will count until it is lesser than max + 1. Let say we want 50. so max + 1 is 51. the counting will stop at 50. 
	// SO THINK on how to do the comparison statement same goes to update. 

	int i; 
	/*for (i = 0; i < max; i++) // ( I; C; U) <--- the format 
	{
		printf("%d\n", i);
	}
	
	//let say we want to print out smthg after counting 
	//increment happens after body is execute. 
	//on last iteration, the increment will happen one extra time
	//let say we want to count 10 times. starting from 0, 10 times, last output is 9. 
	//in this case, if we put just i ---> output is 10. 
	//but we want to say the last number we're gonna print -- its 9. 
	//so we make it i - 1. SO THINK how to write statement 
	printf("You printed up to the number %d\n", i - 1);  
	
	//here we want the total. so starting from 0 - 10 it's 11 numbers. THINK how to write statement
	printf("You print a total of %d numbers\n", i);*/

//DECREMENT -- how to do? 
	 
	/*for (; max > 0; max--)
	{
		printf("%d\n", max);
	}*/	

//we can also decrement by 2 
	for (; max >= 0; max = max - 2)
	{
		printf("%d\n", max);
	}


//INFINITE LOOPS
	// - write the comparison as below 
	// - input odd number
	// - see what happen 
	/*for (; max != 0; max = max - 2)
	{
		printf("%d\n", max);
	}*/
	//we can see the output go beyond 0 as not stopping -- this is infinite loop
 
	return 0; 
}

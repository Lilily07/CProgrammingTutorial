/*TOPIC 17 - Ternary conditional operator 

- writing if statement using ternary operator 
- why use? - much more condensed and straight to the point 
- statement ? true : false; <---- structure  

- program : check if money is enough */

#include <stdio.h>

int main ()
{
	//declare variable 
	double money;
	double cost = 50;  

	//prompt user
	printf("How much money do you have? : ");
	scanf("%lf", &money);

	//process and out

	//Ternary way - statement ? true : false; <---- structure  
	money > cost ? printf("You can buy this shoes!\n") : printf("Im sorry not enough money\nYou need %lf more\n", cost - money);

	//Basic if statement 
	/*if (money > cost)
	{
		printf("You can buy this shoes!\n");
	} else  
	{
		printf("Im sorry not enough money\nYou need %lf more\n", cost - money);
	}*/

	return 0;
}

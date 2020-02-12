/*TOPIC 20 - while loop 

- if there's like infinite value -- will be more clear using while loop */

#include <stdio.h>

int main()
{
	int i = 0; //initialization
	while (i < 10)
	{
		//i++; //try this see the result 
		printf("%d", i); //comparison
		i++; //update
	}
	printf("\n");	

//COMPARISON TO FOR LOOP

	for (int j = 0; j < 10; j++)
	{
		printf("%d", j);
	}
	printf("\n");	
	return 0; 
}

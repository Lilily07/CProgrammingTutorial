/*TOPIC 26 - Decay and passing array to functions

I DONT REALLY UNDERSTAND THIS */

#include <stdio.h>

void printArray(int arr[], int size)
{
	int i; 
	for (i = 0; i < size; i++)
	{
		printf("%d\n", arr[i]);
	}
}


int main()
{
	int slicesEachMeal[] = {4, 5, 6, 3, 2};
	printArray(slicesEachMeal, 5);
	return 0; 
}

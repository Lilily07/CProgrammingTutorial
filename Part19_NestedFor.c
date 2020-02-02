/*TOPIC 19 - Nested for loop 

- a for loop inside another for loop
- useful for multidimensional array

- create output like this: 
0
1 0
2 1 0
3 2 1 0
4 3 2 1 0
5 4 3 2 1 0
6 5 4 3 2 1 0
7 6 5 4 3 2 1 0
8 7 6 5 4 3 2 1 0
9 8 7 6 5 4 3 2 1 0
10 9 8 7 6 5 4 3 2 1 0

*/

//this program is for each increment (outer loop) , it will create their decrement(inner loop)

#include <stdio.h>

int main()
{
	int i; 

	//outer loop
	for (i = 0; i < 11; i++) //we want to count up till 10
	{
		//inner loop
		int j; 
		for (j = i; j >= 0 ; j--) //this produces the horizontal number 
		{
			printf("%d  ", j);
		}
		printf("\n");
	}
	
	return 0; 
}

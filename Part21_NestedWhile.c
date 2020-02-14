/*TOPIC 21 - Nested while loop 

- a while loop inside another while loop
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
	//outer loop
	int i = 0, j; //initialize 
	while(i < 11) //we want to count up till 10
	{
		int j = i - 1; //initialize for inner loop
		printf("%d", i);
		i++; //update
		
		//inner loop
		while (j >= 0) //this produces the horizontal number 
		{
			printf("%d  ", j);
			j--; //update
		}
		printf("\n");
	}
	
	return 0; 
}

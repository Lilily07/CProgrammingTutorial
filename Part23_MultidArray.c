/*TOPIC 23 - MULTIDIMENSIONAL ARRAY */

#include <stdio.h>
#include <stdlib.h>

int main()
{

	int myGrades[] = {9, 5, 8};


	//we must address the size of array -- its just rule -- if not, compile error
//	int const col = 3; 
//	int const rows = 2;
	int grades[][3] = {
	    {9, 5, 8}, //student 1
	    {2, 6, 7}  //student 2 
	};

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d", grades[i][j]);
		}
	printf("\n");
	}
	
	return 0; 
}

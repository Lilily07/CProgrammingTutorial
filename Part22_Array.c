/*TOPIC 12 - Array

- grouping of data -- cannot mix data type 
- ex: one array for int, one separate array for double  

- index -- 0 based number -- number that goes in --> []
- element 
- size -- total no in {} -- {12, 50, 3, 4}; -- size = 4 */

//we're going to print all the values of an array 

#include <stdio.h>

int main()
{
	/*you can also do like this 
	int myGrades[]; 
	
	myGrades[0] = 10; //10 is element 1 with index 0 
	myGrades[1] = 12; //12 is element 2 with index 1
	and so on 
	.
	. */

	//but this is easier -- declare and initialize at once 
//	int myGrades[] = {10, 12, 14, 15, 16, 17, 54, 34, 23};
//	printf("%d\n", myGrades[6]); //this gonna print the 6th element of the array


//PRINTING ARRAY WITH LOOP 

	int size = 5; //declaring the size of the array
	int myGrades[size];

	myGrades[0] = 16; 
	myGrades[1] = 12;
	myGrades[2] = 25;
	myGrades[3] = 10;
	myGrades[4] = 18;  
	//you dont want to go beyond the size of an array --- system will go crazy

	//how to print all element of the array? 
	//use loop 

	int i; 
	for (i = 0; i < size; i++)
	{
		printf("%d ", myGrades[i]);
		
	}	
	return 0; 
}

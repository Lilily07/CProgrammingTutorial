/*Using pointer as function argument -- call by reference */



#include <stdio.h>

//CALL BY VALUE
//- will output 10 instead of 11
//- the variable a in main and in function is two separate variable
 
/*void Increment(int a)
{
	a = a + 1; 
}*/



//CALL BY REFERENCE --CORRECT WAY
//- use pointer to reference the value in the address variable 
//- use less stack memory 

void Increment (int *p)
{
	*p = (*p) + 1;
} 

int main()
{
	int a; 
	a = 10; 
//	int *p = &a; //no need  
	Increment(&a); 
	printf("a = %d\n", a);
	return 0; 
}

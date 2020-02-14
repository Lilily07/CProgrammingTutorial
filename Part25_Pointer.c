/*TOPIC 25 - POINTER*/

#include <stdio.h>

int main()
{
	int slices = 20;
	int *p = &slices;

	printf("Slices: %d\n", slices);
	printf("Slices (thru pointer): %d\n", *p); //* -- reference to the value the pointer is pointing. Also called derefrence

	
	//directly 
	slices = 21; 
	
	printf("Slices: %d\n", slices);
	printf("Slices (thru pointer): %d\n", *p); 

	
	//indirectly -- using indirection operator 
	*p = 25; 
	
	printf("Slices: %d\n", slices);
	printf("Slices (thru pointer): %d\n", *p);
 
	//if you want to increment the value

	slices++;

	//*p++ //++ has higher precedence than *, so here it means --> *(p++)
	(*p)++; //this is correct way 
	
	printf("Slices: %d\n", slices);
	printf("Slices (thru pointer): %d\n", *p);

	return 0; 
}

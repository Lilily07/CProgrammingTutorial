//Working with pointer

#include <stdio.h>

int main()
{
	int a; //declare integer variable
	int *p; //pointer to integer
	
	a = 100; //initialize a 
	p = &a; //points to address a
	int b = *p; 

	//printf("Address of a: %d\n", &a); //address where computer allocates the memory 
	//printf("Address of p: %d\n", p); //points to the address of a
	//printf("Value of a: %d\n", a); //value in a -- here value a is rubbish bcs we havent initialize
	//printf("Value of p: %d\n", *p);//value at address pointed by p 
	
	//printf("Address of a: %d\n", p); //here got warning. not correct argument
	printf("Address of a: %p\n", p);
	printf("Value of a: %d\n", a);
	printf("Value of a: %d\n", *p);
	printf("Value of b: %d\n", b);

	//DETERMINE SIZE OF TYPE 
	int c = 1025; //1025 = 00000000 00000000 00000100 00000001 --> 4bytes 
	int *p2;

	p2 = &c; 

	printf("\n\nSize of integer is %ld bytes\n", sizeof(int));
	printf("Address of c: %p\nValue of c: %d\n", p2, *p2);

	//INCREMENT THE POINTER 
	printf("\nAddress of c: %p\nValue of c: %d\n", p2 + 1, *(p2 + 1)); //(*p2) + 1 is WRONG!!
	/*the output: 
	- address of c: will be the next 4 bytes. p2 = 4006 --> p2+1 = 4010 
		- why 4 bytes not 1 byte? 
		- int = 4 bytes (+1 = 4 bytes up) 
	- value of c: will contain the value in the address*/	


	//CHAR TYPE 
	char *p3; //declare a new pointer type -- char
	//p3 = p2; //this is compilation error. p3 is char pointer while p2 is int pointer

	//how to solve? - TYPECASTING 
	p3 = (char*)p2;  
	printf("\n\nSize of integer is %ld bytes\n", sizeof(char));
	printf("Address of c: %p\nValue of c: %d\n", p3, *p3);//here we dereference p3
	/*here the output will be 
	- size of byte = 1 byte --> char type is only 1 byte. so it takes the first byte(most right) 
	- value of c = 1 --> first byte is 00000001 = 1(base 10)  */
	
	//INCREMENT THE POINTER
	printf("\nAddress of c: %p\nValue of c: %d\n", p3 + 1, *(p3 + 1));//here we dereference p3
	/*the output: 
	- address of c: will be the next 1 byte. p3 = 4006 --> p3+1 = 4007 
		- why 1 byte not 4 bytes? 
		- char = 1 byte (+1 = 1 byte up) 
	- value of c: will contain the value in the next byte. here its 00000100 = 4*/	
	
	return 0; 
}

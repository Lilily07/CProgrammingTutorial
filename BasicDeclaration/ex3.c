/*Print character in reverse way */

#include <stdio.h>

int main()
{
	//declare variable
	char c1;
	char c2;

	//propmt user
	printf("please input first letter:");
	scanf("%c", &c1);

	//CORRECT WAY - put getchar before the second scanf -- to get rid of \n
	getchar(); 
 
	printf("please input second letter:"); 
	scanf("%c", &c2);

	printf("The reverse of %c%c is %c%c\n", c1, c2, c2, c1);
 
	return 0; 
}

//THERE'S PROBLEM HEREE!! idk whats wrong. 
//i think it has smthg to do with %c. remember to check it!

/*UPDATE!! I've found the solution
- the problem is scanf.
- It is related to input stream @ buffer of a program
   - when we input smthg from our keyboard -- it goes to some location to temporarily store data before it is assigned to a variable

- What happen in the stream @ buffer? 
  ex:- let say the input is 32. what is stored in the buffer is actually 32 and \n
     - How does scanf executes this? 
	- scanf ("%d", &num1); --> here scanf will grab the 32 and ignore the \n
	- scanf ("%d", &num2); --> now in the buffer we have \n. scanf will not ask for more user input. 
	- BUT! \n is not integer --> so it will ask for more user input.
	- let say second input is 23. here it becomes \n23
	- the second scanf will grab 23 and use it for output  
	- okay this work for integer

	- BUT WHAT ABOUT CHARACTER??
	- let second scanf ---> scanf ("%c", c1)  //this take char input
	- here it will not ask for more user input. why??? 
	- bcs-- remember that after the first input the buffer is left with \n -- which is a perfectly match character.
	- scanf will grab the \n and use it for output

- HOW TO SOLVE??? - use getchar() -- it will grab the \n */

/*TOPIC 16 - Switch statement

-how switch statement works:

 1. only for --> ints and chars ---> NO double or float
    -why can use for char? - every character has integer value --> it's directly convertible to int
 2. no ranges --> only do one value -- no comparison!
    ex: - case 3: <--- only accept one value
	- if (x == 5 && y >= 10) <--- switch CANNOT do this
 3. Logical operator are not allowed! (|| , &&) 
 4. limited option -- bsc accept only one value -- finite number of cases
    ex: -when you're providing several option for user to choose (yes can use if statement but in this situation switch will be much clearer)  */


#include <stdio.h>

int main()
{
//Characters in switch - we can use switch for character data 
	
	printf("%c\n\n\n", 71); //71 is the numerical value for the character 

	//ask user for letter
	char letter;
	printf("Please input letter A or G:");
	scanf("%c", &letter);
	switch(letter)
	{
		case ('G'): //can also use its numerical value --> case (71): 
			printf("Yes it is G\n\n\n");
			break; 
		case ('A'):
			printf("Yes, definitely A!\n\n\n");
			break;
		default:
			printf("sorry not G or A\n\n\n");
			break;
		
	}	


//we're going to ask user how many got7 members they know 

	//declare variable 
	int got7;

	//propmt user 
	printf("Hey you! Welcome to the ahgase official website.\nSooo how many Got7 members do you know: ");
	scanf("%d", &got7); //pass in value and change value input

	//output
	switch(got7) //must put in variable name in ()
	{
		case 1: //COLON not semicolon 
			printf("WHUT?! You should get to know them. They're fun!\n");
			break; //must put! to prevent fall thru next cases 
		case 2:
			printf("Only 2?? That must be jinyoung and jackson haha\n");
			break; 
		case 3:
			printf("Wow! That's good for a newbie ahgase like you\n");
			break; 
		case 4:
			printf("Damn you already know half of them. 3 more!\n");
			break; 
		default: //always put default to catch all other conditions
			printf("SUPERB!! You're totally an ahgase:)))\n");
			break; 
	}
	
//You can also do multiple line for one statement. Let say 3 and below, you want to give the same out put

	/*switch(got7) //must put in variable name in ()
	{
		case 1: //COLON not semicolon
		case 2: 
		case 3:
			printf("Wow! That's good for a newbie ahgase like you\n");
			break; 
		case 4:
			printf("Damn you already know half of them. 3 more!\n");
			break; 
		default: //always put default to catch all other conditions
			printf("SUPERB!! You're totally an ahgase:)))\n");
			break; 
	}*/

//Comparison using elseif 

	/*if(got7 == 1)
	{
		printf("WHUT?! You should get to know them. They're fun!\n");
	} else if (got7 == 2)
	{
		printf("Only 2?? That must be jinyoung and jackson haha\n");
	} else if (got7 == 3)
	{
		printf("Wow! That's good for a newbie ahgase like you\n");
	} else if (got7 == 4)
	{
		printf("Damn you already know half of them. 3 more!\n");
	} else 
	{
		printf("SUPERB!! You're totally an ahgase:)))\n");
	}*/
	
	return 0;
}

/* TO[IC 8 - Scientific  Notation 

scientific notation - number multiply with 10 to some power. 
	50000 -- 5 * 10^4 -- 5e-4
floating point numbers are stored in scientific notation 

Conversion Characters: 
- %i -- integer
- %f -- Decimal notation eg 450000.000
- %e -- Scientific notation 4.5e5
- %g -- the computer decides -- how? -- depends on the size of exponent
	  - < -4 
	  - > 5   -- put in sn, otherwise dn
*/



  
#include <stdio.h>

int main ()
{
	//450000
	//int got7 = 4.5e5; //hardcoding :( 

	//to see output on different conversion characters 
	//to avoid hard coding we ask user input

	double got7; 
	printf("How many seats were sold at Got7 concert?");
	scanf("%lf", &got7); //why %lf? -- how we scanf a double. can use %lf for both dn & sn. the reason for l is it has smthg to do with float. discuss later---
	 

	printf("%f\n%e\n%g\n", got7, got7, got7);

	return 0;
}

//TOPIC - Taking input from user 
//why? - no need to recompile. input value can change according to user

//example: 
//#include <stdio.h>

//int main()
//{
//	int x = 10; - this is hard coding@bad. Because once compile, we need to recompile. we need to go into this, edit it, then recompile again. Pretty bad. 
//	int y = x / 2;

//	printf("The value of x is %i\nThe magic number is %i\n", x, y);
//	return 0;
//}



//project: calculate the area of circle
//how? - user run program > ask for radius input from user > calculate data > output to user


#include <stdio.h>

int main()
{
	int radius; //The distance from outside to center of the circle

	printf("Please input the radius value:\n");
	scanf("%i", &radius);  	//scanf- scan data from the console (integer)
				//& - address-of operater - data(integer) is stored in here - allow scanf to change the value we're passing in
				//\n - no need at this stage bcs we are not displaying it, just taking input
	
	printf("The radius of circle is %i\n", radius);	//does not address-of operator bsc it does not change the value, just displaying output
	return 0;
}

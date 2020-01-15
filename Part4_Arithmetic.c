//TOPIC 4 - Arithmetic Expression


//project: calculate the area of circle
//how? - user run program > ask for radius input from user > calculate data > output to user


#include <stdio.h>

int main()
{
        int radius; 

        printf("Please input the radius value:\n");
        scanf("%i", &radius);   
        
	//we need another variable to calculate the area
	//double is another data type. Used double bcs our value have decimal
	//%f - floating point value. 

	double area = 3.14159 * (radius * radius);    
	printf("The area of the circle is %f\n", area);
                                
        return 0;
}

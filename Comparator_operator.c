/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:3/26/2020
Please use this for learning purpose only.
*/
//Program to use comparator operator to check the relation between any two numbers
#include <stdio.h>				//Include basic input and output statements
int main()						//int in the main function is return type 
{
	int a, b;					//variable declaration for integer type
	printf("Enter two integers: ");
	scanf("%d %d", &a, &b);
	// use of comparator symbol and use of elseif statement in simle way	
	if(a == b) 					// == is the checker function
	{
	    printf("Result: %d = %d",a,b);
	}
	else if (a > b)
	{
	    printf("Result: %d > %d", a, b);
	}
	else 
	{
	    printf("Result: %d < %d",a, b);
	}
	return 0;
}

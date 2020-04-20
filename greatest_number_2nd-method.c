/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:3/26/2020
Please use this for learning purpose only.
*/
//Program to find greatest number among three numbers using if_else if statements
#include<stdio.h>		//Include basic input and output statements
void main ()			//void in the main function is non-return type
{
	int a, b, c;  		//variable declaration for integer type
	printf ("enter three numbers:");
	scanf ("%d%d%d", &a, &b, &c);
	
	//Starting of conditional / functional block using if else if statement	
	if (a - b > 0 && a - c > 0)
    {
    	printf ("a is the greatest number");
    }
	else if (b - c > 0)
    {
    	printf ("enter the b is greatest");
    }
	else
	{
		printf("c is the greatest");
	}
}

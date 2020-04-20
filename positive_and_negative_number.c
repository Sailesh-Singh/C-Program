/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:3/26/2020
Please use this for learning purpose only.
*/
//Program to check and display wether the given number is positive or negative
#include<stdio.h>		//Include basic input and output statements
void main()			    //void in the main function is non-return type
{
	int num;  			//variable declaration for integer type
	printf("Enter the number:- ");
	scanf("%d",&num);
	//Starting of conditional block using if else statement
	if(num>0) // check wether the number is greater than 0 or not
	{
	    printf("The number %d is positive",num);
	}
	else
	{
	    printf("The number %d is negative",num);
	}
}



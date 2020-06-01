/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:6/2/2020
Please use this for learning purpose only.
*/
//Program to check wether number is odd or even using NANR(No argument and with no-return type)
#include<stdio.h>			//Include basic input and output statements
	void even(int a)		//Intialilzing sub-function even() 
	int result;				//variable declaration for integer type
	result%2==0?printf("Its even"):printf("Its odd");//using ternary/conditional operator to validate the result
}
void main()					// void in main function is non-return type
{
	int a;					//variable declaration for integer type
	printf("Enter the number to be checked: ");
	scanf("%d",&a);
	even(a);			//calling sub-fuunction
}

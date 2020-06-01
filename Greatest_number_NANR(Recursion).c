/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:6/1/2020
Please use this for learning purpose only.
*/
//Program to print the largest number using NANR(No argument and with no-return type)
#include<stdio.h>		//Include basic input and output statements
void greater()			//Intialilzing sub-function greater()
{
	int a,b,largest;	//variable declaration for integer type
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	/*checking the condition using if_else*/
	if(a>b)
		largest=a;
	else
		largest=b;
	printf("%d is the greater",largest); // Printing the result value
}
void main()			// void in main function is non-return type
{
	greater(); //calling sub-fuunction
}

/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:4/21/2020
Please use this for learning purpose only.
*/
//Program to print the 'n' whole number using while loop statement
#include<stdio.h>		//Include basic input and output statements
void main()				//void in the main function is non-return type
{
	int i=0,n;			//variable declaration for integer type and assigning value
	printf("Enter the upper limit: ");
	scanf("%d",&n);
	while(i<=n)			//looping for printing the n whole number
	{
		printf("%d  ",i);//Printing the result
		i++;	//increment operator add 1 to the operand
	}
}

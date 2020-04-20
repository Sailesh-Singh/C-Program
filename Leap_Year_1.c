/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:
Facebook:
linkedin:
Date of creation:3/25/2020
Please use this for learning purpose only.
*/
//Program to calculate wether the year is leap or not
#include<stdio.h>		//Include basic input and output statements
void main()			    // void in the main function is non-return type
{
int y;						//int keyword is the variable declaration for integer type
printf("Enter the year:-");
scanf("%d",&y);
if("y%4==0")         //Check the condition for the leap year using if else statement
	{
	printf("The year %d is leap year",y);
	}
else
	{
	printf("The year %d is not leap year",y);
	}
}

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

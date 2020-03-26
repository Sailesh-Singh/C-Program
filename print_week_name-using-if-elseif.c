/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:3/27/2020
Please use this for learning purpose only.
*/
#include <stdio.h>		//Include basic input and output statements
int main()  	   		//int in the main function is return type
{
    int a;				//variable declaration for integer type
    printf("Enter integer between 1 and 7integers: ");
    scanf("%d", &a);
    if(a ==1) 
	{
        printf("Sunday");
    }
    else if (a==2) 
	{
        printf("Monday");
    }
	else if (a==3) 
	{
        printf("Tuesday");
    }
    else if (a==4) 
	{
        printf("Wednesday");
    }
    else if (a==5) 
	{
        printf("Thrusday");
    }
    else if (a==6) 
	{
        printf("Friday");
    }
    else 
	{
        printf("Saturday");
    }
}

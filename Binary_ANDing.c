/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:4/22/2020
Please use this for learning purpose only.
*/
//Program to AND two numbers
#include <stdio.h>		//Include basic input and output statements
int main()				//int in the main function is return type
{
    int a,b;			//variable declaration for integer type 
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);// Scan or take input entered by user
    printf("ANDing of %d and %d = %d",a,b,a&b);//Printing the result
    return 0;
}

/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:3/25/2020
Please use this for learning purpose only.
*/
//Program to display wether the given number is odd or even
#include<stdio.h>		//Include basic input and output statements
void main()			    //void in the main function is non-return type
{
   int n;				//variable declaration for integer type
   printf("Enter an integer: ");
   scanf("%d",&n);
   n%2 == 0 ? printf("Even number\n") : printf("Odd number\n");// functional block to check the number either it is odd or even and printing the result
}

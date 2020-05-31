/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:5/31/2020
Please use this for learning purpose only.
*/
//Program to print 'n' odd number with NANR(no argument and no return)
#include<stdio.h>		//Include basic input and output statements
void odd()
{
   int i=1,n, count=1;	//variable declaration for integer type
    printf("Enter number of terms:");
    scanf("%d",&n);
    while (i<=n)		//checking while condition
    {
        printf("%d\n",count);
        count=count+2;	//Adding 2 to count to make succeding odd number
        i++;			//counts number of terms
    }
}
void main() 	   		//void in the main function is non-return type
{
    odd();				//calling odd() sub-function
}

/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:4/21/2020
Please use this for learning purpose only.
*/
//Program to reverse the number using using recursion;non-return type
#include<stdio.h>					//Include basic input and output statements
void reverse()   					//void in the main function is non-return type
{
    int n, rev=0;    		//variable declaration for integer type
    printf("Enter the number: ");
    scanf("%d",&n);
	while(n>0)				//.
	{							//.
		rev=rev*10+n%10;			//--> Conditional, functional and logical block of code
		n=n/10;					//.
	}						//.
	printf("The reverse number is %d",rev);	//Printing the result
}
// Intializing sub-function	
void main()
{
    reverse();
}

/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:4/21/2020
Please use this for learning purpose only.
*/
//Program to reverse the number using using recursion;return type
#include<stdio.h>			//Include basic input and output statements
// Intializing sub-function	with argument and returning type
int reverse(int n)
{
	int sum=0;    			//variable declaration for integer type
	while(n>0)				//.
	{							//.
		sum=sum*10+n%10;			//--> Conditional, functional and logical block of code
		n=n/10;					//.
	}						//.
	return sum;				//Returning the value of sum
}

int main()					//int in the main function is return type
{
    int n, rev=0;    		//variable declaration for integer type
    printf("enter the number\n");
    scanf("%d",&n);
    rev=reverse(n);			//Calling the sub-function and storing its result in "rev"
    printf("The reverse number is %d",rev);	//Printing the result
    return 0;
}

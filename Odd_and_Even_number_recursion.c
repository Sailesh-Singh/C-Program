/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:4/21/2020
Please use this for learning purpose only.
*/
//Program to check wether the given number is Odd or Even using recursion and using ternary operator
#include <stdio.h>		//Include basic input and output statements
int main()		        //int in the main function is return type
{
    int n; 	            //variable declaration for integer type
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    return oddeven(n);	//Calling sub-function to jump to sub-function
}
// Intialization of sub-function
void oddeven(int a)                        
{													
    a%2==0?printf("its even"):printf("Its Odd"); // Conditional operator to check the condition for odd and even  
}										

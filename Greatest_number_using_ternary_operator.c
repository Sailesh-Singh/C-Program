/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:5/21/2020
Please use this for learning purpose only.
*/
//Program to print the greatest number using ternary operator
#include<stdio.h>		//Include basic input and output statements
int main()	    		//int in the main function is return type
{
	int a,b; 			//variable declaration for integer type
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	//condition? expression 1:expression2
	(a>b)?printf("%d is greatest\n",a):printf("%d is greatest\n",b);//checking condition and printing result
	return 0;//return for int type
}

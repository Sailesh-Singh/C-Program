//Program to print the natural number using NANR(No argument and with no-return type)
#include<stdio.h>		//Include basic input and output statements
void naturalnum()		//Intialilzing sub-function naturalnum()
{
	int i,n;			//variable declaration for integer type
	printf("Enter the no. of terms:  ");
	scanf("%d",&n);
/*Iterating and checking the validity of condition using for_loop*/
	for(i=1; i<=n;i++)
	printf("\n%d",i); 	// Printing the result value
}
void main()				// void in main function is non-return type
{
	naturalnum();		//calling sub-fuunction
}

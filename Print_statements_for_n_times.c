//Program to print statements for n times using for loop
#include <stdio.h>		//Include basic input and output statements
void main()				//void in the main function is non-return type
{
	int i, n;				//variable declaration for integer type
	printf("How many times you want to print the statements?\n=> ");
	scanf("%d",&n); 		//Asking the number of times we want to run loop
	for(i=0; i<n; i++)
	{
	printf("\n My name is Sailesh Singh.");
	printf("\n I live in Nepal.\n");
	}
}




//Program to find greatest number between two number using recursion; with argument and without return type
#include<stdio.h>			//Include basic input and output statements
// Intializing sub-function	with argument(int a, int b) and without returning type
void greater(int a, int b)
{
	int largest;    		//variable declaration for integer type
	if(a>b)					//IF_ELSE to check the conddition
		largest=a;
	else
		largest=b;
	printf("%d is largest\n",largest);	//Printing the result
}

int main()	//int in the main function is return type
{
	int x,y,result;    		//variable declaration for integer type
	printf("Enter the number to be checked: ");
	scanf("%d%d",&x,&y);
	greater(x,y);			//Returning the value of (x,y) to (int a, int b)	
}

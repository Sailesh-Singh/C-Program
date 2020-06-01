//Program to print the largest number using NAWR(No argument and with return type)
#include<stdio.h>		//Include basic input and output statements
int greater() 			//Intialilzing sub-function greater()
{
	int a,b,largest;	//variable declaration for integer type
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
/*checking the condition using if_else*/	
	if(a>b)				
		largest=a;
	else
		largest=b;
	return largest;		//Returning the true condition value to main function
}
int main()			//int in main function is return type
{
    int result;		//variable declaration for integer type
	result=greater(); //calling sub-fuunction and storing its return value to result
	printf("%d is result\n",result); // Printing the result value
}

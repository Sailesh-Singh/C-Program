//Program to print the largest number using WAWR(with argument and with return type)
#include<stdio.h>			//Include basic input and output statements
int greater(int a,int b)	//initializing sub-function with arguments
{
	int largest;    		//variable declaration for integer type
/*checking the condition using if_else*/	
	if(a>b)
	largest=a;
	else
	largest=b;
	return largest;			//Returning the true condition value to main function
}
int main()					//int in the main function is return type
{
	int x,y,result;    		//variable declaration for integer type
	printf("Enter the two numbers:\n");
	scanf("%d%d",&x,&y);
	result=greater(x,y);	//calling sub-fuunction and storing its return value to result
	printf("%d is the greater\n",result);	//Printing the result
	return 0;
}

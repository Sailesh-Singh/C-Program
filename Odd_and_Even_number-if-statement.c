#include<stdio.h>		//Include basic input and output statements
void main()			    //void in the main function is non-return type
{
	int num;  			//variable declaration for integer type
	printf("enter the number");
	scanf("%d",&num);
	//Starting of conditional block using if else statement
	if(num%2==0) // Checks number exactly divisibl by 2
	{
		printf("the number is even");
	}
	else
	{
		printf("the num is odd");
	}
}

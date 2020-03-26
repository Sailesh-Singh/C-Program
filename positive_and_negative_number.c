#include<stdio.h>		//Include basic input and output statements
void main()			    //void in the main function is non-return type
{
	int num;  			//variable declaration for integer type
	printf("Enter the number:- ");
	scanf("%d",&num);
	//Starting of conditional block using if else statement
	if(num>0) // check wether the number is greater than 0 or not
	{
	    printf("The number %d is positive",num);
	}
	else
	{
	    printf("The number %d is negative",num);
	}
}



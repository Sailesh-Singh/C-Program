//Program to use all the arithmetic operators using any two numbers
#include<stdio.h>		//Include basic input and output statements
void main()				//void in the main function is non-return type
{
    int a,b,sum,diff,product,div,rem;	//variable declaration for integer type
    printf("Enter the two numbers: ");
    scanf("%d%d",&a,&b);
    sum=a+b;				//.
    diff=a-b;					//.	
    product=a*b;					//.--->Using the arithmetic operators and storing its value to its respective variable
    div=a/b;					//.
    rem=a%b;				//.
    printf("a+b=%d\n",sum);///////////
    printf("a-b=%d\n",diff);		//
    printf("a*b=%d\n",product);		//::--> Printing the result of used airthmetic operators
    printf("a%b=%d",rem);			//
    printf("a/b=%d\n",div);///////////
}

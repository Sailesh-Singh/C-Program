#include<stdio.h>		//Include basic input and output statements
void main()			    	//void in the main function is non-return type
{
	int a,b,c;  					//variable declaration for integer type
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	c=a*b;							//functional blocks to multiply two number
	printf("the product is %d",c);	//Printing the result
}

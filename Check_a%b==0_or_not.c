//Program to Check wether divisor is exactly divisible by dividend or not
#include<stdio.h>		//Include basic input and output statements
void main()				//void in the main function is non-return type
{
	int a,b;			//variable declaration for integer type 
	printf("Enter the divisor and dividend: ");
	scanf("%d%d",&a,&b);
	if(a%b==0)	//"==" is checker sign that check a%b is 0 or not
	{
		printf("The number %d is exactly divisible by %d",a,b);//Print this line if a%b is 0
	}
	else
	{
		printf("The number %d is not  exactly divisible by %d",a,b);//Print this line if a%b is not 0 
	}
}

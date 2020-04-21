//Program to use and analyse all the increment and decrement operators
#include<stdio.h>		//Include basic input and output statements
void main()				//void in the main function is non-return type
{
	int x,y;			//variable declaration for integer type
	printf("Enter the number: ");
	scanf("%d",&x);
	y=x++;				//Post increment. First it print y=x, then add 1
	printf("y=%d\n",y);	
	y=x--;				//Post descrement.Here x=(x+1). First it print y=x+1, then subtract 1 from x.
	printf("y=%d\n",y);
	y=--x;				//Pre increment. Here x=((x+1)-1) i.e x=x. First it subtract 1 from x then print it i.e y=x-1 
	printf("y=%d\n",y);
	y=++x;				//Post decrement.Here x=x-1. First it add 1 to x then print it i.e y=(x-1)+1  =>y=x
	printf("y=%d\n",y);
}

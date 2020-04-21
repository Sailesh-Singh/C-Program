/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:4/21/2020
Please use this for learning purpose only.
*/
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

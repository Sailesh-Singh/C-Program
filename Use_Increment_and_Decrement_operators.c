//Program to use and analyse all the increment and decrement operators
#include<stdio.h>
void main()
{
	int x,y;
	printf("Enter the number: ");
	scanf("%d",&x);
	y=x++;
	printf("y=%d\n",y);
	y=x--;
	printf("y=%d\n",y);
	y=--x;
	printf("y=%d\n",y);
	y=++x;
	printf("y=%d\n",y);
}

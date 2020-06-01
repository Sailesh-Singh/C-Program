//Program to check wether number is odd or even using NANR(No argument and with no-return type)
#include<stdio.h>
	void even(int a)
	{
	int result;
	result%2==0?printf("Its even"):printf("Its odd");
}
void main()
{
	int a;
	printf("Enter the number to be checked: ");
	scanf("%d",&a);
	even(a);
}

//Program to check wether number is odd or even using NANR(No argument and with no-return type)
#include<stdio.h>
void even()
{
	int a;
	printf("Enter the number to be checked: ");
	scanf("%d",&a);
	a%2==0?printf("Its Even"):printf("Its odd");
}
void main()
{
	even();
}

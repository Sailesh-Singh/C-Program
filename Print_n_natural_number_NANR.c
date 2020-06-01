//Program to print the natural number using NANR(No argument and with no-return type)
#include<stdio.h>
void naturalnum()
{
	int i,n;
	printf("Enter the no. of terms:  ");
	scanf("%d",&n);
	for(i=1; i<=n;i++)
	printf("\n%d",i);
}
void main()
{
	naturalnum();
}

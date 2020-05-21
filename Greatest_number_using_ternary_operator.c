//Program to print the greatest number using ternary operator
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	(a>b)?printf("%d is greatest\n",a):printf("%d is greatest\n",b);
	return 0;
}

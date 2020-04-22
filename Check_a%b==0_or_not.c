//Program to Check wether divisor is exactly divisible by dividend or not
#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter the divisor and dividend: ");
	scanf("%d%d",&a,&b);
	if(a%b==0)
	{
		printf("The number %d is exactly divisible by %d",a,b);
	}
	else
	{
		printf("The number %d is not  exactly divisible by %d",a,b);
	}
}

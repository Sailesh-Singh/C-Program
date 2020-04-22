//Program to check the number a is multiple of b or not
#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter the divisor and dividend: ");
	scanf("%d%d",&a,&b);
	if(a%b==0)
	{
		printf("The number %d is multiple of %d\n",a,b);
		printf("i.e %d x %d = %d",a/b,b,a);
	}
	else
	{
		printf("The number %d is not multiple of %d",a,b);
	}
}

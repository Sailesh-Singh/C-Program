//Program to print the largest number using NANR(No argument and with no-return type)
#include<stdio.h>
void greater()
{
	int a,b,largest;
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	if(a>b)
		largest=a;
	else
		largest=b;
	printf("%d is the greater",largest);
}
void main()
{
	greater();
}

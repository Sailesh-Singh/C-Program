//Program to print the largest number using NAWR(No argument and with return type)
#include<stdio.h>
int greater()
{
	int a,b,largest;
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	if(a>b)
		largest=a;
	else
		largest=b;
	return largest;
}
int main()
{
    int result;
	result=greater();
	printf("%d is result\n",result);
}

//Program to Swap two number using third variable
#include <stdio.h>
void main()
{
	int a,b,c;
	printf("Enter two numbers: \n");
	scanf("%d%d",&a,&b);
	printf("\n\nBefore Swaping\n");
	printf("A=%d B=%d \n",a,b);
	c=a+b;
	a=c-a;
	b=c-b;
	printf("\n\nAfter Swaping\n");
	printf("A=%d B=%d \n",a,b);
}

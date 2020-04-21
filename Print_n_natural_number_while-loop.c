//Program to print the 'n' natural number using while loop statement
#include<stdio.h>
void main()
{
	int i=1,n;
	printf("Enter the upper limit: ");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d  ",i);
		i++;
	}
}

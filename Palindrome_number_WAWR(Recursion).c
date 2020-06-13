//Program to check wether the number is palindrome or not
#include<stdio.h>
void reverse()
{
	int p, sum=0,n, rev=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	p=n;
	while(n>0)
	{
		sum=sum*10+n%10;
		n=n/10;
	}
	p==sum?printf("The given number %d is palindrome",p):printf("The given number %d is not palindrome",p);
}

void main()
{
	int rev;
	reverse();
}

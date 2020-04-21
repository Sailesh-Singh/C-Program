//Program to reverse the number using using recursion;non-return type
#include<stdio.h>
void reverse()
{
    int n, rev=0, sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
	while(n>0)
	{
		sum=sum*10+n%10;
		n=n/10;
	}
	printf("The reverse number is %d",sum);
}
	
void main()
{
    reverse();
}

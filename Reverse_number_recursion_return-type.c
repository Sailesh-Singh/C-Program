//Program to reverse the number using using recursion;return type
#include<stdio.h>
int reverse(int n)
{
	int sum=0;
	while(n>0)
	{
		sum=sum*10+n%10;
		n=n/10;
	}
	return sum;
}

int main()
{
    int n, rev=0;
    printf("enter the number\n");
    scanf("%d",&n);
    rev=reverse(n);
    printf("The reverse number is %d",rev);
    return 0;
}

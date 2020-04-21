/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:4/21/2020
Please use this for learning purpose only.
*/
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

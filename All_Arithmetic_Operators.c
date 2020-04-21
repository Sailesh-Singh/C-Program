//Program to use all the arithmetic operators using any two numbers
#include<stdio.h>
void main()
{
    int a,b,sum,diff,product,div,rem;
    printf("Enter the two numbers: ");
    scanf("%d%d",&a,&b);
    sum=a+b;
    diff=a-b;
    product=a*b;
    div=a/b;
    rem=a%b;
    printf("a+b=%d\n",sum);
    printf("a-b=%d\n",diff);
    printf("a*b=%d\n",product);
    printf("a%b=%d",rem);
    printf("a/b=%d\n",div);
}

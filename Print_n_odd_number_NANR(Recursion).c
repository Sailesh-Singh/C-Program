//Program to print 'n' odd number with NANR(no argument and no return)
#include<stdio.h>
void odd()
{
   int i=1,n, count=1;
    printf("Enter n:");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("%d\t",count);
        count=count+2;
        i++;
    }
}
void main()
{
    odd();
}

//Program to print 'n' even number with NANR(no argument and no return)
#include<stdio.h>
void even()
{
   int i=0,n, count=0;
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
    even();
}

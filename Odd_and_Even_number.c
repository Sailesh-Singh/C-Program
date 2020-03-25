#include<stdio.h>
void main()
{
   int n;
   printf("Enter an integer : ");
   scanf("%d",&n);
   n%2 == 0 ? printf("Even number\n") : printf("Odd number\n");
}

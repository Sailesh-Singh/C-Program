//Using do while loop print and find the sum of square number up to n
#include <stdio.h>
int main()
{
    int n, i, s, sum=0;
    do
    {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    } while (n <= 0);
    for (i = 1; i <= n; ++i)
    {
    s=i*i;	
    sum=sum+s;
    printf("%d\n",s);
    }
    printf("Sum=%d",sum);
    return 0;
}


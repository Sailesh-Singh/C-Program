

#include <stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);
    printf("Print all odd numbers from %d to n :",n);
    i=1;
    while(i<=n)
    {
        printf("%d\n", i);
        i=i+2;
    }
    return 0;
}



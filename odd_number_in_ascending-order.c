#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    do 
	{
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    } 
	while (n <= 0);
    if(n%2==0)
    {
        n=n-1;
    }
    for (i=n ; i>=1; i=i-2)
    	printf("\n%d",i);
}

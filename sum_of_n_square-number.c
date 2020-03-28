#include <stdio.h>
void main()
{
    int i, n,sum=0;
    printf("Enter the number: ");
    scanf("%d", &n);
    i=1;
    while(i<=n)
    {
         sum=sum+i*i;
        i++;
    } 
	printf("Sum of %d square numbers =%d\n",n, sum);
}



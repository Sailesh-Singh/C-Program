//Program to print even number in desceding order
#include <stdio.h>
int main()
{
    int n, i;
    do
    {
        printf("Enter upper limit for even number: ");
        scanf("%d", &n);
    } 
	while (n<= 0);
    if(n%2!=0)
    {
    	n=n-1;
	}
	for (i = n; i>= 1; i=i-2)
    printf("\n %d", i);
    return 0;
}

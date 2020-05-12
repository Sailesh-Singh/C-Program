#include<stdio.h>
void odd()
{
	int i=1,n, count=1;
    printf("Enter n:");
    scanf("%d",&n);
    while (i<=n)
    {
        {
		printf("%d\t",count);
        count=count+2;
        i++;
        }
        {printf("%d\n",count);
        count=count+2;
        i++;
        }
        count=count+1;
        i++;
    }
}
void main()
{
    odd();
}

//Program to print odd and even alternatively
#include<stdio.h>		//Include basic input and output statements
void odd()				//void in the sub-function is non-return type
{
	int i=1,n, count=1;// variable declaration for integer type
    printf("Enter n:");
    scanf("%d",&n);
    while (i<=n)
    {
        {
		printf("%d\t",count);
        count=count+2;
        i++;
        }
        {
		printf("%d\n",count);
        count=count+2;
        i++;
        }
        count=count+1;
        i++;
    }
}
void main()				//void in the main function is non-return type
{
    odd();		//Odd sub-function is called
}

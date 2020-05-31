//Program to print 'n' odd number with NANR(no argument and no return)
#include<stdio.h>		//Include basic input and output statements
void odd()
{
   int i=1,n, count=1;	//variable declaration for integer type
    printf("Enter n:");
    scanf("%d",&n);
    while (i<=n)		//checking while condition
    {
        printf("%d\t",count);
        count=count+2;	//Adding 2 to count to make succeding odd number
        i++;			//counts number of terms
    }
}
void main() 	   		//void in the main function is non-return type
{
    odd();				//calling odd() sub-function
}

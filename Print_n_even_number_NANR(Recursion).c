//Program to print 'n' even number with NANR(no argument and no return)
#include<stdio.h>
#include<stdio.h>		//Include basic input and output statements
void even()
{
   int i=0,n, count=0;	//variable declaration for integer type
    printf("Enter number of terms:");
    scanf("%d",&n);
    while (i<=n)		//checking while condition
    {
        printf("%d\n",count);
        count=count+2;	//Adding 2 to count to make succeding even number
        i++;			//counts number of terms
    }
}
void main() 	   		//void in the main function is non-return type
{
    even();				//calling even() sub-function
}

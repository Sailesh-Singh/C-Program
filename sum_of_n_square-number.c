#include <stdio.h>		//Include basic input and output statements
void main()		 	   	//void in the main function is non-return type
{
    int i, n,sum=0;		//variable declaration for integer type
    printf("Enter the number: ");
    scanf("%d", &n);
    i=1;				//assigning value
    while(i<=n)
    {
         sum=sum+i*i;
        i++;			//counter
    } 
	printf("Sum of %d square numbers =%d\n",n, sum);
}



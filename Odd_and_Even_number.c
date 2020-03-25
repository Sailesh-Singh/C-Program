#include<stdio.h>		//Include basic input and output statements
void main()			    //void in the main function is non-return type
{
   int n;				//variable declaration for integer type
   printf("Enter an integer: ");
   scanf("%d",&n);
   n%2 == 0 ? printf("Even number\n") : printf("Odd number\n");// functional block to check the number either it is odd or even and printing the result
}

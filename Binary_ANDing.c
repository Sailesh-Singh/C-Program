//Program to AND two numbers
#include <stdio.h>		//Include basic input and output statements
int main()				//int in the main function is return type
{
    int a,b;			//variable declaration for integer type 
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);// Scan or take input entered by user
    printf("ANDing of %d and %d = %d",a,b,a&b);//Printing the result
    return 0;
}

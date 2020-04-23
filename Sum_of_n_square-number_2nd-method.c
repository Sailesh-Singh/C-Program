//Using do while loop print and find the sum of square number up to n
#include <stdio.h>		//Include basic input and output statements
void main()	     	   	//void in the main function is non-return type
{
    int n, i, s, sum=0;	//variable declaration for integer type
    do
    {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    } while (n <= 0);	//Check the integer is positive else it will repeat the do loop untill positive number is entered
    for (i = 1; i <= n; ++i)
    {
    s=i*i;	
    sum=sum+s;
    printf("%d\n",s);	//Print the square on number in new line
    }
    printf("Sum=%d",sum);//Print the sum of all the square number
}


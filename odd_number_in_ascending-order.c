#include <stdio.h>		//Include basic input and output statements
void main()	 	  	 	//void in the main function is non-return type
{
    int n, i, sum = 0;	//variable declaration for integer type
    do 
	{
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    } 
	while (n <= 0);	//to check the integer is positive else it will repeat the do loop untill positive number is entered
    if(n%2==0)
    {
        n=n-1;
    }
    for (i=n ; i>=1; i=i-2)
    	printf("\n%d",i);	//printing the odd number each in new line
}

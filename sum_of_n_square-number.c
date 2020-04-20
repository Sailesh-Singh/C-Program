/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:3/28/2020
Please use this for learning purpose only.
*/
//Program to find the sum of n square number without using direct formula
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

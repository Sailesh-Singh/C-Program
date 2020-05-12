/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:5/12/2020
Please use this for learning purpose only.
*/
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

/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:3/25/2020
Please use this for learning purpose only.
*/
//Program to find the sum of first n natural number using for loop statement
#include<stdio.h>		//Include basic input and output statements
void main()			    // void in the main function is non-return type
{
int n,i,sum;			//variable declaration for integer type
sum=0;			    	//assigning value
printf("Enter the upper limit : ");
scanf("%d",&n);
	for(i=0;i<=n;i++)		//looping for printing the n whole number
	{
		printf("%d ",i);
		sum=sum+i;
	}
printf ("\nThe sum is : %d",sum); //Printing the sum for the series

}

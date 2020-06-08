/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:06/08/2020
Please use this for learning purpose only.
*/
//Program to print the base address of elements in array and its sum
#include<stdio.h>			//Include basic input and output statements
void main() 		    	//void in the main function is non-return type
{
	int *ptr, sum=0, i;		//variable declaration for integer type and *ptr is a pointer pointing the allocated memory location
	int a[5]={2,3,4,5,6};	//variable declaration for integer type, declaring the elements of array
	ptr=&a;					//Assigning the allocated memory location of 'a' in 'ptr'
	/*ptr=&a[0]; //Instead of line 7, this can also be used*/
	/*For loop used to iterate the statements for 5 times*/
	for(i=0;i<5;i++)
	{
	    printf("The base address is %p\n",ptr);	//'%p' is used to print the base address of the elements
	    sum=sum+*ptr;		// add the elements and store its value to variable 'sum'
	    ptr++;			 
	}
	printf("The sum of numbers is %d",sum); 	//printing the total sum of all the elements within the array
}

/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:3/28/2020
Please use this for learning purpose only.
*/
#include<stdio.h>		//Include basic input and output statements
void main()		  		//void in the main function is non-return type
{
	int i,count=0;			//variable declaration for integer type
	printf("Enter the number: ");
	scanf("%d",&i);
	while(i)
	{
		i=i/10;
		count++;		
	}
	    printf("The total number of digits is %d",count); //printing the result
}

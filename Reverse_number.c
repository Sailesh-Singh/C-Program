/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:3/25/2020
Please use this for learning purpose only.
*/
//Program to reverse the number given by user
#include<stdio.h>		//Include basic input and output statements
void main()			    //void in the main function is non-return type
{
int num,rem,rev=0;  	//variable declaration for integer type
printf("enter the number");
scanf("%d",&num);
while(num!=0)
	{							//.
	rem=num%10;						//.
	rev=(rev*10)+rem;					// ----> functional blocks to reverse the given number
	num=num/10;						//.
	}							//.
printf("the reverse is: %d",rev);				//Printing the result
}

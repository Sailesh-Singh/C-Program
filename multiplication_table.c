/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:3/25/2020
Please use this for learning purpose only.
*/
//Program to print the multiplication table
#include<stdio.h>
void main()
{
	int i,num;
	printf("Enter the number: ");
	scanf("%d",&num);
	for(i=1; i<=10; i++)		//looping statement for the iteration or repetion of same line of code.
	printf("%d*%d=%d\n",num,i,num*i);
}

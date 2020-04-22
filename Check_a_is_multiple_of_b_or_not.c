/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:4/22/2020
Please use this for learning purpose only.
*/
//Program to check the number a is multiple of b or not
#include<stdio.h>		//Include basic input and output statements
void main()				//void in the main function is non-return type
{
	int a,b;			//variable declaration for integer type 
	printf("Enter the divisor and dividend: ");
	scanf("%d%d",&a,&b);
	if(a%b==0)			//"==" is checker sign that check a%b is 0 or not
	{
		printf("The number %d is multiple of %d\n",a,b);//Print this line if a%b is 0
		printf("i.e %d x %d = %d",a/b,b,a);				//Print this line if a%b is 0
	}
	else
	{
		printf("The number %d is not multiple of %d",a,b);//Print this line if a%b is not 0 
	}
}

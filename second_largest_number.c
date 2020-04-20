/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:3/27/2020
Please use this for learning purpose only.
*/
//Program to find second largest number between three numbers
#include<stdio.h>		//Include basic input and output statements
void main()				//void in main function is non-return type
{
    int a,b,c;			//variable declaration for integer type
    printf("Enter the number:\t");
    scanf("%d%d%d",&a,&b,&c);
    //Begining of the logical block; uses logical operator(|| and &&)
    if((a>b && a<c) || (a>c && a<b))
	   {
			printf("%d is the second largest number",a);
	   }
	else if((b>c && b<a) || (b>a && b<c))
		{
			printf("%d is the second largest number",b);	
		}
	else
		{
			printf("%d is the second largest number",c);
		}
}

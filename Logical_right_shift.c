/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:5/31/2020
Please use this for learning purpose only.
*/
//Program to right-shift an integer by n digit
#include <stdio.h>		//Include basic input and output statements
int main(void)			//int in the main function is return type
{
unsigned int a;			//unsigned int is variable declaration of integer type without any sign
int c,n;				//variable declaration for integer type		
printf("Enter the unsigned integer:\n");
scanf("%d",&a);			//scaning integer for shifting
printf("Enter the number by which %d should be shifted:\n",a);
scanf("%d",&n);			//scaning a integer by which integer is shifted 
c = a << n;				//condition for shifiting 'a' integer by 'n' digit in right side
printf("%d >> %d = %d\n",a,n,c);//printing the result
return 0;
}

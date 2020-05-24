/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:5/25/2020
Please use this for learning purpose only.
*/
//Program to exclusively OR two unsigned integers
#include <stdio.h>		//Include basic input and output statements		
int main(void)			//int in the main function is return type	
{
unsigned int a, b;		//unsigned int is variable declaration of integer type without any sign	
int c;					//variable declaration for integer type								
printf("Enter the two unsigned integers:\n");
scanf("%d%d",&a,&b);
c = a ^ b;  /* Converts a and b into binary then perform inclusive OR*/
printf("%d ^ %d = %d\n", a, b, c );
return 0;
}

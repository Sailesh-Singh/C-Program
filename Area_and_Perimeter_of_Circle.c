/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:
Facebook:
linkedin:
Date of creation:3/25/2020
Please use this for learning purpose only.
*/
//Program to find the Area and perimeter of circle
#include<stdio.h>		//Include basic input and output statements
int main()			    // int in the main function is return type
{
float r,A,P;			//float is the variable declaration for decimal type	
printf("Enter the radius");
scanf("%f",&r);
A=3.14*r*r;							//functional block to calculate the area
P=2*3.14*r;
printf("the area is %f and he perimeter is%f",A,P);
return 0;
}

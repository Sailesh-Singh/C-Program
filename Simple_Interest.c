/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:
Facebook:
linkedin:
Date of creation:3/25/2020
Please use this for learning purpose only.
*/
#include<stdio.h>		//Include basic input and output statements
void main()			    // void in the main function is non-return type
{
	int p,t,r,SI;			//variable declaration for integer type
	printf("Enter the Principle, Time and Rate:-");
	scanf("%d%d%d",&p,&t,&r);
	SI=(p*t*r)/100;					//functional block to calculate the simple interest
	printf("The Simple Interest is %d",SI);//Printing the result
}

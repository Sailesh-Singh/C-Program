/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:3/26/2020
Please use this for learning purpose only.
*/
//Program to calculate the profit and profit percentage
#include<stdio.h>		//Include basic input and output statements
void main()			    //void in the main function is non-return type
{
	int sp,cp,p,per;  	//variable declaration for integer type
	printf("Enter the sp and cp");
	scanf("%d%d",&sp,&cp);
	p=sp-cp;					//functional blocks to calculate profit amount
	per=(p*100)/cp;				//functional blocks to calculate profit percent
	printf("The profit is %d and percentage is %d",p,per);  //Printing result
}

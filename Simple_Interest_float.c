/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:5/02/2020
Please use this for learning purpose only.
*/
//Program to calculate the Simple Interest using float
#include <stdio.h>		//Include basic input and output statements
void main()			    // void in the main function is non-return type
{
	int p,t,r;			//variable declaration for integer type
    float I;			//variable declaration for float type i.e fractional type
    printf("Enter principle: ");
    scanf("%d",&p);		//Scaning the principle from the user
    printf("Enter Time: ");
    scanf("%d",&t);		//Scaning the time from the user
    printf("Enter Rate: ");
    scanf("%d",&r);		//Scaning the rate from the user
    I=(p*t*r)/100;				//functional statement to calculate the simple interest
    printf("The intrest is %f",I);//Printing the result
}


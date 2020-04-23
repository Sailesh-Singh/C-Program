/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:4/23/2020
Please use this for learning purpose only.
*/
//Program to find the solution of pairs of straight lines
#include<stdio.h>		//Include basic input and output statements
void main()				//void in the main function is non-return type
{
    float a,b,c,d,m,n,x1,x2;
    printf("Enter the value of a,b and m of ax1+bx2=m:\t");
    scanf("%f%f%f",&a,&b,&m);//Scan value for first line
    printf("Enter the value of c,d and n of cx1+dx2=n:\t");
    scanf("%f%f%f",&c,&d,&n);//Scan value for second line
    int denominator=a*d-c*b;
    if(denominator==0)//Condition true then further calculation cannot be done, value will be infinite
    {
        printf("The denominator is zero");
    }
    else
	{
        x1=(m*d-b*n)/denominator; 
        x2=(n*a-m*c)/denominator;
        printf("The solution of lines:\nX1= %.2f\t X2= %.2f",x1,x2); //Printiing the float value of X1 and X2 up to 2 decimal places
    }
}

/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:3/26/2020
Please use this for learning purpose only.
*/
//Program to calculate the area between two concentric circle (circle having same centre but different radii)
#include<stdio.h> //Include basic input and output statements
#include<math.h>	////Include basic maths function . 
void main()			    //void in the main function is non-return type
{
	float r,R,a,A;  	//variable declaration for float type
	printf("Enter the first and second radii");
	scanf("%f",&r,&R);
	a=3.14*pow(r,2);				//Area of small circle
	A=3.14*R*R;				//Area of the big circle
	printf("The area between the concentric circle is %f and %f",a,A); //Printing the result
}

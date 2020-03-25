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

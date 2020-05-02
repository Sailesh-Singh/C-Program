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


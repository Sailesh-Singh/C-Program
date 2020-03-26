/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:3/26/2020
Please use this for learning purpose only.
*/
#include <stdio.h>		//Include basic input and output statements
#include <math.h>		//Include mathematical functions such as sqrt, sin, cos, pow, log, exp etc.
int main() 		    	//int in the main function is return type
{
	// rp = realPart			//.
	// ip = imaginaryPart			//.
	// r1 = First root					// ----> Local notation for shortening of code and for easy understanding
	// r2 = Second root				//.
	// d  = Discrminant			//.
    double a, b, c, d, r1, r2, rp, ip;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    d = b*b - 4*a*c;						// functional blocks to calculate discriminant

	//Starting of formula block using if else if statement
	if (d > 0) 								//Condition check for d
	{
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("r1 = %.2lf and r2 = %.2lf", r1, r2);
    }
    else if (d == 0) 
	{
        r1 = r2 = -b / (2*a);
        printf("r1 = r2 = %.2lf;", r1);
    }
    else 
	{
        rp = -b / (2*a);
        ip = sqrt(-d) / (2*a);
        printf("r1 = %.2lf+%.2lfi and r2 = %.2f-%.2fi", rp, ip, rp, ip); //printing result for real and imaginary part
    }
    return 0;
}



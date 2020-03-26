#include <stdio.h>
#include <math.h>
int main() 
{
	// rp = realPart
	// ip = imaginaryPart
	// r1 = First root
	// r2 = Second root
	// d  = Discrminant
    double a, b, c, d, r1, r2, rp, ip;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    d = b*b - 4*a*c;
    if (d > 0) 
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
    else {
        rp = -b / (2*a);
        ip = sqrt(-d) / (2*a);
        printf("r1 = %.2lf+%.2lfi and r2 = %.2f-%.2fi", rp, ip, rp, ip);
    }
    return 0;
}



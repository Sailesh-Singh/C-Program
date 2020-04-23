#include<stdio.h>
void main()
{
    float a,b,c,d,m,n,x1,x2;
    printf("Enter the value of a,b and m of ax1+bx2=m:\t");
    scanf("%fgit%f%f",&a,&b,&m);
    printf("Enter the value of c,d and n of cx1+dx2=n:\t");
    scanf("%f%f%f",&c,&d,&n);
    int denominator=a*d-c*b;
    if(denominator==0)
    {
        printf("The denominator is zero");
    }
    else
	{
        x1=(m*d-b*n)/denominator;
        x2=(n*a-m*c)/denominator;
        printf("The solution of lines:\nX1= %.2f\t X2= %.2f",x1,x2);
    }
}

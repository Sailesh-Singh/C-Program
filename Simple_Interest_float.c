//Program to calculate the Simple Interest using float
#include <stdio.h>
void main()
{
	int p,t,r;
    float I;
    printf("Enter principal: ");
    scanf("%d",&p);
    printf("Enter Time: ");
    scanf("%d",&t);
    printf("Enter Rate: ");
    scanf("%d",&r);
    I=(p*t*r)/100;
    printf("The intrest is %f",I);
}

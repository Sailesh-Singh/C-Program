#include<stdio.h>
void main()
{
int p,t,r,SI;
printf("Enter the Principle, Time and Rate:-");
scanf("%d%d%d",&p,&t,&r);
SI=(p*t*r)/100;
printf("The Simple Interest is%d",SI);
}

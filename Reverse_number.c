#include<stdio.h>
void main()
{
int num,rem,a=0;
printf("enter the number");
scanf("%d",&num);
while(num!=0)
{
rem=num%10;
a=(a*10)+rem;
num=num/10;
}
printf("the reverse is: %d",a);
}

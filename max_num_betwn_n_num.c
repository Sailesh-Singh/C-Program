#include<stdio.h>
void main()
{
int value[5],i,max;
for(i=0; i<=5; i++)
{
printf("enter the number");
scanf("%d",&value[i]);
}
for(i=0;i<=5;i++)
{
if(max<value[i])
max= value[i];
}
printf("the maximum number is %d",max);
}

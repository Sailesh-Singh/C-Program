#include<stdio.h>
void main()
{
int i,num;
printf("enter the number");
scanf("%d",&num);
for(i=1; i<=10; i++)
printf("%d*%d=%d\n",num,i,num*i);
}

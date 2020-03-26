#include<stdio.h>
main()
{
int sp,cp,p,per;
printf("Enter the sp and cp");
scanf("%d%d",&sp,&cp);
p=sp-cp;
per=(p*100)/cp;
printf("The profit is %d and percentage is %d",p,per);
}

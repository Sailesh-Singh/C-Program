#include<stdio.h>
void main()
{
int value[5],i,max,n;
printf("How many number you wan to check?: ");
scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		printf("enter the number");
		scanf("%d",&value[i]);
	}
	for(i=0;i<=n;i++)
	{
		if(max<value[i])
		max= value[i];
	}
printf("the maximum number is %d",max);
}

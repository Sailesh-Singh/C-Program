#include<stdio.h>
void main()
{
int y;
printf("Enter the year:-");
scanf("%d",&y);
if("y%4==0")
	{
	printf("The year %d is leap year",y);
	}
else
	{
	printf("The year %d is not leap year",y);
	}
}

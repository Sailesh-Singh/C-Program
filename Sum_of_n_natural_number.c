#include<stdio.h>
void main()
{
int n,i,sum;
sum=0;
printf("Enter the upper limit : ");
scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("%d ",i);
		sum=sum+i;
	}
printf ("\nThe sum is : %d",sum);

}

#include<stdio.h>
void main()
{
int n,i,print;
print=0;
printf("Enter the upper limit : ");
scanf("%d",&n);
for(i=0;i<=n;i++)
	{
		printf("%d ",i);
		print=print+i;
	}
}

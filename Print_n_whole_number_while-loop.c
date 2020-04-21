
//Program to print the 'n' whole number using while loop statement
#include<stdio.h>	
void main()			
{
	int i=0,n;		
	printf("Enter the upper limit: ");
	scanf("%d",&n);
	while(i<=n)		
	{
		printf("%d  ",i);
		i++;	
	}
}

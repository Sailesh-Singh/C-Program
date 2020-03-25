#include<stdio.h>		//Include basic input and output statements
void main()			    // void in the main function is non-return type
{
int n,i,print;			//variable declaration for integer type
print=0;				//assigning value
printf("Enter the upper limit : ");
scanf("%d",&n);
for(i=1;i<=n;i++)		//looping for printing the n whole number
	{
		printf("%d ",i);
		print=print+i;
	}
}

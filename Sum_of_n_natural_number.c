#include<stdio.h>		//Include basic input and output statements
void main()			    // void in the main function is non-return type
{
int n,i,sum;			//variable declaration for integer type
sum=0;			    	//assigning value
printf("Enter the upper limit : ");
scanf("%d",&n);
	for(i=0;i<=n;i++)		//looping for printing the n whole number
	{
		printf("%d ",i);
		sum=sum+i;
	}
printf ("\nThe sum is : %d",sum); //Printing the sum for the series

}

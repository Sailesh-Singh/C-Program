
#include<stdio.h>		//Include basic input and output statements
void main()		  		//void in the main function is non-return type
{
	int i,count=0;			//variable declaration for integer type
	printf("Enter the number: ");
	scanf("%d",&i);
	while(i)
	{
		i=i/10;
		count++;		
	}
	    printf("The total number of digits is %d",count); //printing the result
}

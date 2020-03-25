#include<stdio.h>		//Include basic input and output statements
void main()			    //void in the main function is non-return type
{
int num,rem,rev=0;  	//variable declaration for integer type
printf("enter the number");
scanf("%d",&num);
while(num!=0)
	{							//.
	rem=num%10;						//.
	rev=(rev*10)+rem;					// ----> functional blocks to reverse the given number
	num=num/10;						//.
	}							//.
printf("the reverse is: %d",rev);				//Printing the result
}

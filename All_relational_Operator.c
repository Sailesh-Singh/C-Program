//WAP to use all relational operator
#include<stdio.h>		//Include basic input and output statements
int main()				//int in the main function is return type
{
	int a,b;			//variable declaration for integer type
	printf("Enter the two numbers:\t");
	scanf("%d%d",&a,&b);//scaning two numbers from the user
	//Conditional check using if
	if (a!=b)
	{
	printf("%d is not equal to %d\n",a,b);
		//if conditional check inside the if condition
		if(a>b)
		{
			printf("%d is greater than %d i.e (%d>%d)\n",a,b,a,b);
		}
		else if(a<b)
		{
			printf("%d is less than %d i.e (%d<%d)\n",a,b,a,b);
		}
		
		else if(a>=b)
		{
			printf("%d is greater or equal to %d i.e (%d>=%d)\n",a,b,a,b);
		}
		else if(a<=b)
		{
			printf("%d is less or equal to %d i.e (%d<=%d)\n",a,b,a,b);
		}
	}
	else if(a==b)
	{
		printf("%d is equal to %d i.e (%d=%d)\n",a,b,a,b);
	}
return 0;
}

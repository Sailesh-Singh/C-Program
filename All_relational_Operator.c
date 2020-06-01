/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:5/12/2020
Please use this for learning purpose only.
*/
//WAP to use all relational operator
#include<stdio.h>		//Include basic input and output statements
int main()				//int in the main function is return type
{
	int a,b;			//variable declaration for integer type
	printf("Enter the two numbers:\t");
	scanf("%d%d",&a,&b);//scaning two numbers from the user
	//Conditional check using if
	if (a!=b)//logcal not
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

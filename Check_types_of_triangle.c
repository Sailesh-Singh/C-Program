#include<stdio.h>
void main()
{
	int a,b,c;
//	long int sum=1;
	printf("enter the three side of triangle:\t");
	scanf("%d%d%d",&a,&b,&c);
	//conditions to check the types of triangle 
if(a<(b+c) || b<(a+b) || c<(a+b))
{
	
		printf("The triangle is valid");
}
//	else
//	{
//		printf("The triangle is not valid");
//	}	
else if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
	{
		printf("The triangle is right angle triangle");
	}
//	else
//	{
//	    printf("The triangle is not right angle");
//	}
	else if(a==b || b==c || a==c)
	{
		printf("The triangle is isosceles");
	}
//	else
//	{
//	    printf("The triangle is not isosceles");
//	}
	else if(a==b && b==c && a==c)
	{
		printf("The triangle is equilateral");
	}
//	else
//	{
//	    printf("The triangle is not equilateral");
//	}
}

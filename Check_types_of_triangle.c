#include<stdio.h>			//Include basic input and output statements
void main() 		    	//void in the main function is non-return type
{
	int a,b,c;				//variable declaration for integer type
	printf("enter the three side of triangle:\t");
	scanf("%d%d%d",&a,&b,&c);
	//conditions to check the types of triangle 
	if(a<(b+c) || b<(a+b) || c<(a+b))
	{	
		printf("The triangle is valid");
	
		if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
			printf("\nThe triangle is right angle triangle");
		
		else if(a==b && b==c && a==c)
			printf("\nThe triangle is equilateral");	
			
		else if(a==b || b==c || a==c)
			printf("\nThe triangle is isosceles");		
	}
} 
//It is necessary to keep the code in same order

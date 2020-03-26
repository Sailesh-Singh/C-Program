#include<stdio.h>		//Include basic input and output statements
void main ()			//void in the main function is non-return type
{
	int a, b, c;  		//variable declaration for integer type
	printf ("enter three numbers:");
	scanf ("%d%d%d", &a, &b, &c);
	
	//Starting of conditional / functional block using if else if statement	
	if (a - b > 0 && a - c > 0)
    {
    	printf ("a is the greatest number");
    }
	else if (b - c > 0)
    {
    	printf ("enter the b is greatest");
    }
	else
	{
		printf("c is the greatest");
	}
}

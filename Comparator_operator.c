#include <stdio.h>				//Include basic input and output statements
int main()						//int in the main function is return type 
{
	int a, b;					//variable declaration for integer type
	printf("Enter two integers: ");
	scanf("%d %d", &a, &b);
	// use of comparator symbol and use of elseif statement in simle way	
	if(a == b) 					// == is the checker function
	{
	    printf("Result: %d = %d",a,b);
	}
	else if (a > b)
	{
	    printf("Result: %d > %d", a, b);
	}
	else 
	{
	    printf("Result: %d < %d",a, b);
	}
	return 0;
}

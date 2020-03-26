#include<stdio.h>
void main ()
{
	int a, b, c;
	printf ("enter three numbers:");
	scanf ("%d%d%d", &a, &b, &c);
	
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

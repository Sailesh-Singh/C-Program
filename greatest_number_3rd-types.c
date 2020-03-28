
#include <stdio.h>		//Include basic input and output statements
void main()		    	//int in the main function is return type
{
	int n1,n2,n3;  		//variable declaration for integer type
	printf("\nEnter 3 numbers: ");
	scanf("%d %d %d",&n1,&n2,&n3);
//	Intializing of functional block to determine greatest number
	if(n1>n2)
		{
		if(n1>n3)
			{
				printf("\n%d is the greatest number.",n1);
			}
		else
			{
				printf("\n%d is the greatest number.",n3);
			}
		}
	else
		{
			if(n2>n3)
			{
				printf("\n%d is the greatest number.",n2);
			}
			else
			{
				printf("\n%d is the greatest number.",n3);
			}
		}
}


#include <stdio.h>
void main()
{
	int n1,n2,n3;
	printf("\nEnter 3 numbers: ");
	scanf("%d %d %d",&n1,&n2,&n3);
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

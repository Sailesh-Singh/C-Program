#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the two numbers:\t");
	scanf("%d%d",&a,&b);
	if (a!=b)
	{
	printf("%d is not equal to %d\n",a,b);
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

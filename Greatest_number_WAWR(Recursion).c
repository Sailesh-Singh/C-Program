//Program to print the largest number using WAWR(with argument and with return type)
#include<stdio.h>
int greater(int a,int b)
{
	int largest=0;
	if(a>b)
	largest=a;
	else
	largest=b;
	return largest;
}
int main()
{
	int x,y,result;
	printf("Enter the two numbers:\n");
	scanf("%d%d",&x,&y);
	result=greater(x,y);
	printf("%d is the greater\n",result);
	return 0;
}

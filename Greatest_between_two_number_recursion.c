//Program to find greatest number between two number using recursion; with argument and without return type
#include<stdio.h>
void greater(int a, int b)
{
	int largest;
	if(a>b)
		largest=a;
	else
		largest=b;
	printf("%d is largest\n",largest);
}

int main()
{
	int x,y,result;
	printf("Enter the number to be checked: ");
	scanf("%d%d",&x,&y);
	greater(x,y);

}

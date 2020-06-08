//Program to print the base address of elements in array and its sum
#include<stdio.h>
void main()
{
	int *ptr, sum=0, i;
	int a[5]={2,3,4,5,6};
	ptr=&a;
	for(i=0;i<5;i++)
	{
	    printf("The base address is %p\n",ptr);
	    sum=sum+*ptr;
	    ptr++;
	}
	printf("The sum of numbers is %d",sum);
}

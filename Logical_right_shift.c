//Program to right-shift an integer by n digit
#include <stdio.h>
int main(void)	
{
unsigned int a;	
int c,n;		
printf("Enter the unsigned integer:\n");
scanf("%d",&a);
printf("Enter the number by which %d should be shifted:\n",a);
scanf("%d",&n);
c = a >> n;
printf("%d >> %d = %d\n",a,n,c);
return 0;
}

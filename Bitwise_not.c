//Program find bitwise not or one's complement of unsigned integer
#include <stdio.h>
int main(void)			
{
unsigned int a;	
int c;											
printf("Enter a unsigned integers:\n");
scanf("%d",&a);
c = ~a;  
printf("~%d = %d\n", a, c );
return 0;
}

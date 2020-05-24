#include <stdio.h>
int main(void)
{
unsigned int a, b;
int c;
printf("Enter the two unsigned integers:\n");
scanf("%d%d",&a,&b);
c = a & b;
printf("%d & %d = %d\n", a, b, c );
return 0;
}

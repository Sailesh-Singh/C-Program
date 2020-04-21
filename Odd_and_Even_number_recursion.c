#include <stdio.h>
int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    return oddeven(n);
}
void oddeven(int a) 
{
    a%2==0?printf("its even"):printf("Its Odd");
}

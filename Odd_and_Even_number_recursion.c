/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:4/21/2020
Please use this for learning purpose only.
*/
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

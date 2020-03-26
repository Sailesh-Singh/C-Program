#include <stdio.h>
int main() {
    int a;
    printf("Enter integer between 1 and 7integers: ");
    scanf("%d", &a);
    if(a ==1) 
	{
        printf("Sunday");
    }
    else if (a==2) 
	{
        printf("Monday");
    }
	else if (a==3) 
	{
        printf("Tuesday");
    }
    else if (a==4) 
	{
        printf("Wednesday");
    }
    else if (a==5) 
	{
        printf("Thrusday");
    }
    else if (a==6) 
	{
        printf("Friday");
    }
    else 
	{
        printf("Saturday");
    }
}

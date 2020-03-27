#include <stdio.h>		//Include basic input and output statements
int main()				//int in main function is return type
{
    int a,b,c;			//variable declaration for integer type
    printf("Enter three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
//    logical and functionnal block for smallest number
    if(a<b && a<c)
	{
        printf("\n%d is the smallest",a);
    }
    else if(b<c)
	{
        printf("\n%d is the smallest",b);
    }
    else
	{
        printf("\n%d is the smallest",c);
    }
	
//    logical and functionnal block for largest number
    if(a>b && a>c)
    {
        printf("\n%d is largest",a);
    }
    else if(b>c){
        printf("\n%d is largest",b);
    }
    else
	{
        printf("\n%d is largest",c);
    }
    return 0;
}

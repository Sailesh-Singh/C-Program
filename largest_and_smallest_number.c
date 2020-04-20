/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:3/27/2020
Please use this for learning purpose only.
*/
//Program to find largest and smallest number among three numbers
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

#include<stdio.h>		//Include basic input and output statements
void main()				//void in main function is non-return type
{
    int a,b,c;			//variable declaration for integer type
    printf("Enter the number:\t");
    scanf("%d%d%d",&a,&b,&c);
    //Begining of the logical block; uses logical operator(|| and &&)
    if((a>b && a<c) || (a>c && a<b))
	   {
			printf("%d is the second largest number",a);
	   }
	else if((b>c && b<a) || (b>a && b<c))
		{
			printf("%d is the second largest number",b);	
		}
	else
		{
			printf("%d is the second largest number",c);
		}
}

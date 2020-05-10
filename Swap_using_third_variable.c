/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:5/10/2020
Please use this for learning purpose only.
*/
//Program to Swap two number using third variable
#include <stdio.h>		//Include basic input and output statements
void main()				//void in the main function is non-return type
{
	int a,b,c;			//variable declaration for integer type
	printf("Enter two numbers: \n");
	scanf("%d%d",&a,&b);		//Scaning the number 'a' and 'b' from the user
	printf("\n\nBefore Swaping\n");
	printf("A=%d B=%d \n",a,b);	//Printing the number before swaping
	c=a+b;					//.
	a=c-a;						//----->functional block to swap two number using third variable
	b=c-b;					//.
	printf("\n\nAfter Swaping\n");
	printf("A=%d B=%d \n",a,b);	//Printing the number after swaping
}

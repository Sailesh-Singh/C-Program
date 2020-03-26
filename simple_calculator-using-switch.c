/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:3/27/2020
Please use this for learning purpose only.
*/
#include<stdio.h>		//Include basic input and output statements
int main()		 	    //void in the main function is non-return type
{
    int a, b, result;	//variable declaration for integer type
    char op;		//variable declaration for character(it may be anything)
    printf("Enter an expression: ");
    scanf("%d%c%d", &a, &op, &b);
	//Intialization of switch statements
    switch(op)
    {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
    }
    printf("Result = %d", result);
    return 0;
}

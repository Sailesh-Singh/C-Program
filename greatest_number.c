/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:
Facebook:
linkedin:
Date of creation:3/25/2020
Please use this for learning purpose only.
*/
# include<stdio.h>		//Include basic input and output statements
void main()			    //void in the main function is non-return type
{
    int a, b, c, Greatest;  //variable declaration for integer type
    printf("Enter three numbers : ");
    scanf("%d %d %d", &a, &b, &c) ;
    Greatest = a>b ? (a>c ? a : c) : (b>c ? b : c);	//functional block to check the condition for greatest number
    printf("\nThe greatest number is : %d", Greatest);	//Printing the result
}

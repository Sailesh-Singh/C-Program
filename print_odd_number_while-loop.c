/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:3/28/2020
Please use this for learning purpose only.
*/
//Program to print odd numbers up to n
#include <stdio.h>		//Include basic input and output statements
int main()	    		//int in the main function is return type
{
    int i, n; 			//variable declaration for integer type
    scanf("%d", &n);
    printf("Print all odd numbers from 1 to %d :\n",n);
    i=1;       //Value assigning
//    Begining of logical and functional block using while loop
    while(i<=n)
    {
        printf("%d\n", i);
        i=i+2;
    }
    return 0;
}



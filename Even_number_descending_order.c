/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:4/23/2020
Please use this for learning purpose only.
*/
//Program to print even number in desceding order
#include <stdio.h>		//Include basic input and output statements
int main()	 	  	 	//void in the main function is non-return type
{
    int n, i;			//variable declaration for integer type
    do
    {
        printf("Enter upper limit for even number: ");
        scanf("%d", &n);
    } 
	while (n<= 0);//Check the integer is positive else it will repeat the do loop untill positive number is entered
    if(n%2!=0)    //Check If entered number is odd
    {
    	n=n-1;	  //Make the number even by subtracting 1
	}
	for (i = n; i>= 1; i=i-2)
    printf("\n %d", i);	//print the even number each in new line
}
    return 0;
}

/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
Facebook: https://www.facebook.com/saileshsingh36
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:3/26/2020
Please use this for learning purpose only.
*/
#include<stdio.h>		//Include basic input and output statements
void main()			    //void in the main function is non-return type
{
int value[5],i,max,n;  	//variable declaration for integer type
printf("How many number you wan to check?: ");
scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		printf("enter the number");
		scanf("%d",&value[i]);
	}
	for(i=0;i<=n;i++)			//.
	{								//.
		if(max<value[i])				// ----> functional blocks to check which number is maximum
		max= value[i];				//.
	}							//.
printf("the maximum number is %d",max);				//Printing the result
}

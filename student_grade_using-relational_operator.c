/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:3/27/2020
Please use this for learning purpose only.
*/
//Program to find the student grade using relational operators
#include <stdio.h>		//Include basic input and output statements
int main() 	   			//int in the main function is return type
{
int num;				//variable declaration for integer type
printf(" Enter your mark ");
scanf("%d",&num);
printf(" You entered %d\n", num); // printing outputs
	if (num>=90)
	printf(" You got A+ grade"); // printing outputs

	else if(num >= 80)
	printf(" You got A grade"); // printing outputs
	
	else if(num >= 70)
	printf(" You got B+ grade"); // printing outputs
	
	else if ( num >=60) // Note there is space between else & if
	printf(" You got B grade");
	
	else if(num >= 50)
	printf(" You got C+ grade"); // printing outputs
	
	else if ( num >40)
	printf(" You got C grade");
	
	else if(num == 40)
	printf(" You got D grade"); // printing outputs
	
	else if(num >= 20)
	printf(" You got E grade"); // printing outputs
	
	else 
	printf(" You got F grade");
	
return 0;
}

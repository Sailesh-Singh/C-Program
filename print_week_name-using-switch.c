/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:3/27/2020
Please use this for learning purpose only.
*/
#include <stdio.h>		//Include basic input and output statements
int main()	 	   		//void in the main function is non-return type
{
    int week;			//variable declaration for integer type
    printf("Enter week number(1-7): ");
    scanf("%d", &week);
// Intializing switch statement
    switch(week)
    {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid input! Please enter week number between 1-7.");
    }
    return 0;
}

//Program to check wether the number is prime or not and find the imaginary root if it is imaginary
#include<stdio.h>					//Include basic input and output statements
#include<math.h>					//Include mathematical functions like sqrt,pow,trignometric functions etc.
void main()  						//void in the main function is non-return type
{
    int n,num;						// Variable declaration for integer type
    float root;						//variable declaration for float type i.e fractional type
    printf("Enter the number:  ");
    scanf("%d",&n);					//Scaning the number from user; to be checked
    if(n==0||n==1)					//If number is '0' or '1' then it
    printf("%d is neither prime nor composite.",n);//Print number is neither prime nor composite
    else if(n==2||n==3)				// Checker "==" operator checks if 'n' is 2 or 3
    printf("%d is prime number.",n);
    else 							//If all above statement fails then by default it runs this else block
    {
		if (n>1 && n%1==0 && n%n==0)//Check if the number is positive (i.e greater than 0) and is exactly divisible by 1 and itself 
        {
			if (n%2==0 || n%3==0)	//Check 'n' is divisible by 2 or 3
			printf("%d is not prime number.",n );//If condition true; print this line
			else
			printf("%d is prime number.",n);//If condition false; print this line
        }
        else if (n<0)				//Check if 'n' is negative (i.e less than 0) 
        {
			num=n*(-1);				//Convert -ve 'n' into +ve by multiplying it with -1. Store the +ve value in 'num' variable
			root=pow(num,0.5);		//Find the square root of num and pass its value to 'root' variable
			
			//Print the value of root. Its orignal value 'n' is -ve. So, result of 'root' gives the imaginary number
			printf("The root of %d is %.2fi which is imaginary.",n,root);
			printf("\nThus, the number %d is neither prime nor composite.",n);
		}
    }
}

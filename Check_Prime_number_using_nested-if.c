//Program to check wether the number is prime or not and find the imaginary root if it is imaginary
#include<stdio.h>
#include<math.h>
void main()
{
    int n,num;
    float root;
    printf("Enter the number:  ");
    scanf("%d",&n);
    if(n==0||n==1)
    printf("%d is neither prime nor composite.",n);
    else if(n==2||n==3)
    printf("%d is prime number.",n);
    else 
    {
        if (n>1 && n!=0 && n%1==0 && n%n==0)
        {
            if ( n>3 && n%2==0 || n%3==0)
            {
            printf("%d is not prime number.",n );
            }
            else
            {
                printf("%d is prime number.",n);
            }
        }
        else
        {
            if (n<0)
	          num=n*(-1);
	          root=pow(num,0.5);
	          printf("The root of %d is %.2fi which is imaginary.",n,root);
	          printf("\nThus, the number %d is neither prime nor composite.",n);
        }
    }
}

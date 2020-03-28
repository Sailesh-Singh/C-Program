

#include <stdio.h>		//Include basic input and output statements
int main()	    		//int in the main function is return type
{
    int i, n; 			//variable declaration for integer type
    scanf("%d", &n);
    printf("Print all odd numbers from %d to n :",n);
    i=1;       //Value assigning
//    Begining of logical and functional block using while loop
    while(i<=n)
    {
        printf("%d\n", i);
        i=i+2;
    }
    return 0;
}



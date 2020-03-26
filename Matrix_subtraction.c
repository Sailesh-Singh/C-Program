/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:3/27/2020
Please use this for learning purpose only.
*/
#include<stdio.h>		//Include basic input and output statements
int main()		    	//int in the main function is return type
{
    int n, m, c, d, first[10][10], second[10][10], diff[10][10];  //variable declaration for integer type also using array
    printf("\nEnter the number of rows and columns of the first matrix\n");
    scanf("%d%d", &m, &n);

    printf("Enter the %d elements of the first matrix \n", m*n); 	//first elements of matrix
    for(c = 0; c < m; c++)   				// to iterate the rows
        for(d = 0; d < n; d++)   			// to iterate the columns
            scanf("%d", &first[c][d]);
    printf("\nEnter the %d elements of the second matrix\n", m*n);	//second elements of matrix
    for(c = 0; c < m; c++)   				// to iterate the rows
        for(d = 0; d < n; d++)   			// to iterate the columns
            scanf("%d", &second[c][d]);

    //    finding the DIFFERENCE of the two matrices
    for(c = 0; c < m; c++)
        for(d = 0; d < n; d++)
            diff[c][d] = first[c][d] - second[c][d];

    // printing the elements of the diff matrix
    printf("\n\nThe difference(subtraction) of the two entered matrices is: \n\n");
    for(c = 0; c < m; c++)
    {
        for(d = 0; d < n; d++)
        {
            printf("%d\t", diff[c][d]);
        }
        printf("\n");
    }
    return 0;
    }

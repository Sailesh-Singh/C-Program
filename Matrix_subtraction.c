#include<stdio.h>

int main()
{
    printf("\t\tProgram by Sailesh Singh\n\n");
    int n, m, c, d, first[10][10], second[10][10], sum[10][10], diff[10][10];
    printf("\nEnter the number of rows and columns of the first matrix\n");
    scanf("%d%d", &m, &n);

    printf("Enter the %d elements of the first matrix \n", m*n);
    for(c = 0; c < m; c++)   				// to iterate the rows
        for(d = 0; d < n; d++)   			// to iterate the columns
            scanf("%d", &first[c][d]);
    printf("\nEnter the %d elements of the second matrix\n", m*n);
    for(c = 0; c < m; c++)   				// to iterate the rows
        for(d = 0; d < n; d++)   			// to iterate the columns
            scanf("%d", &second[c][d]);

    //finding the SUM of the two matrices
    for(c = 0; c < m; c++)
        for(d = 0; d < n; d++)
            sum[c][d] = first[c][d] + second[c][d];

    // printing the elements of the sum matrix
    printf("\n\nThe sum of the two entered matrices is: \n\n");
    for(c = 0; c < m; c++)
    {
        for(d = 0; d < n; d++)
        {
            printf("%d\t", sum[c][d]);
        }
        printf("\n");
    }
    
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
    printf("\t\t\tC is fun!");
    printf("\n\t\t\t---------");
    return 0;
    }

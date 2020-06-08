/*This Program is coded by Mr. Sailesh Singh
You can follow and look after the work done by me on following links
Github:	  https://github.com/Sailesh-Singh
linkedin: https://www.linkedin.com/in/saileshsingh36
Date of creation:6/8/2020
Please use this for learning purpose only.
*/
//Program to find addition of two user defined matrices (multidimensional(2D) array)
#include<stdio.h>
int main()
{
	int i,j,row,column;
	printf("Enter the number of rows and columns of matrix\n");
	scanf("%d%d", &row, &column);

	int a[row][column],b[row][column],sum[row][column];	
//Declaration of elements of first matrix	
	printf("Enter %d elements of first matrix \n",row*column);
	for(i=0;i<row;i++)
		for(j=0;j<column;j++)
		    scanf("%d",&a[i][j]);
	
//Declaration of elements of second matrix	
	printf("Enter %d elements of second matrix\n",row*column);
	for(i=0;i<row;i++)
	    for(j=0;j<column;j++)
	        scanf("%d",&b[i][j]);

//Logic for adding two matrices
    for (i = 0; i < row; i++)
        for (j = 0; j < column; j++) 
            sum[i][j] = a[i][j] + b[i][j];
        
//Printing the result of Sum of two matrices
    printf("\nSum of two matrices: \n");
    for (i = 0; i < row; i++)
        for (j = 0; j < column; j++) 
        {
            printf("%d\t", sum[i][j]);
            if (j == column - 1) 
            {
                printf("\n");
            }
        }
    return 0;
}

//Program to add two matrices using user-defined functions
#include<stdio.h>
int main()
{
	int i,j,row,column;
	printf("Enter number of rows and columns of matrix: ");
	scanf("%d%d",&row,&column);
	
	int a[row][column],b[row][column],sum[row][column];
    //Declaration of elements of first matrix	
	printf("Enter %d elements of first matrix \n",row*column);
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	//Declaration of elements of second matrix
	printf("Enter %d elements of second matrix\n",row*column);
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	//Logic for adding two matrices and Printing the result of Sum of two matrices
	printf("\nSum of entered matrices : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            sum[i][j] =a[i][j] + b[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}

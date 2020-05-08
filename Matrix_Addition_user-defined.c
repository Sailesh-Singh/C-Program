//Program to add two matrices using user-defined functions
#include<stdio.h>		//Include basic input and output statements
int main()		    	//int in the main function is return type
{
	int i,j,row,column;  //variable declaration for integer type
	printf("Enter number of rows and columns of matrix: ");
	scanf("%d%d",&row,&column);
	
	int a[row][column],b[row][column],sum[row][column];//variable declaration for integer type using array.
    //Declaration of elements of first matrix	
	printf("Enter %d elements of first matrix \n",row*column);
	for(i=0;i<row;i++)   				//  iterate the row and increase the value of 'i' by +1
	{
		for(j=0;j<column;j++)   		//  iterate the columns and increase the value of 'j' by +1
		{
			scanf("%d",&a[i][j]);		// scan rows and columns of matrix
		}
	}
	//Declaration of elements of second matrix
	printf("Enter %d elements of second matrix\n",row*column);
	for(i=0;i<row;i++)   				//  iterate the row and increase the value of 'i' by +1
	{
		for(j=0;j<column;j++)   		//  iterate the columns and increase the value of 'j' by +1
		{
			scanf("%d",&b[i][j]);		// scan rows and columns of matrix
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

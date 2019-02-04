#include <stdio.h>

int main()
{
    int first_matrix[10][10], second_matrix[10][10], result[10][10], row1, column1, row2, column2, i, j, k;

    printf("Enter rows and column for first matrix:\n");
    scanf("%d %d", &row1, &column1);

    printf("Enter rows and column for second matrix:\n");
    scanf("%d %d",&row2, &column2);

    // Column of first matrix should be equal to column of second matrix and
    while (column1 != row2)
    {
        printf("Error! column of first matrix not equal to row of second.\n\n");
        printf("Enter rows and column for first matrix: ");
        scanf("%d %d", &row1, &column1);
        printf("Enter rows and column for second matrix: ");
        scanf("%d %d",&row2, &column2);
    }

    // Storing elements of first matrix.
    printf("\nEnter elements of matrix 1:\n");
    for(i=0; i<row1; ++i)
        for(j=0; j<column1; ++j)
        {
            printf("Enter elements a%d%d: ",i+1, j+1);
            scanf("%d", &first_matrix[i][j]);
        }

    // Storing elements of second matrix.
    printf("\nEnter elements of matrix 2:\n");
    for(i=0; i<row2; ++i)
        for(j=0; j<column2; ++j)
        {
            printf("Enter elements b%d%d: ",i+1, j+1);
            scanf("%d",&second_matrix[i][j]);
        }

    // Initializing all elements of result matrix to 0
    for(i=0; i<row1; ++i)
        for(j=0; j<column2; ++j)
        {
            result[i][j] = 0;
        }

    // Multiplying matrices a and b and
    // storing result in result matrix
    for(i=0; i<row1; ++i)
        for(j=0; j<column2; ++j)
            for(k=0; k<column1; ++k)
            {
                result[i][j]+=first_matrix[i][k]*second_matrix[k][j];
            }

    // Displaying the result
    printf("\nOutput Matrix:\n");
    for(i=0; i<row1; ++i)
        for(j=0; j<column2; ++j)
        {
            printf("%d  ", result[i][j]);
            if(j == column2-1)
                printf("\n\n");
        }
    return 0;
}

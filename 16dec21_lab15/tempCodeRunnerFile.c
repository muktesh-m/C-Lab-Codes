#include <stdio.h>
//check for symmetric matrix
int main()
{
    int A[4][4];
    int B[4][4];
    int row, col, isSymmetric;
    /* Input elements in matrix A from user */
    printf("Enter elements in matrix of size 4x4: \n");
    for (row = 0; row < 4; row++)
    {
        for (col = 0; col < 4; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    /* Find transpose of matrix A*/
    for (row = 0; row < 4; row++)
    {
        for (col = 0; col < 4; col++)
        {
            B[row][col] = A[col][row];
        }
    }

    /* Check whether matrix A is equal to its transpose or not*/
    isSymmetric = 1;
    for (row = 0; row < 4 && isSymmetric; row++)
    {
        for (col = 0; col < 4; col++)
        {
            if (A[row][col] != B[row][col])
            {
                isSymmetric = 0;
                break;
            }
        }
    }

    //If the given matrix is symmetric.
    if (isSymmetric == 1)
    {
        printf("\nThe given matrix is Symmetric matrix: \n");

        for (row = 0; row < 4; row++)
        {
            for (col = 0; col < 4; col++)
            {
                printf("%d ", A[row][col]);
            }

            printf("\n");
        }
    }
    else
    {
        printf("\nThe given matrix is not Symmetric matrix.");
    }

    return 0;
}
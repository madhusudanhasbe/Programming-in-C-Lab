#include<stdio.h>
void main()
{
    int i, j;
    int mat1[5][5]={0}; 
    int mat2[5][5]={0};
    int matadd[5][5]={0};
    int matsub[5][5]={0};
    int mattrans[5][5]={0};
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            printf("Enter the value for %dth row, %dth column position of matrix 1:\n", i+1, j+1);
            scanf("%d", &mat1[i][j]);
            printf("Enter the value for %dth row, %dth column position of matrix 2:\n", i+1, j+1);
            scanf("%d", &mat2[i][j]);
        }
    }
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            matadd[i][j] = mat1[i][j] + mat2[i][j];
            matsub[i][j] = mat1[i][j] - mat2[i][j];
            mattrans[i][j] = mat1[j][i];
        }
    }
    printf("The matrix addition is:\n");
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            printf("%d ",matadd[i][j]);
            if (j==4)
                printf("\n");
        }
    }
    printf("The matrix subtraction is:\n");
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            printf("%d ",matsub[i][j]);
            if (j==4)
            {
                printf("\n");
            }
        }
    }
    printf("The transpose of the matrix 1 is:\n");
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            printf("%d ",mattrans[i][j]);
            if (j==4)
            {
                printf("\n");
            }
        }
    }
    // for (i=0;i<5;i++)
    // {
    //     for (j=0;j<5;j++)
    //     {
    //         printf("%d ",mat1[i][j]);
    //         if (j==4)
    //         {
    //             printf("\n");
    //         }
    //     }
    // }
}
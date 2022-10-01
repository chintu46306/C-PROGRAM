#include <stdio.h>
void main()
{
    int a[2][3], b[2][3], c[2][3], row, col;
    printf("enter the first matrix : \n");
    for (row = 0; row < 2; row++)
    {
        for (col = 0; col < 3; col++)
        {
            scanf("%d\t", &a[row][col]);
        }
        printf("\n");
    }
    printf("enter the second matrix : \n");
    for (row = 0; row < 2; row++)
    {
        for (col = 0; col < 3; col++)
        {
            scanf("%d\t", &b[row][col]);
        }
        printf("\n");
    }
    printf("the sum is : \n");
    for (row = 0; row < 2; row++)
    {
        for (col = 0; col < 3; col++)
        {
            c[row][col] = a[row][col] + b[row][col];
            printf("%d\t", c[row][col]);
        }
        printf("\n");
    }
}
#include <stdio.h>
#define N 50
int main()
{
    int a[N][N], b[N][N], c[N][N], i, j, k, sum, m, n, p, q;
    printf("enter rows and columns for first matrix:\n");
    scanf("%d%d", &m, &n);
    printf("enter first matrix : \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)

        {
            scanf(" %d ", &a[i][j]);
        }
    }

    printf("enter rows and columns for Second matrix : \n ");
    scanf(" %d%d ", &p, &q);
    printf("\n enter second matrix :\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf(" %d ", &b[i][j]);
        }
    }
    printf("\n first matrix is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\nsecond matrix is :\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    if (n != p)
    {
        printf("can not multiply");
    }
    else
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                sum = 0;
                for (k = 0; k < m; k++)
                {
                    sum = sum + (a[i][k] * b[k][j]);
                }
                c[i][j] = sum;
            }
        }
        printf("mutiplication is:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }
}

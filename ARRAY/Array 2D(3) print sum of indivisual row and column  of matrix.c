#include<stdio.h>
int main()
{
    int a[3][3],i,j,SumRow,SumCol;
    printf("Enter matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix is:\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
         SumRow=SumCol=0;
       for(j=0;j<3;j++)
       {
        SumRow=SumRow+a[i][j];
        SumCol=SumCol+a[j][i];
       }  
       printf("\n SumRow=%d, SumCol=%d",SumRow,SumCol);
    }
    return 0;
}
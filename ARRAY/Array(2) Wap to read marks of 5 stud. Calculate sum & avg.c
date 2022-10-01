#include<stdio.h>
void main()
{
    int marks[5],i;
    float sum=0,avg;
    printf("enter the marks of 5 students:\n");
    for(i=0;i<5;i++)
    {
      scanf("%d",&marks[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+marks[i];
    }  
    avg=sum/5;
    printf("sum=%f",sum);
    printf("\n average=%f", avg);   
}
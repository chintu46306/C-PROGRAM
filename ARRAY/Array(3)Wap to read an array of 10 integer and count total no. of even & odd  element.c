#include<stdio.h>                                          
void main()
{
    int a[10],i;
    int even=0,odd=0;
    printf("enter the 10 number: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
             even++;
         else
            odd++;
    }
    printf("total even no. are:%d",even);
    printf("\ntotal odd no. are:%d",odd);
}

//  prog not run


#include<stdio.h>
void main()
{
    int a[5],b[5],c[5],i;
    printf("enter the first array : ");
    for(i=0;i<5;i++)
    
        scanf("%d",&a[i]);
    printf("enter the second array : ");
    for(i=0;i<5;i++)
    
        scanf("%d",&b[i]);
    
    for(i=0;i<5;i++)
    { 
        c[i]=a[i]+b[i];
        printf("the sum is%d : %d",i,c[i]);
    }
}
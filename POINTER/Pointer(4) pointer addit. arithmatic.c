#include<stdio.h>
void main()
{
    int a[5]={1,4,2,-8,0};
    int *p=&a[0];              // here address of 1 is 0
    int *q=&a[0];              // nahi v rhega to chalega
    printf("value is:%d\n",*p);
    printf("address of element is:%d\n", p);
    p=p+2;
    printf("value is:%d\n",*p);
    printf("address of element is:%d",p);

}
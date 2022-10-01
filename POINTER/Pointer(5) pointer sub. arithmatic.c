#include<stdio.h>
void main()
{
    int a[]={2,4,3,0,-7};
    int *p=&a[0];
    int *q=&a[3];
    printf("value of p=%d\n",p);
    printf("value of q=%d\n",q);
    printf("q-p=%d\n",q-p);
    printf("p-q=%d\n",p-q);
    printf("q-p=%d\n",*q-*p);
    printf("p-q=%d\n",*p-*q); 
}

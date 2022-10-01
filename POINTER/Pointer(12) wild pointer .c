#include<stdio.h>
#include<stdlib.h>
void main()
{
    // int a=9;
    int *ptr=(int*)malloc(sizeof(int));
    *ptr=67;
    printf("%d\n",*ptr);
}
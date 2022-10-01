#include<stdio.h>
void modify(char[],char[]);
void main()
{
    char str1[]="chintu";
    char str2[]="raj";
    modify(str1,str2);
}
void modify(char str1[],char str2[])
{
    int i,l=0;
    for(i=0;str1[1]!="\0";i++)
    {
        l=l+1;
    }
    str2[1]='z';
    printf("length of the string 1 is :%d\n",l);
    printf("both the string are:%s %s",str1,str2);
}

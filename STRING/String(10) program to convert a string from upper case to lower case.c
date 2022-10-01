#include<stdio.h>
#include<string.h>
void main()
{
    int i;               //add
    char s1[30];
    printf("enter the string : ");
    gets(s1);
    // strlwr(s1);
    for(i=0;s1[i]!='\0';i++)      //add
    {
        if(s1[i]>='A' && s1[i]<='Z')     //add
        {
            s1[i]=s1[i]+32;              //add
        }
    }
    printf("string is : %s",s1);
}
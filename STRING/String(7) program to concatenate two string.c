#include<stdio.h>
#include<string.h>
int main()
{
    int l1,l2,i;              //added
    char s1[30]="chintu";     //buffer flow problem on arraybox if we put [6] than result will be the same
    char s2[30]="raj";
   // strcat(s1,s2);          here (strcat) is for concatenation

    l1=strlen(s1);            //added
    l2=strlen(s2);            //added     
    for(i=0;i<=12;i++);       //added
    {
        s1[l1+i]=s2[i];       //added
    }
    printf("string after cancatenation is:%s\n",s1);
    puts(s2);
}
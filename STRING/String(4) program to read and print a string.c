#include<stdio.h>
int main()
{
    char name[5];  //here char is name is only 5 but it also print whole name
    printf("enter the name :");
   // scanf("%s%s",fname,lname);
   // printf("%s%s",fname,lname);


   gets(name);
   printf("%s",name);
   puts(name);
   puts(name);
}
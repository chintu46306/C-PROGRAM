#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    float marks;  
}S3={"mohit"};
void main()
{

struct student S1={30,"chintu",95};
struct student S2;
S2=S1 ; 
printf("info for s1");
printf("\n%d %s %f",S1.rollno,S1.name,S1.marks);
printf("\n info for S2");
printf("\n %d %s %f",S2.rollno,S2.name,S2.marks); 
printf("\n info for S3");
printf("\n %d %s %f",S3.rollno,S3.name,S3.marks); 
  
} 
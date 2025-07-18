#include<stdio.h>
#include<string.h>
void acceptdata(struct Student * ptrstudent);
void displaydata(struct Student student);

struct Student
{
    char name[10] ;
    int rollno ;
    int age;
    int std ;
    char div[2];

};
   //struct Student s[totalstudent];
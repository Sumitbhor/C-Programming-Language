#include<stdio.h>
int main(int argc, char const *argv[])
{
    int no;
    printf("enter your number");
    scanf("%d",&no);
    if (no==0)
    {
        printf("this no neither positive nor negative");
    }
    if (no>0)
    {
     printf("this is positive number");
    }
    else
    {
        printf("this is negative number");
    }
    
    return 0;
}

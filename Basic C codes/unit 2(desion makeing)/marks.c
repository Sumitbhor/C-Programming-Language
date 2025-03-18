#include<stdio.h>
int main(int argc, char const *argv[])
{
    int marks;
    printf("enter student marks :");
    scanf("%d",&marks);
    if (marks>=75)
    {
       printf("you got distinction");
    }
    else if (marks>=60)
    {
        printf("you got first class");
    }
    else if (marks>=40)
    {
       printf("you are pass");
    }
     else
    {
        printf("you are fail");
    }
    
    return 0;
}

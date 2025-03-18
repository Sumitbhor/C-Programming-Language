#include<stdio.h>
int main(int argc, char const *argv[])
{
    int no;
    printf("enter number:");
    scanf("%d",&no);
    if (no%2==0)
    {
     printf("this number is enen."); 
    }
    else
    {
        printf("this number is odd");
    }
    
    
    return 0;
}

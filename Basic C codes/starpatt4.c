#include<stdio.h>
int main()
{
    int i,j ,no,space;
    printf("enter how many lines you want to print");
    scanf("%d",&no);
    for (int i = 1; i <= no; i++)
    {
        for (int space = 1; space <=i; space++)
        {
            printf(" ");
        }
        for (int j = no; j>=i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}
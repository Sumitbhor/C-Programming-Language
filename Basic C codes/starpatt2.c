#include<stdio.h>
int main()
{
    int i,j ,no ;
    printf("enter how many lines you want to print");
    scanf("%d",&no);
    for (int i = no; i >=1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
    printf("\n");
    }
    
    return 0;
}

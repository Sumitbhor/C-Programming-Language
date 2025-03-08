#include<stdio.h>
int main()
{
    int i,j ,no,space;
    printf("enter how many lines you want to print");
    scanf("%d",&no);
    for (int i = 0; i <=no; i++)
    {
        for(space=no;space>=i;space--){
            printf(" ");
        }
        for (int j = 0; j <=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}
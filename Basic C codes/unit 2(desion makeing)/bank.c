#include<stdio.h>
int main(int argc, char const *argv[])
{
    int avl_bal=500,withdrawa_amt;
    printf("\n\n\nenter withdraw amt=");
    scanf("%d",&withdrawa_amt);
    if(withdrawa_amt<=avl_bal)
    {
        printf("\n\nmoney withdraw operation bigin.... ");
    }
    else
    {
        printf("\n\ninsufficent balance");
    }
    
    
    return 0;
}

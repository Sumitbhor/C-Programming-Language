#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("enter three numbers :");
    scanf("%d%d%d",&a,&b,&c);
    if (a<b)
    {
        if (a<c)
        {
           printf("\n\nsmallest number is :%d",a);
        }
        else
        {
            printf("\n\nsmallet number is :%c",c);
        }
        
        
    }
    else
    {
        if (b<c)
        {
            printf("\n\nsmallest number is :%d",b);
        }
        else
        {
            printf("\n\nsmallest number is%d",c);
        }
        
        
    }
    
    
    return 0;
}

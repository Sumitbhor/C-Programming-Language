#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,N;
    printf("enter value of N");
    scanf("%d",&N);
    for ( i = 1; i <= 10; i++)
    {
       printf("\n %d*%d=%d",N,i,N*i);
    }
    
    
    return 0;
}

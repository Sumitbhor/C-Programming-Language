#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("enter first value=");
    scanf("%d",&a);
     printf("enter second value=");
        scanf("%d",&b);
        c=a+b;
        printf("\n\n\n\naddition=%d",c);
        c=a-b;
        printf("\nsubtraction=%d",c);
        c=a*b;
        printf("\nmultiplication=%d",c);
        c=a/b;
        printf("\ndivision=%d",c);
        return 0;
}

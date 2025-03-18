#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("\n\n\n\nenter value of a=");
    scanf("%d",&a);
    printf("\nenter value of b=");
    scanf("%d",&b);
     c=a+b;
    printf("\naddition=%d",c);
     c=a-b;
    printf("\nsubtraction=%d",c);
    c=a*b;
    printf("\nmultiplication=%d",c);
    c=a/b;
    printf("\ndividion=%d",c);
    c=a%b;
    printf("\nreminder=%d",c);
    
    return 0;
}

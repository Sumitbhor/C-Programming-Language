#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter your numbers ");
    scanf("%f%f",&a,&b);
    c=a+b;
    printf("\n\naddtion of two numbers : %f",c);
    c=b-a;
    printf("\n\nsubtraction of two numbers : %f",c);
    c=a*b;
    printf("\n\nmultiplication of two numbers : %f",c);
    c=a/b;
    printf("\n\ndivision of two numbers : %f",c);

    return 0;
}

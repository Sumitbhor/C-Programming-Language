#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=10,b=5,temp;
    printf("\n\n*****before swapping*****");
    printf("\na=%d and b=%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\n*****after swapping*****");
    printf("\na=%d and b=%d ",a,b);
    return 0;
}

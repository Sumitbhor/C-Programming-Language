#include<stdio.h>
int main(int argc, char const *argv[])
{
    enum number {x=10, y=20, z=30};
    enum number n1;
    n1=y;
    printf("\nvalue of n1=%d",n1);
    return 0;
}

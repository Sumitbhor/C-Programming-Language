#include <stdio.h>
int main(int argc, char const *argv[])
{
    int y;
    printf("enter year");
    scanf("%d",&y);
if (y%4==0)
{
 printf("this is leap year");
}
else
{
    printf("this is not leap year");
    
}

    return 0;
}

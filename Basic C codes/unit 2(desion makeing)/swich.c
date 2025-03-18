#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    printf("enter any alphabet");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'a':printf("\nyou have entered a");
        break;
    case 'b':printf("\nyou have entered b");
    break;
    case 'c':printf("\nyou have entered c");
    break;
    default:printf("invalid input");
        break;
    }
    return 0;
}

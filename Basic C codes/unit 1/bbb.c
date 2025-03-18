#include<stdio.h>
int main(int argc, char const *argv[])
{
    enum days {mon, tues, wed};
    enum days today;
    today=tues;
    printf("value of today=%d",today);
    
    return 0;
}

#include<stdio.h>
int main(int argc, char const *argv[])
{
    typedef int MSBTE ;
    MSBTE m1;
    enum college{gpp, gpa, grwpt, gps, grwpl, gpb};
    enum college c1;
    m1=100;
    c1=gpp;
    printf("\n\nvslue of m1=%d",m1);
    printf("\nvalue of c1=%d",c1);


    return 0;
}

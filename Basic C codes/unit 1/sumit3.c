#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    a=10;
    b=5;
c=a<b;
printf("\n\n\n\n10<5:%d",c);
c=a>b;
printf("\n10>5:%d",c);
c=(a<=b);
printf("\n10<=5:%d",c);
c=(a>=b);
printf("\n10>=5:%d",c);
c=(a==b);
printf("\n10==5:%d",c);
c=(a!=b);
printf("\n10!=5:%d",c);

    return 0;
}

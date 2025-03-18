#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("\n\n\nenter any two value");
    scanf("%d%d",&a,&b);
  c=a>b?a:b;
  printf("\n\ngreatest number is %d",c);
    return 0;
}

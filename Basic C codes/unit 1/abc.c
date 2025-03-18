#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("\n\n\nenter any two value");
    scanf("%d%d",&a,&b);
  c=a<b?a:b;
  printf("\n\nsmallest number is %d",c);
    return 0;
}

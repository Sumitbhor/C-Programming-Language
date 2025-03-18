#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c,d,total;
    float percentage;
    printf("\n\nenter your phy marks ");
    scanf("%d",&a);
    printf("\n\nenter your che marks ");
      scanf("%d",&b);
    printf("\n\nenter your math marks ");
       scanf("%d",&c);
    printf("\n\nenter yourbio marks ");
        scanf("%d",&d);
    total=a+b+c+d;
    printf("\n\ntotal :%d",total);
        percentage=total/4;
    printf("\n\npercentage : %f",percentage);
 
    
    return 0;
}
 
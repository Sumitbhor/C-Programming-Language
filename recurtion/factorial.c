#include<stdio.h>
int factorial (int num){
    if (num==0) return 1 ;
    return num*factorial(num-1);
    
}

int main()
{
    int number ;
    printf("enterr your number :");
    scanf("%d",&number);
    int result = factorial(number);
    printf("%d:%d",number,result);
    return 0;
}

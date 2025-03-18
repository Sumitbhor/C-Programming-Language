/*if cost price and selling price of an item is input through keyboard,
 wrire a program to determine wherther the sseller made profit or loss and how much*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int p,l,c,s;
      printf("enter the cost and selling price; ");
    scanf("%d%d",&c,&s);
    p=s-c;
    l=c-s;
  
    if (p>0)
    {
        printf("profit = %d",p);
    }
   if (l>0)
   
    {
        printf("loss= %d",l);
    }
    if (p==0)
    {
       printf("there is no profit no loss");
    }
    
    
    return 0;
}

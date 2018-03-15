#include<stdio.h>
int main()
{
    int n,r,res;
    printf("\n enter the n value");
    scanf("%d",&n);
   
   while(n!=0)
   {
       r=n%10;
       res=rns*r;
       n=n/10;
   }
   printf("%d",res);
   return 0;
}

#include<stdio.h>
int main()
{
    int a,b,c,mod,temp;
    printf("\n enter a b c values");
    scanf("%d%d%d",&a,&b,&c);
    temp=a*b;
    mod=temp%c;
    printf("\n%d",mod);
    return 0;
}

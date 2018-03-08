#include<stdio.h>
int main()
{
    int a,sum=0,t;
    scanf("%d",&a);
    while(a!=0)
    {
        t=a%10;
        sum=sum+t;
        a=a%10;
    }
    printf("%d",sum);
    return 0;
}

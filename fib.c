#include<stdio.h>
int main()
{
    int n,f,f1=0,f2=1,i;
    printf("\n enter the n value");
    scanf("%d",&n);
    printf("%d%d",f1,f2);
    for(i=2;i<n;i++)
    {
        f=f1+f2;
        f1=f2;
        f2=f;
        printf("%d",f);
    }
}

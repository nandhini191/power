#include<stdio.h>
int main()
{
    int n,i,a[100],c,b;
    printf("\n enter the numbers");
    scanf("%d%d",&b,&c);
    for(i=0;i<=100;i++)
    {
        scanf("%d",a[i]);
        n++;
    }
    for(i=0;i<=n-1;i++)
    {
        if(c==a[i])
        {
            printf("%d",a[i]);
            
        }
    }return 0;
    
}

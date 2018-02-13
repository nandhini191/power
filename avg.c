#include<stdio.h>
int main()
{
    int n,avg=0,i,a[20],ans;
    printf("\n enter the numbers");
    scanf("%d",&n);
    printf("\n enter the numbers");
    for(i=0;i<n;i++)
    
        scanf("%d",&a[i]);
    
    for(i=0;i<n;i++)
    {
    avg=avg+a[i];
    }
    
    ans=avg/n;
    printf("\n %d",ans);
    return 0;
}

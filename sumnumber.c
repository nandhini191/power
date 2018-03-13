#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[10],i,sum=0;
    printf("\n enter the n value");
    scanf("%d",&n);
    printf("\n enter the array values");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("\n sum values%d",sum);
    return 0;
}

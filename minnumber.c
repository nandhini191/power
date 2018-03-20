#include<stdio.h>
int main()
{
    int i,a[10],n,t,j,c=1;
    printf("\n enter the number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
                c++;
                if(c==1)
                {
                    printf("%d",j);
                }
            }
        }
    }}

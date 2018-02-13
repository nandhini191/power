#include<stdio.h>
int main(void)
{
    int i,j,n,t,a[i];
    printf("enter the numbers");
    scanf("%d",&n);
    printf("enter the numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<=a[i];i++)
    {
        for(j=0;j<=a[i];j++)
        {
            if(a[i]>a[j])
            {
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    
        printf("\n highest number is%d",a[0]);
        printf("\n lowest number is%d",a[0]);
    }
}
        
    
    

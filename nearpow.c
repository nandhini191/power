#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    printf("\n enter the n value");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(pow(2,i)>=n)
        {
        printf("\n nearest power of 2 is%.0f",pow(2,++i));
        break;
        }
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int n,reminder,reversednumber=0;
    printf("\n enter the number");
    scanf("%d",&n);
    while(n!=0)
    {
        reminder=n%10;
        reversednumber=reversednumber*10+reminder;
        n/=10;
    }
    printf("%d",reversednumber);
    return 0;
}

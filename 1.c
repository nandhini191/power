#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("\n enter number ");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
{
    if(n%i==0)
    count++;
}
if(count==1)
printf("yes");
else
printf("no");
return 0;
}
    

#include <stdio.h>
int main()
{
    int a,n;
    printf("enter the value:");
    scanf("%d%d",&n,&a);
    n=n^a;
    a=n^a;
    n=n^a;
    printf("after swapping: %d %d",n,a);
    
return 0;
    
}





#include<stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("nearest neven number is",n);
        
    }
    else
    {
        printf("nearest even number is",n-1,n+1);
        

    }
}

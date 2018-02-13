#include<stdio.h>
int main()
{
    int n,square;
    printf("\n enter the number");
    scanf("%d",&n);
    square=n^2;
    if(square/2==0)
    {
        printf("\n power of two");
    }
    else
    {
        printf("\n not a power of two");
    }
}

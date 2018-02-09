#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the values");
    scanf("%d%d",&a,&b);
    c=a*b;
    printf("\n%d",c);
    if(c%2==0)
    {
        printf("\n even number");
        
    }
    else
    {
        printf("\nis odd number");
    }
}

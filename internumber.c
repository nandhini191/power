#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\n enter the number");
    scanf("%d",&a);
    printf("\n enter the b and c values");
    scanf("%d%d",&b,&c);
    if(a>b&&a<c)
    {
        printf("%d",a);
    }
    else
    {
        printf("not present");
    }
}

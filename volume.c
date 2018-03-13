
#include<stdio.h>
int main()
{
    int l,b,h,area,volume;
    printf("\n enter the value of l b h");
    scanf("%d%d%d",&l,&b,&h);
    area=2*l+2*b+2*h;
    printf("\n area is %d",area);
    volume=l*b*h;
    printf("\n volume is %d",volume);
}

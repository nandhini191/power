#include<stdio.h>
int main()
{
    int i,num1,num2,gcd;

    printf("\n enter the numbers");
    scanf("%d%d",&num1,&num2);
    for(i=1;i<=num1&&i<=num2;i++);
    {
        if(num1%i==0&&num2%i==0)
        gcd=i;
        
    }
    printf("%d",gcd);
}

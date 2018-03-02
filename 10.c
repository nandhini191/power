#include<stdio.h>
int main()
{
    int n;
    printf("\n enteer the number");
    scanf("%d",&n);
    while(n%10!='\0')
    {
        n++;
    }
printf("%d",n); 
return 0;
    
}

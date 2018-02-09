#include<stdio.h>
int main()
{
    int n,i;
    char a[30];
    printf("enter the character:");
    scanf("%s",&a);
    printf("enter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%c",a[i]);
    }
}

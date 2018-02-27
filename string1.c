#include<stdio.h>
#include<string.h>
int main()
{
    int a,b;
    char s[20];
    scanf("%s",&s);
    a=srtlen(s);
    if(a%2!=0)
    {
        b=a/2;
        s[b]='*';
        printf("\n %s",s);
    }
    else
    {
        b=a/2;
        s[b]='*';
        s[b-1]='*';
        printf("\n %s",s);
        
    }
    return 0;
}

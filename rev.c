#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],string;
    
    gets(a);
    if(string=strrev(a))
    {
        printf("\n yes");
    }
    else
    {
        printf("\n no");
    }
    return 0;
}

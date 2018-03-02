#include<stdio.h>
#include<string.h>
int main()
{
    char a[30];
    int i,count;
    
  scanf("%[^\n]%*c",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==32)
        {
        count++;
        }}
    printf("%d",++count);
    return 0;
}


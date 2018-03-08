#include<stdio.h>
int main(void)
{
    int i,count=0;
    char a[1000];
    printf("\n enter the  characters");
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
       {
           count++;
           break;
       }
    }
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='0'&&a[i]<='9')
        {
            count++;
            break;
        }
        
    }
    if(count==2)
    
        
        printf("yes");
        
    
        else
        
        printf("no");
    
    return 0;
    
}

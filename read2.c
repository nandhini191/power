#include<stdio.h>
void main()
{
int b[20],i=0;
printf("enter the digit");
scanf("%s",&b);
while(isdigit(b[i]))
{
if((b[i]%2)!=0)
{
printf("%d\t",b[i]);
}
i++;
}
}

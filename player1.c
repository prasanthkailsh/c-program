#include<stdio.h>
#include<string.h>
void main()
{
int i,c;
char a[100000];
scanf("%s",a);
c=strlen(a);
for(i=c-1;i>=0;i--)
{
printf("%c",a[i]);
}
}

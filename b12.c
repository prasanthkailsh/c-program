#include<stdio.h>
void main()
{
int n,pal,i,a,temp=0;
scanf("%d",&n);
pal=n;
for(i=0;pal!=0;i++)
{
    a=pal%10;
    temp=temp*10 + a;
    pal=pal/10;
}
if(n==temp)
    printf("palindrome");

    else 
    printf("not palindrome");                       
}

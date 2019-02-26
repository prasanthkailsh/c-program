#include<stdio.h>
int main(void)
{
int a,k,i,n=1;
printf("enter the base number:");
scanf("%d",&a);
printf("enter the exponent number:");
scanf("%d",&k);
for(i=1;i<=k;i++)
{
n=n*a;
}
printf("power of a number %d",n);
}

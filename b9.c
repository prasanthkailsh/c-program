#include<stdio.h>
int main()
{
int a[10],p,n,s,sum=0;
scanf("%d%d",&n,&s);
for(p=1;p<=n;p++)
{
 scanf("%d",&a[p]);   
}
for(p=0;p<=s;p++)
{
sum=sum+p;
}
printf("%d",sum);
}

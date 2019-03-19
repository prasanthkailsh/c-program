# include<stdio.h>
void main()
{
int i,j,m,p=0,n;
scanf("%d %d",&m,&n);
for(i=m;i<=n;i++)
{
p=0;
for(j=1;j<=n;j++)
{
if(i%j==0)
p++;
}
if(p==2)
printf("%d  ",i);
}
}

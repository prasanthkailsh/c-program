#include<stdio.h>
void main()
{
int n,count=0;
printf("enter the num");
scanf("%d",&n);
while(n)
{
n=n/10;
count++;
}
printf("total digits %d",count);
}

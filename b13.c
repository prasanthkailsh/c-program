#include<stdio.h>
int main()
{
int num,n,count=0;
scanf("%d",&num);
for(n=2;n<num;n++)
{
if(num%n==0)
count++;
}
if(count==0)
printf("prime number\n");
else
printf("not a prime number\n");
}

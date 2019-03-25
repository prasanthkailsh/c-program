#include <stdio.h>
int main()
{
  int n,i,p,flag,count=0;
  scanf("%d",&p);
  scanf("%d",&n);
  while(p<n)
  {
  for(i=2;i<=p/2;i++)
  {
  flag=0;
    if(p%i==0)
    {
    flag=1;
    break;
    }
  }
  if(flag==0)
  {
  count++;
  }
  ++p;
  }
 printf("%d",count);
 return 0;
}

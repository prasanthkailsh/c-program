#include <stdio.h>
#include<string.h>
void main() 
{
	char str1[100],str2[100];
	int i,j,flag=1,p,n;
	scanf("%s %s",str1,str2);
	int a=strlen(str1);
	int b=strlen(str2);
	if(a==b)
	{
	for(i=0;i<a;i++)
	{
		for(j=i+1;j<b;j++)
		{
			p=str1[i]-str1[j];
			n=str2[i]-str2[j];
			if(p==n)
			{
				flag=0;
			}
			else
			{
				flag=1;
				break;
			}
		}
	}
	}
	
	if(flag==1)
	{
   printf(" \nno");
	}
	else
	{
		printf(" \nyes");
	}
}

#include <stdio.h>
#include<string.h>
void main() 
{
	char s1[50],s2[50];
	int i,j,a,b,count=0;
	scanf("%s %s",s1,s2);
	a=strlen(s1);
	b=strlen(s2);
	if(a==b)
	{
		for(i=0;i<a;i++)
		{
			if(s1[i]==s2[i])
			{
				count=count+0;
			}
			else
			{
				count=count+1;
			}
			
		}
		if(count==1)
		{
			printf("\nyes");
		}
		else
		{
			printf("\nno");
		}
	}
	else
	{
		printf("\nno");
	}
}

#include <stdio.h>
#include<string.h>
void main()
{
	char a[50];
	int i,l;
	scanf("%[^\n]s",a);
	l=strlen(a);
	if(a[0]>91)
	{
		a[0]=a[0]-32;
	}
	for(i=0;i<l;i++)
		{
			if(a[i]==' ')
			{
				if(a[i+1]>91)
				{
					a[i+1]=a[i+1]-32;
				}
			}
		}
	printf("%s",a);
}

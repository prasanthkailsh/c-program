#include<stdio.h>
void main()
{
char ch;
printf("enter the character");
scanf("%c",&ch);
if((ch>=97 && ch<=122)||(ch>=65 && ch<=90))
printf("character is alphabet",ch);
else
printf("character is not alphabet",ch);
}

#include <stdio.h>
void main()
{
char ch;
printf("enter the letter");
scanf("%c",&ch);
if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
{
printf("vowel",ch);
}
else
{ 
printf("consontant",ch);
}
}

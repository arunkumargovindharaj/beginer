
#include<stdio.h>
#include<conio.h>
void main()
{
char s[100],l=0,d=0;
int i;
clrscr();
gets(s);
for(i=0;s[i]!='\0';i++)
{
if(i==0)
{
if(s[i]>='a'&&s[i]<='z')
s[i]=s[i]-32;
continue;
}
if(s[i]==' ')
{
i++;
if(s[i]>='a'&&s[i]<='z')
{
s[i]=s[i]-32;
continue;
}
} }
printf("%s",s);
getch();
}


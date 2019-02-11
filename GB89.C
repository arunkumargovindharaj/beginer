#include<stdio.h>
void main()
{
int i,n=0,j;
char s[100],b[100],a[100];
clrscr();
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
n++;
}
j=0;
for(i=n-1;i>=0;i--)
{
b[j]=s[i];
j++;
}
for(i=0;i<n;i++)
{
printf("%s",b[i]);
 }

getch();
}
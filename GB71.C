#include<stdio.h>
void main()
{
int i,j=0,n=0,k=0;
char s[100],b[100];
clrscr();
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
n++;
}
//j=0;
for(i=n-1;i>=0;i--)
{
b[i]=s[j];
j++;
}
for(i=0;i<n;i++)
{
if(s[i]==b[i])
{
k++;
}}


if(n==k)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
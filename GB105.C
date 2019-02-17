#include<stdio.h>
void main()
{
int a,b,i,s[10],l=0,n;
clrscr();
scanf("%d%d",&a,&b);
for(i=0;i<n;i++)
{
scanf("%d",&s[i]);
}
for(i=0;i<n;i++)
{
if(s[i]%2!=0)
{
l++;
if(l==b)
printf("%d",s[i]);
}}
getch();
}

#include<stdio.h>
void main()
{
int n,k,s[100],c=0,i;
clrscr();
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&s[i]);
}
for(i=0;i<n;i++)
{
if(s[i]%2!=0)
{
c++;
if(c==k)
printf("%d",s[i]);  }}
getch();
}
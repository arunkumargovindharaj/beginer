#include<stdio.h>
void main()
{
int n,i,c=0;
clrscr();
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
c++;
}}
if(c!=0)
{
printf("no");
}
else
{
printf("yes");
}
getch();
}
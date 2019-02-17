#include<stdio.h>
void main()
{
int a[10],i,n,j,flag=0;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]<a[j])
{
flag=0;
}
else
{
printf("%d",i); }} }
getch();
}
#include<stdio.h>
void main()
{
int a[10],i,max=0,min=99,n;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
} }
for(i=0;i<n;i++)
{
if(a[i]<min)
min=a[i];
}
printf("%d,%d",max,min);
getch();
}
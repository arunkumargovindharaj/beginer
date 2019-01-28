#include<stdio.h>
void main()
{
int a[10],i,n,max;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=0;
for(i=0;i<n;i++)
{
if(max<a[i])
{
max=a[i];
} }
printf("%d",max);
getch();
}


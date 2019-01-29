#include<stdio.h>
void main()
{
int a[10],i,sum=0,ave=0,n;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
ave=sum/n;

printf("%d",ave);
getch();
}
#include<stdio.h>
void main()
{
int a[10],i,n;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("element%d\tindex%d\n",a[i],i);
}
getch();
}

#include<stdio.h>
void main()
{
int i, a[100],n;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(i%2!=0)
{
printf("%d\t",a[i]);
}
}
getch();
}
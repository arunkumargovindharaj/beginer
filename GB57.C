#include<stdio.h>
void main()
{
int n,k,a[100],i,c=0;
clrscr();
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
//scanf("%d",&k);
for(i=0;i<n;i++)
{
if(a[i]==k)
{
c++;
}   }
printf("%d",c);
getch();
}
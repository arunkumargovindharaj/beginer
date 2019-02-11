#include<stdio.h>
void main()
{
int n,m,c=0;
clrscr();
scanf("%d%d",&n,&m);
if(n>=m)
{
c=n-m;
}
if(n<=m)
{
c=n-m;
}
if(c%2==0)
{
printf("even");
}
else
{
printf("odd");
}

getch();
}
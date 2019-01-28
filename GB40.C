#include<stdio.h>
void main()
{
int n,c=0,i,d1=0,d2=1;
clrscr();
scanf("%d",&n);
for(i=1;i<=n;i++)
{
c=d1+d2;
d1=d2;
d2=c;


printf("%d",d1); }
getch();
}


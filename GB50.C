#include<stdio.h>
void main()
{
int a,b,c=0,i,j,d=0;
clrscr();
scanf("%d",&a);
for(i=0;i<=a;i++)
{
for(j=0;j<=a;j++)
{
c=i*j;
}
if(c==a)
{
d=c%2;
if(d==0)
printf("yes");}  }
getch();
}
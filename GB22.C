#include<stdio.h>
void main()
{
int a,i,c=0;
clrscr();
scanf("%d",&a);
for(i=1;i<=a;i++)
{
if(a%i==0)
{
c++;
} }
if(c==2)
{
printf("yes");
 }
else
{
printf("no");
  }
getch();
}
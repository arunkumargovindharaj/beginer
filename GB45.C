#include<stdio.h>
void main()
{
int a, i,l=0,n;
clrscr();
scanf("%d",&a);
while(a)
{
a=a/10;
l++;
}
printf("%d",l);

 getch();
 }
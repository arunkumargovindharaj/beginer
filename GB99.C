#include<stdio.h>
void main()
{
int a,b,c,d=0,e=0;
clrscr();
scanf("%d%d%d",&a,&b,&c);
d=a*b;
e=d%c;

printf("%d",e);
getch();
}
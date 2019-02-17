#include<stdio.h>
void main()
{
int a,b,c,volume=0,tsa=0;
clrscr();
scanf("%d%d%d",&a,&b,&c);
volume=a*b*c;
tsa=2*((a*b)+(b*c)+(c*a));
printf("%d",volume);
printf("%d",tsa);
getch();
}

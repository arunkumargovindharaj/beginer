#include<stdio.h>
void main()
{
int i,a,b,c,sum=0;
clrscr();
scanf("%d%d%d",&a,&b,&c);
for(i=1;i<c;i++)
{
sum=sum+a+(i*b);
}
printf("%d",sum+a);
getch();
}
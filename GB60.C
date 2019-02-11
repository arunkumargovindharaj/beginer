#include<stdio.h>
void main()
{
int num,i,n=0;
clrscr();
scanf("%d",&num);
for(i=1;i<=num;i++)
{
n=n+i;
}
printf("%d",n);
getch();
}
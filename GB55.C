#include<stdio.h>
void main()
{
int num=0,n,m;
clrscr();
scanf("%d%d",&n,&m);
num=n*m;
//while(num)
//{
if(num%2==0)
{
printf("even");
}
else
{
printf("odd");
}

getch();
}
#include<stdio.h>
void main()
{
int a,b,c=0;
clrscr();
scanf("%d%d",&a,&b);
c=a+b;
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
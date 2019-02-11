#include<stdio.h>
void main()
{
int a,n=0,i=0;
clrscr();
scanf("%d",&a);
while(a)
{
n=a%10;
a=a/10;
//printf("%d\t",n);
}
while(n)
{
i=n%10;
n=n/10;
printf("%d",i);
}
getch();
}
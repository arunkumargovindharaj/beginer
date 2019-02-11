#include<stdio.h>
void main()
{
int num,c=0,a;
clrscr();
scanf("%d",&num);
while(num)
{
a=num%10;
num=num/10;
c=c+a;
}
printf("%d",c);
getch();
}
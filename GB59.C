#include<stdio.h>
void main()
{
int num,a=0,b=0,c=0;
clrscr();
scanf("%d",&num);
while(num)
{
a=num%10;
num=num/10;
c++;
}
printf("%d",c);
getch();
}
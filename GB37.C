#include<stdio.h>
void main()
{
int a,b,temp=0;
clrscr();
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("swap%d\n%d",a,b);
getch();
}


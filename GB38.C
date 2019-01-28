#include<stdio.h>
void main()
{
int a,b;
clrscr();
scanf("%d%d",&a,&b);
a^=b;
b^=a;
a^=b;
printf("swap%d\n%d",a,b);
getch();
}


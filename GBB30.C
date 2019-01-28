#include<stdio.h>
void main()
{
int a,i,b=0,d,c,sum=0,sum1=0;
clrscr();
scanf("%d%d",&a,&b);
scanf("%d%d",&c,&d);
if(a>b)
{
sum=a-b;
}
else
{
sum=b-a;
}
 if(c>d)
{
sum1=c-d;
}
else
{
sum1=d-c;
}

printf("hours%dmuns%d",sum,sum1);

getch();
}

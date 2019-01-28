#include<stdio.h>
void main()
{
int a,t,g,l=0,c,p,f,e=0;
clrscr();
scanf("%d",&a);
t=a;
g=a;
while(g)
{
g=g/10;
l++;
}
while(a)
{
f=a%10;
p=1;
c=1;
while (c)
{
p=p*f;
c--;
}
e=e+p;
a=a/10;
}
if(t==e)
{
printf("ams");
}
else{
printf("not ams");
}
getch();
}

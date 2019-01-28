#include<stdio.h>
void main()
{
int a,i,b=0,d,c;
clrscr();
scanf("%d",&a);
if(a<=59)
{
if(a<=59)
{
printf("hour%d",b);  }
printf("mins%d",a);
}
else
{
c=a%60;
d=a/60;
if(a%60==0)
{
printf("hours%d",d);
}
if(a%60!=0)
{
printf("hours%dmins%d",d,c);

}
 }

getch();
}

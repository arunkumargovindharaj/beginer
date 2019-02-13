#include<stdio.h>
void main()
{
int i,n1,n2; char c;
clrscr();
for(i=0;i<4;i++);
{
scanf("%d %c %d",&n1,&c,&n2);
if(c=='/')
{
printf("%d\n",n1/n2);
}
if(c=='%')
{
printf("%d\n",n1%n2);
}  }
getch();
}